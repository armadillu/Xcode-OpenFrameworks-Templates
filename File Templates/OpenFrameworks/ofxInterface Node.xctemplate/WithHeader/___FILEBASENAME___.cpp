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
	ofRemoveListener(eventTouchDown, this, &___FILEBASENAMEASIDENTIFIER___::onTouchDown);
	ofRemoveListener(eventTouchUp, this, &___FILEBASENAMEASIDENTIFIER___::onTouchUp);
	ofRemoveListener(eventTouchMove, this, &___FILEBASENAMEASIDENTIFIER___::onTouchMove);
	ofRemoveListener(eventClick, this, &___FILEBASENAMEASIDENTIFIER___::onClick);
}

void ___FILEBASENAMEASIDENTIFIER___::setup(float x, float y, float w, float h){
	ofAddListener(eventTouchDown, this, &___FILEBASENAMEASIDENTIFIER___::onTouchDown);
	ofAddListener(eventTouchUp, this, &___FILEBASENAMEASIDENTIFIER___::onTouchUp);
	ofAddListener(eventTouchMove, this, &___FILEBASENAMEASIDENTIFIER___::onTouchMove);
	ofAddListener(eventClick, this, &___FILEBASENAMEASIDENTIFIER___::onClick);
}

void ___FILEBASENAMEASIDENTIFIER___::update(float dt){
}

void ___FILEBASENAMEASIDENTIFIER___::draw(){
}

void ___FILEBASENAMEASIDENTIFIER___::drawDebug(){
	Node::drawDebug();
}

void ___FILEBASENAMEASIDENTIFIER___::drawBounds(){
	Node::drawBounds();
}

bool ___FILEBASENAMEASIDENTIFIER___::contains(const ofVec3f& globalPoint){
	Node::contains(globalPoint);
}

void ___FILEBASENAMEASIDENTIFIER___::onClick(TouchEvent&){
}

void ___FILEBASENAMEASIDENTIFIER___::onTouchDown(TouchEvent& event){
}

void ___FILEBASENAMEASIDENTIFIER___::onTouchMove(TouchEvent& event){
}

void ___FILEBASENAMEASIDENTIFIER___::onTouchUp(TouchEvent& event){
}

