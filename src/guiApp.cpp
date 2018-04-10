#include "guiApp.h"

//--------------------------------------------------------------
void guiApp::setup() {
	// ofSetVerticalSync(true);

	// we add this listener before setting up so the initial circle resolution is correct
	// circleResolution.addListener(this, &ofApp::circleResolutionChanged);
	// ringButton.addListener(this, &ofApp::ringButtonPressed);

	gui.setup("VS Controls"); // most of the time you don't need a name
	// gui.add(filled.setup("fill", true));
	// gui.add(radius.setup("radius", 140, 10, 300));
	// gui.add(center.setup("center", ofVec2f(ofGetWidth()*.5, ofGetHeight()*.5), ofVec2f(0, 0), ofVec2f(ofGetWidth(), ofGetHeight())));
	// gui.add(color.setup("color", ofColor(100, 100, 140), ofColor(0, 0), ofColor(255, 255)));
	// gui.add(circleResolution.setup("circle res", 5, 3, 90));
	// gui.add(twoCircles.setup("two circles"));
	// gui.add(ringButton.setup("ring"));
	// gui.add(screenSize.setup("screen size", ofToString(ofGetWidth()) + "x" + ofToString(ofGetHeight())));
	
	gui.add(playPause.setup("Play / Pause"));

	// bHide = false;

	// ring.load("ring.wav");
}

void guiApp::update()
{
}

void guiApp::draw()
{
}

