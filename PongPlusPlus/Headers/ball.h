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
    Ball(xPos, yPos);
    move(xMove, yMove);
    render();
    
    double x;
    double y;
    double width;
    double height;
}

#endif /* ball_h */
