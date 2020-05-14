#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    int size = 10;
    
    float scaleX1 = 0.002;
    float scaleY1 = 0.003;
    
    float scaleX2 = 0.001;
    float scaleY2 = 0.002;
    
    float scaleX3 = 0.05;
    float scaleY3 = 0.03;
    
    float speed = ofGetElapsedTimef() * 0.08;
    
    // Draws Lines in Checkerboard
    for(int x = 0 ; x < ofGetWidth(); x += size){
        for(int y = 0; y < ofGetHeight(); y += size){
            
            float noise1 = ofNoise(x * scaleX1, y * scaleY1 + 100, speed);
            float noise2 = ofNoise(x * scaleX2 + 1000, y * scaleY2 + 3000, speed);
            
            Cell myCell;
            
            //1st part: check if x and y are multiples of size * 2
            //2nd part: check if x and y are multiples of size (not size*2)
            if(((x%(size * 2) == 0 && y%(size * 2) == 0)) ||
               ((x%(size * 2) == size && y%(size * 2) == size))){
                myCell.draw(x, y, noise1, size, speed);
            }else{
                myCell.draw(x, y, noise2, size, speed);
            }
        }
    }
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
