//
//  ball.cpp
//  PongPlusPlus
//
//  Created by Harmeet on 19/01/2020.
//  Copyright © 2020 MysteryCoder456. All rights reserved.
//

#include <GLFW/glfw3.h>
#include <stdio.h>
#include "ball.h"

Ball::Ball(double xPos, double yPos)
{
    x = xPos;
    y = yPos;
    width = 0.03;
    height = 0.045;
}

void Ball::move(double xMove, double yMove)
{
    x += xMove;
    y += yMove;
}

void Ball::render()
{
    glBegin(GL_QUADS);
    glVertex2d(x, y);
    glVertex2d(x + width, y);
    glVertex2d(x + width, y - height);
    glVertex2d(x, y - height);
    glEnd();
}
