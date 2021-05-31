//
//  RectanPrism.cpp
//  assign2
//
//  Created by Qiang on 20/09/2014.
//  Copyright (c) 2014 Steven.Q. All rights reserved.
//

#include "RectanPrism.hpp"
#include <math.h>

#ifdef __APPLE__
#include <OpenGL/gl.h>
#elif defined(WIN32)
#include <Windows.h>
#include <GL/gl.h>
#else
#include <GL/gl.h>
#endif


RectanPrism::RectanPrism():Shape(){
    RectanX = RectanY = RectanZ = 0.0;
};


RectanPrism::RectanPrism(double RectanX_, double RectanY_, double RectanZ_):Shape(){
    
    RectanX = RectanX_;
    RectanY = RectanY_;
    RectanZ = RectanZ_;
    //setRotation(atan(RectanZ_/RectanX_));
};


RectanPrism::RectanPrism(Shape center, double RectanX_, double RectanY_, double RectanZ_):Shape(){

    x = center.getX();
    y = center.getY();
    z = center.getZ();
    
    rotation = center.getRotation();

    red = center.getRed();
    green = center.getGreen();
    blue = center.getBlue();
    
    RectanX = RectanX_;
    RectanY = RectanY_;
    RectanZ = RectanZ_;
};


// NOT finished, for sparing
RectanPrism::RectanPrism(double X, double Y, double Z, double rotation, double RectanX_, double RectanY_, double RectanZ_):Shape(x, y, z, rotation){

    RectanX = RectanX_;
    RectanY = RectanY_;
    RectanZ = RectanZ_;
};




void RectanPrism::setLenth(double x_, double y_, double z_){
    RectanX = x_;
    RectanY = y_;
    RectanZ = z_;
};


void RectanPrism::draw(){
    glColor3f(red,green,blue);
    glTranslatef (x, y, z);
    glRotatef(rotation, 0, -1, 0);
    
	// Draw a point
	glBegin(GL_QUAD_STRIP);
    
    
    glVertex3f(RectanX/2,y,RectanZ/2);
    glVertex3f(RectanX/2,y,-RectanZ/2);
    
    glVertex3f(-RectanX/2,y,RectanZ/2);
    glVertex3f(-RectanX/2,y,-RectanZ/2);
    
    glVertex3f(-RectanX/2,RectanY,RectanZ/2);
    glVertex3f(-RectanX/2,RectanY,-RectanZ/2);
    
    glVertex3f(RectanX/2,RectanY,RectanZ/2);
    glVertex3f(RectanX/2,RectanY,-RectanZ/2);
    
    //glVertex3f(x+RectanX/2+10,0,z+RectanZ/2+10);
    //glVertex3f(x+RectanX/2+10,0,z-RectanZ/2+10);
    
    glVertex3f(-RectanX/2,y,RectanZ/2);
    glVertex3f(-RectanX/2,RectanY,RectanZ/2);
    
    glVertex3f(RectanX/2,y,RectanZ/2);
    glVertex3f(RectanX/2,RectanY,RectanZ/2);
    
    glVertex3f(RectanX/2,y,-RectanZ/2);
    glVertex3f(RectanX/2,RectanY,-RectanZ/2);
    
    glVertex3f(-RectanX/2,y,-RectanZ/2);
    glVertex3f(-RectanX/2,RectanY,-RectanZ/2);
    
    
	glEnd();
	glFlush();

}