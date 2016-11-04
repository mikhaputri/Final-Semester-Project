//
//  main.cpp
//  Final Project (Tic Tac Toe)
//
//  Created by Mikha Yupikha on 10/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include "TicTacToe.hpp"
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

bool menu();

int main()
{
    bool start = false;
    cout<<"Welcome to Tic-Tac-Toe Game!"<<endl;
    start = menu();
    
    while (start == true)
    {
        TicTacToe game;
        int player = 1;
        game.gamePlay(player);
        game.playAgain();
    }
    
}
