//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___.h"

___FILEBASENAMEASIDENTIFIER___::___FILEBASENAMEASIDENTIFIER___(){
}

___FILEBASENAMEASIDENTIFIER___::~___FILEBASENAMEASIDENTIFIER___(){
}

void ___FILEBASENAMEASIDENTIFIER___::setup(float x, float y, float w, float h){
	setSize(w, h);
	setPosition(x, y, 0);
}

void ___FILEBASENAMEASIDENTIFIER___::update(float dt){
	FadeableNode::update(dt);
}

void ___FILEBASENAMEASIDENTIFIER___::drawContent(){

	ofRectangle r = ofRectangle(0,0, getWidth(), getHeight());
	ofSetColor(255);
	G_TEX(LANGUAGE_PATH("textureID"))->draw(r);
}

void ___FILEBASENAMEASIDENTIFIER___::drawDebug(){
	Node::drawDebug();
}
