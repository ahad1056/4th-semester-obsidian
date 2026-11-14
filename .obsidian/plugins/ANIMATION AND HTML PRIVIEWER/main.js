const { Plugin } = require('obsidian');

module.exports = class HtmlInlineEmbed extends Plugin {
    onload() {
        const updateEmbeds = () => {
            document.querySelectorAll('.internal-embed').forEach(async (el) => {
                const src = el.getAttribute('src');
                if (!src || (!src.endsWith('.html') && !src.endsWith('.htm'))) return;

                const alt = (el.getAttribute('alt') || '').trim();
                const match = alt.match(/^(\d+)(?:x(\d+))?$/i);
                const reqW = match ? parseInt(match[1]) : (parseInt(el.getAttribute('width')) || 500);
                const reqH = (match && match[2]) ? parseInt(match[2]) : Math.round(reqW * 0.62);

                // ফোনের ছোট স্ক্রিন হলে অটোমেটিক স্ক্রিনের মাপে সীমাবদ্ধ রাখা
                const containerW = el.parentElement ? el.parentElement.clientWidth : (window.innerWidth - 36);
                const maxW = containerW > 60 ? containerW : (window.innerWidth - 36);
                const targetW = Math.min(reqW, maxW);
                const targetH = Math.round(reqH * (targetW / reqW));
                const sizeKey = `${targetW}x${targetH}`;

                if (el.dataset.lastSize === sizeKey) return;
                el.dataset.lastSize = sizeKey;

                const virtualW = Math.max(targetW, 880);
                const scale = targetW / virtualW;

                let wrapper = el.querySelector('.html-embed-wrapper');
                if (!wrapper) {
                    const file = this.app.metadataCache.getFirstLinkpathDest(src, '');
                    if (!file) return;
                    const content = await this.app.vault.read(file);

                    el.empty();
                    wrapper = el.createDiv({ cls: 'html-embed-wrapper' });
                    wrapper.style.overflow = 'hidden';
                    wrapper.style.borderRadius = '8px';
                    wrapper.style.display = 'inline-block';
                    wrapper.style.verticalAlign = 'top';

                    const iframe = wrapper.createEl('iframe');
                    iframe.style.border = 'none';
                    iframe.style.transformOrigin = '0 0';
                    iframe.setAttribute('sandbox', 'allow-scripts allow-same-origin');
                    iframe.srcdoc = content;
                }

                wrapper.style.width = `${targetW}px`;
                wrapper.style.height = `${targetH}px`;

                const iframe = wrapper.querySelector('iframe');
                if (iframe) {
                    iframe.style.width = `${Math.round(targetW / scale)}px`;
                    iframe.style.height = `${Math.round(targetH / scale)}px`;
                    iframe.style.transform = `scale(${scale})`;
                }
            });
        };

        this.observer = new MutationObserver(updateEmbeds);
        this.observer.observe(document.body, {
            childList: true,
            subtree: true,
            attributes: true,
            attributeFilter: ['alt', 'width', 'height']
        });
        window.addEventListener('resize', updateEmbeds);
        this.app.workspace.onLayoutReady(updateEmbeds);
    }

    onunload() {
        if (this.observer) this.observer.disconnect();
    }
};