//
//  RectanPrism.h
//  assign2
//
//  Created by Qiang on 20/09/2014.
//  Copyright (c) 2014 Steven.Q. All rights reserved.
//

#ifndef assign2_RectanPrism_h
#define assign2_RectanPrism_h

#include "Shape.hpp"

class RectanPrism : public Shape{
protected:
    double RectanX, RectanY, RectanZ;
    
public:
    RectanPrism();
    RectanPrism(double RectanX_, double RectanY_, double RectanZ_);
    RectanPrism(Shape center, double RectanX_, double RectanY_, double RectanZ);
    RectanPrism(double X, double Y, double Z, double rotation_, double RectanX_, double RectanY_, double RectanZ_);
    
    void setLenth(double x_, double y_, double z_);
    void draw();
};


#endif
