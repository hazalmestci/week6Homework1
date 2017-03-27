//
//  boid.cpp
//  week6Homework1
//
//  Created by Hazal Mestci on 3/6/17.
//
//


#include "boid.hpp"

boid::boid(){
    pos = ofVec2f(ofGetWindowWidth()/2 + ofRandom(-100,100), ofGetWindowHeight()/2 * ofRandom(-10,10));
    vel = ofVec2f(0);
}

void boid::update(){
    
}

void boid::drawBoid(){
    ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255),ofRandom(255));
    ofDrawCircle(pos, size+ofRandom(-20,10));
    
}

void boid::move(){
    vel = vel + v1 + v2 + v3;
    
    pos = pos + vel;
}
