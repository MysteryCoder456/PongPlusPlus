//
//  main.cpp
//  PongPlusPlus
//
//  Created by Harmeet on 30/12/2019.
//  Copyright © 2019 MysteryCoder456. All rights reserved.
//

#include <GLFW/glfw3.h>
#include "game.h"

int main(void)
{
    int WIDTH = 800;
    int HEIGHT = 600;
    
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(WIDTH, HEIGHT, "PongPlusPlus", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);
    
    /* Game object */
    Game pongPlusPlus = Game();

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Game Logic */
        pongPlusPlus.Logic();
        
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);
        pongPlusPlus.Render();

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
