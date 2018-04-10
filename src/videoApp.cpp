#include "videoApp.h"

//--------------------------------------------------------------
void videoApp::setup(){
	cam.setup(1280, 720);
}

//--------------------------------------------------------------
void videoApp::update(){
	cam.update();
}

//--------------------------------------------------------------
void videoApp::draw(){
	cam.draw(0,0);
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
