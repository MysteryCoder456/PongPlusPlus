// Include libraries
#include <iostream>
#include <unistd.h>
#include <thread>
#include <string>

// Include header files
#include "../Headers/ClearScreen.h"
#include "../Headers/getch.h"

bool gameOver;
const int FPS = 6;

const int width = 20;
const int height = 20;

void Setup()
{
	gameOver = false;
}

void Draw()
{
	// Clear the screen
    usleep((1000 / FPS) * 1000);
    ClearScreen(height);

	// Drawing the map
    for (int i = 0; i < width; i++)
        std::cout << "#";
    std::cout << std::endl;
    
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            
        }
        std::cout << std::endl;
    }
    
    
    for (int i = 0; i < width; i++)
        std::cout << "#";
    std::cout << std::endl;
}

void Logic()
{

}

void Input()
{
	// Get Keypresses
    char input = getch();
    
    // Process Keypresses to Control The Paddles
    switch (input)
    {
        
            
        // Exit Game if 'x' is Pressed
        case 'x':
            gameOver = true;
            break;
    }
}

int main()
{
	 // Multithreading For Detecting Input
    std::thread inputThread([](){
        while (!gameOver)
            Input();
    });
    
    Setup();
    
    while (!gameOver)
    {
        Draw();
        Logic();
    }
}