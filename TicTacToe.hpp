//
//  TicTacToe.hpp
//  Final Project (Tic Tac Toe)
//
//  Created by Mikha Yupikha on 24/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#ifndef TicTacToe_hpp
#define TicTacToe_hpp

class TicTacToe
{
    public:
    char boardNumber [9] = {'1','2','3','4','5','6','7','8','9'};
    void boardGame();
    bool check();
    bool isBoardFilled();
    void gamePlay(int playerPlay);
    bool playAgain();
    
};

#endif /* TicTacToe_hpp */
