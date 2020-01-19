//
//  game.cpp
//  PongPlusPlus
//
//  Created by Harmeet on 18/01/2020.
//  Copyright © 2020 MysteryCoder456. All rights reserved.
//

//#include <stdio.h>
#include <GLFW/glfw3.h>
#include "game.h"

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
    /* Player 1 */
    if (p1.y > 1)
        p1.y = 1;
    if (p1.y - p1.height < -1)
        p1.y = -1 + p1.height;
    
    /* Player 2 */
    if (p2.y > 1)
        p2.y = 1;
    if (p2.y - p2.height < -1)
        p2.y = -1 + p2.height;
}

void Game::Render()
{
    p1.render();
    p2.render();
}
