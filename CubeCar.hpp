//
//  CubeCar.hpp
//  assign2
//
//  Created by Qiang on 22/09/2014.
//  Copyright (c) 2014 Steven.Q. All rights reserved.
//

#ifndef __assign2__CubeCar__
#define __assign2__CubeCar__

#include <stdio.h>
#include "Vehicle.hpp"
#include "RectanPrism.hpp"

class CubeCar : public Vehicle {
protected:
    RectanPrism body;
public:
    void draw();
    
};

#endif /* defined(__assign2__CubeCar__) */
