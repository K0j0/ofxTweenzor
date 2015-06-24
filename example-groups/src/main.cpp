#include "ofMain.h"
#include "ofApp.h"
#include "ofAppGlutWindow.h"

//========================================================================
int main( ){
	// Using GLUT because of Ubuntu 14.10 bug
	ofAppGlutWindow window; // create a window
	ofSetupOpenGL(&window, 800,500, OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp( new ofApp());

}