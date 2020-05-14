#include "Cell.hpp"

//--------------------------------------------------------------
void Cell::setup(){
    
}

//--------------------------------------------------------------
void Cell::update(){
    
}

//--------------------------------------------------------------
void Cell::draw(float x, float y, float noise, float size, float speed){
    
    // COLOR CODE
    float noise4 = round(ofNoise(x * 0.003, y * 0.004, speed * 0.2) * 2);
    ofSetColor(noise * 255, noise4 * 255);
    
    // RECTANGLE CODE
    ofRectangle myRectangle;
    myRectangle.set(x, y, size, size);
    ofNoFill();
    
    // CODE FOR THE LINES
    ofPushMatrix();
    
    ofTranslate(myRectangle.getCenter()); // center of rectangle becomes (0,0)
    
    // rotate the lines
    float myAngle = noise * 360;
    ofRotateZDeg(myAngle);
    
    // draw the lines
    float extraLength = myRectangle.width * 1.5;
    ofDrawLine(0 - myRectangle.width/2 - extraLength * 0.2, 0 ,
               0 + myRectangle.width/2 + extraLength, 0);
    
    ofPopMatrix();
    
}
