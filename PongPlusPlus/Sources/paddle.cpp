//
//  paddle.cpp
//  PongPlusPlus
//
//  Created by Harmeet on 18/01/2020.
//  Copyright © 2020 MysteryCoder456. All rights reserved.
//

#include <GLFW/glfw3.h>
#include <stdio.h>
#include "paddle.h"

Paddle::Paddle(double x_pos, double y_pos)
{
    x = x_pos;
    y = y_pos;
}

double Paddle::getX() {return x;}
double Paddle::getY() {return y;}
double Paddle::getWidth() {return width;}
double Paddle::getHeight() {return height;}

void Paddle::render() {
    glBegin(GL_QUADS);
    glVertex2d(x, y);
    glVertex2d(x + width, y);
    glVertex2d(x + width, y - height);
    glVertex2d(x, y - height);
    glEnd();
}
