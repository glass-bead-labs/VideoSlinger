#include "ofMain.h"
#include "ofApp.h"
#include "guiApp.h"

//========================================================================
int main( ){
	ofGLFWWindowSettings settings;
	// settings.windowMode = OF_WINDOW;
	settings.decorated = true;

	// The "main" window with video
	settings.width = 1280;
	settings.height = 720;
	settings.setPosition(ofVec2f(400, 100));
	auto mainWindow = ofCreateWindow(settings);
	auto mainApp = make_shared<ofApp>();
	ofRunApp(mainWindow, mainApp);

	// A smaller window for GUI
	settings.width = 300;
	settings.height = 300;
	settings.setPosition(ofVec2f(100, 100));
	auto guiWindow = ofCreateWindow(settings);
	auto gui = make_shared<guiApp>();
	ofRunApp(guiWindow, gui);

	ofRunMainLoop();
}
