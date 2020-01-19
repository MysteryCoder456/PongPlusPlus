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

Paddle::Paddle(double xPos, double yPos)
{
    x = xPos;
    y = yPos;
}

void Paddle::move(double xMove, double yMove)
{
    x += xMove;
    y += yMove;
}

void Paddle::render()
{
    glBegin(GL_QUADS);
    glVertex2d(x, y);
    glVertex2d(x + width, y);
    glVertex2d(x + width, y - height);
    glVertex2d(x, y - height);
    glEnd();
}
