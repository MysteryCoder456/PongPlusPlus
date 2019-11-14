//
//  ClearScreen.h
//  Snake Game
//
//  Created by Harmeet on 18/10/2019.
//  Copyright © 2019 MysteryCoder456. All rights reserved.
//

#pragma once
#ifndef ClearScreen_h
#define ClearScreen_h

#include <iostream>

void ClearScreen(int windowHeight)
{
    for (int i = 0; i < windowHeight * 1.5; i++)
        std::cout << std::endl;
}

#endif /* ClearScreen_h */
