#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class guiApp :
	public ofBaseApp
{
public:
	void setup();
	void update();
	void draw();

	ofxButton playPause;
	ofxPanel gui;
};

