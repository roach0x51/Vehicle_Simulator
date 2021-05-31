//
//  CubeCar.cpp
//  assign2
//
//  Created by Qiang on 22/09/2014.
//  Copyright (c) 2014 Steven.Q. All rights reserved.
//

#include "CubeCar.hpp"

void CubeCar::draw(){
    body.setX(getX());
    body.setY(getY());
    body.setZ(getZ());
    body.setRotation(getRotation());
    body.setLenth(10,10,10);

    body.draw();
}