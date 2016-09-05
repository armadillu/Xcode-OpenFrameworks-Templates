//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#pragma once
#include "ofMain.h"
#include "ofxInterface.h"

using namespace ofxInterface;

class ___FILEBASENAMEASIDENTIFIER___: public Node{

public:
	
	___FILEBASENAMEASIDENTIFIER___();
	~___FILEBASENAMEASIDENTIFIER___();
	
	void setup(float x, float y, float w, float h);

	void update(float dt);
	void draw();
	
	void drawDebug();	 // debug debugging stuff (will be called by renderDebug)
	
	
protected:

};
