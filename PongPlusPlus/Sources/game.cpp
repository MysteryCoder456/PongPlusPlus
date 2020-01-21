//
//  game.cpp
//  PongPlusPlus
//
//  Created by Harmeet on 18/01/2020.
//  Copyright © 2020 MysteryCoder456. All rights reserved.
//

//#include <stdio.h>
#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

Game::Game()
{
    srand(static_cast<unsigned int>(time(0)));
    
    double bVel = 0.005;
    if (rand() % 10 < 5)
    {
        b.xVel = bVel;
        b.yVel = bVel;
    }
    else
    {
        b.xVel = bVel;
        b.yVel = -bVel;
    }
}

void Game::Input(GLFWwindow* window)
{
    double speed = 0.015;
    
    /* Player 1 */
    if (glfwGetKey(window, GLFW_KEY_W))
    {
        p1.move(0, speed);
    }
    if (glfwGetKey(window, GLFW_KEY_S))
    {
        p1.move(0, -speed);
    }
    
    /* Player 2 */
    if (glfwGetKey(window, GLFW_KEY_UP))
    {
        p2.move(0, speed);
    }
    if (glfwGetKey(window, GLFW_KEY_DOWN))
    {
        p2.move(0, -speed);
    }
}

void Game::Logic()
{
    b.update();
    
    p1.update();
    p2.update();
    
    // Ball collisions
    if (b.x <= p1.x + p1.width)
    {
        if (b.y + b.height >= p1.y && b.y <= p1.y + p1.height)
        {
            b.xVel *= -1;
        }
    }
    
    if (b.x + b.width >= p2.x)
    {
        if (b.y >= p2.y && b.y <= p2.y + p2.height)
        {
            b.xVel *= -1;
        }
    }
    
    if (b.y + b.height > 1 || b.y < -1)
        b.yVel *= -1;
}

void Game::Render()
{
    b.render();
    
    p1.render();
    p2.render();
}
