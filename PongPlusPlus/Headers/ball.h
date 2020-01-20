//
//  ball.h
//  PongPlusPlus
//
//  Created by Harmeet on 19/01/2020.
//  Copyright © 2020 MysteryCoder456. All rights reserved.
//

#ifndef ball_h
#define ball_h

class Ball
{
public:
    Ball(double xPos, double yPos);
    void update();
    void render();
    
    double x;
    double y;
    double width;
    double height;
    
    double xVel = 0;
    double yVel = 0;
    
private:
    void move(double xMove, double yMove);
};

#endif /* ball_h */
