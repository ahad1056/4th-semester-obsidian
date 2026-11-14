const { Plugin } = require('obsidian');

module.exports = class HtmlInlineEmbed extends Plugin {
    onload() {
        const renderHtmlEmbeds = () => {
            document.querySelectorAll('.internal-embed').forEach(async (el) => {
                const src = el.getAttribute('src');
                if (!src || (!src.endsWith('.html') && !src.endsWith('.htm'))) return;
                if (el.dataset.htmlRendered) return;
                el.dataset.htmlRendered = 'true';

                const file = this.app.metadataCache.getFirstLinkpathDest(src, '');
                if (!file) return;

                const content = await this.app.vault.read(file);
                const customHeight = parseInt(el.getAttribute('alt')) || 520;

                el.empty();
                const iframe = el.createEl('iframe');
                iframe.style.width = '100%';
                iframe.style.height = `${customHeight}px`;
                iframe.style.border = 'none';
                iframe.style.borderRadius = '8px';
                iframe.setAttribute('sandbox', 'allow-scripts allow-same-origin');
                iframe.srcdoc = content;
            });
        };

        this.observer = new MutationObserver(renderHtmlEmbeds);
        this.observer.observe(document.body, { childList: true, subtree: true });
        this.app.workspace.onLayoutReady(renderHtmlEmbeds);
    }

    onunload() {
        if (this.observer) this.observer.disconnect();
    }
};