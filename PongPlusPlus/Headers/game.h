//
//  game.h
//  PongPlusPlus
//
//  Created by Harmeet on 18/01/2020.
//  Copyright © 2020 MysteryCoder456. All rights reserved.
//

#ifndef game_h
#define game_h

#include "paddle.h"
#include "ball.h"

class Game
{
public:
    Game();
    void Input(GLFWwindow* window);
    void Logic();
    void Render();
    
private:
    Ball b = Ball(0, 0);
    Paddle p1 = Paddle(-0.8 - 0.05, 0.3 / 2);
    Paddle p2 = Paddle(0.8, 0.3 / 2);
};

#endif /* game_h */
