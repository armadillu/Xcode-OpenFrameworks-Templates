//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#ifndef _____PROJECTNAMEASIDENTIFIER________FILEBASENAMEASIDENTIFIER_____
#define _____PROJECTNAMEASIDENTIFIER________FILEBASENAMEASIDENTIFIER_____

#include "ofMain.h"
#include "ofxInterface.h"

using namespace ofxInterface;

class ___FILEBASENAMEASIDENTIFIER___: public Node{

public:
	
	___FILEBASENAMEASIDENTIFIER___();
	
	void setup(float x, float y, float w, float h);

	void update(float dt);
	void draw();
	
	void drawDebug();	 // debug debugging stuff (will be called by renderDebug)
	void drawBounds();   // overide for debugging if bounds are not rectangular
	bool contains(const ofVec3f& globalPoint);
	
	//events
	void onClick(TouchEvent&);
	void onTouchDown(TouchEvent& event);
	void onTouchMove(TouchEvent& event);
	void onTouchUp(TouchEvent& event);

	
protected:

};

#endif /* defined(_____PROJECTNAMEASIDENTIFIER________FILEBASENAMEASIDENTIFIER_____) */
