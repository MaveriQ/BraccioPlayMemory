#include "ofApp.h"

void ofApp::setup()
{
    string cfgfile = ofToDataPath("cfg/go.test.cfg");
    string weightfile = ofToDataPath( "go.weights");
    
    darknet.setup(cfgfile, weightfile);
    darknet.setMouseActive(true);
    darknet.setDrawPosition(50, 50, 420, 420);
}

void ofApp::update() {
}

void ofApp::draw(){
    darknet.drawBoard();
    darknet.drawRecommendations(500, 100);
}

void ofApp::keyPressed(int key) {
    if (key== ' ') {
        darknet.nextAuto();
    }
}
