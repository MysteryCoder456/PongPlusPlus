//
//  paddle.h
//  PongPlusPlus
//
//  Created by Harmeet on 18/01/2020.
//  Copyright © 2020 MysteryCoder456. All rights reserved.
//

#ifndef paddle_h
#define paddle_h

class Paddle
{
public:
    Paddle(double x, double y);
    void move(double xMove, double yMove);
    void render();
    
    double x;
    double y;
    double width;
    double height;
};

#endif /* paddle_h */
