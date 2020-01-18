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
    double getX();
    double getY();
    double getWidth();
    double getHeight();
    void render();
    
private:
    double x;
    double y;
    double width = 0.03;
    double height = 0.3;
};

#endif /* paddle_h */