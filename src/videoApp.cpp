#include "videoApp.h"

//--------------------------------------------------------------
void videoApp::setup(){
	// This is the bin directory running from VS
	// cout << ofFilePath::getCurrentWorkingDirectory();
	
	//Open the Open File Dialog
	ofFileDialogResult openFileResult = ofSystemLoadDialog("Select a video file");

	//Check if the user opened a file
	if (openFileResult.bSuccess) {

		ofLogVerbose("You selected a file");

		//We have a file, check it and process it
		// processOpenFileSelection(openFileResult);

		// Interestingly, this does not load relative to the above (at least when run directly from VS), it looks in <application root>/bin/data
		// vid_file.load("curr.mp4");

		// Hopefully we don't have to worry about it if it's an absolute path
		vid_file.load(openFileResult.getPath());
		vid_file.play();
	}
	else {
		ofLogVerbose("You hit cancel");
	}


	// There are also cam calls in update and draw for re-enabling stuff
	// cam.setup(1280, 720);
}

//--------------------------------------------------------------
void videoApp::update(){
	vid_file.update();
	// cam.update();
}

//--------------------------------------------------------------
void videoApp::draw(){
	vid_file.draw(0, 0);
	// cam.draw(0,0);
}

//--------------------------------------------------------------
void videoApp::keyPressed(int key){

}

//--------------------------------------------------------------
void videoApp::keyReleased(int key){

}

//--------------------------------------------------------------
void videoApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void videoApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void videoApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void videoApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void videoApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void videoApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void videoApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void videoApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void videoApp::dragEvent(ofDragInfo dragInfo){ 

}
