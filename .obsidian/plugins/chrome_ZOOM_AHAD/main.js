const { Plugin } = require('obsidian');
const { webFrame } = require('electron');

module.exports = class ChromePinchZoom extends Plugin {
    onload() {
        webFrame.setVisualZoomLevelLimits(1, 5);
    }

    onunload() {
        webFrame.setVisualZoomLevelLimits(1, 1);
    }
};