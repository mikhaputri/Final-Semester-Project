//
//  TicTacToe.cpp
//  Final Project (Tic Tac Toe)
//
//  Created by Mikha Yupikha on 24/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include "TicTacToe.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

// game instruction
void instruction()
{
    cout<<"What is Tic-Tac-Toe? \nIt is a game play on 3 x 3 board with two players. The objective is to get three in a row."<<endl<<endl;
    cout<<"How to play: \n";
    cout<<"1. The first player is known for 'X' and second player is 'O'. \n";
    cout<<"2. Players alternate placing Xs and Os on the game board until either oppent has three in a row or all nine squares are filled. \n";
    cout<<"3. X always goes first, and in the event that no one has three in a row, the game is draw.\n";
}

// menu function
bool menu()
{
    int input;
    bool getInput = true;
    bool start = false;
    
    while (getInput == true)
    {
        cout<<"1. Play \n2. Instruction \n3. Quit"<<endl;
        cout<<"Enter number 1, 2 or 3: ";
        cin>>input;
        cout<<endl;
        
        if(input == 1)
        {
            getInput = false;
            start = true;
        }
        else if(input==2)
        {
            char answer;
            instruction();
            cout<<"Back to Menu or quit (M/Q)? ";
            cin>>answer;
            
            if(answer == 'M' || answer == 'm')
                start = true;
            else if(answer == 'Q' || answer == 'q')
                exit(0);
        }
        else if (input == 3)
        {
            exit(0);
        }
        else
        {
            cout<<"Please enter number 1, 2 or 3.";
        }
    }
    return start;
}

// to replay the game
bool TicTacToe::playAgain()
{
    bool start = true;
    char input;
    cout<<"Do you want to play again (Y/N)? ";
    cin>>input;
    
    if(input=='Y' || input == 'y')
    {
        start = menu();
    }
    else if(input=='N' || input == 'n')
    {
        cout<<"Thankyou for playing!"<<endl;
        exit(0);
    }
    return start;
}

// 3 x 3 board game
void TicTacToe::boardGame()
{
    cout<<"Player1 (X) \t\t Player2 (O)"<<endl<<endl;
    cout<<"     |     |     "<<endl;
    cout<<setw(3)<<boardNumber[0]<<setw(3)<<"|"<<setw(3)<<boardNumber[1]<<setw(3)<<"|"<<setw(3)<<boardNumber[2]<<setw(3)<<endl;
    cout<<"_____"<<"|"<<"_____"<<"|"<<"_____"<<endl;
    
    cout<<"     |     |     "<<endl;
    cout<<setw(3)<<boardNumber[3]<<"  "<<"|"<<setw(3)<<boardNumber[4]<<setw(3)<<"|"<<setw(3)<<boardNumber[5]<<setw(3)<<endl;
    cout<<"_____"<<"|"<<"_____"<<"|"<<"_____"<<endl;
    
    cout<<"     |     |     "<<endl;
    cout<<setw(3)<<boardNumber[6]<<setw(3)<<"|"<<setw(3)<<boardNumber[7]<<setw(3)<<"|"<<setw(3)<<boardNumber[8]<<setw(3)<<endl;
    cout<<"     |     |     "<<endl;
}

// checking any three rows
bool TicTacToe::check()
{
    //1,2,3
    if (boardNumber[0] == boardNumber[1] && boardNumber[1] == boardNumber[2])
        return true;
    //1,5,9
    else if (boardNumber[0] == boardNumber[4] && boardNumber[4] == boardNumber[8])
        return true;
    //1,4,7
    else if (boardNumber[0] == boardNumber[3] && boardNumber[3] == boardNumber[6])
        return true;
    //2,5,8
    else if (boardNumber[1] == boardNumber[4] && boardNumber[4] == boardNumber[7])
        return true;
    //3,5,7
    else if(boardNumber[2] == boardNumber[4] && boardNumber[4] == boardNumber[6])
        return true;
    //3,6,9
    else if(boardNumber[2] == boardNumber[5] && boardNumber [5] == boardNumber[8])
        return true;
    //4,5,6
    else if(boardNumber[3] == boardNumber[4] && boardNumber[4] == boardNumber[5])
        return true;
    //7,8,9
    else if(boardNumber[6] == boardNumber[7] && boardNumber[7] == boardNumber[8])
        return true;
    else
        return false;
}

//checking draw game
bool TicTacToe::isBoardFilled()
{
    bool filled = true;
    for(int i = 0; i<9; i++)
    {
        if(!(boardNumber[i] == 'X' || boardNumber[i] == 'O'))
        {
            filled = false;
            break;
        }
    }
    return filled;
}

//game flow
void TicTacToe::gamePlay(int playerPlay)
{
    //player1 starts first
    playerPlay = 1;
    
    //check wins
    bool i = false;
    
    //check draw
    bool boardFilled = false;
    
    
    while(i==false && boardFilled==false)
    {
        // Deciding the player and marks
        if (playerPlay % 2 == 0)
            playerPlay = 2;
        else if (playerPlay % 2 == 1)
            playerPlay = 1;
        
        boardGame();
        
        int choice;
        cout<<"Player"<<playerPlay<<" choose one number: ";
        cin>> choice;
        
        char mark = 'X';
        
        if (playerPlay==1)
            mark = 'X';
        else if (playerPlay==2)
            mark = 'O';
        
        //mark the board
        if (choice == 1 && boardNumber[0] == '1')
            boardNumber[0] = mark;
        else if (choice == 2 && boardNumber[1] == '2')
            boardNumber[1] = mark;
        else if (choice == 3 && boardNumber[2] == '3')
            boardNumber[2] = mark;
        else if (choice == 4 && boardNumber[3] == '4')
            boardNumber[3] = mark;
        else if (choice == 5 && boardNumber[4] == '5')
            boardNumber[4] = mark;
        else if (choice == 6 && boardNumber[5] == '6')
            boardNumber[5] = mark;
        else if (choice == 7 && boardNumber[6] == '7')
            boardNumber[6] = mark;
        else if (choice == 8 && boardNumber[7] == '8')
            boardNumber[7] = mark;
        else if (choice == 9 && boardNumber[8] == '9')
            boardNumber[8] = mark;
        else
        {
            cout<<"Invalid move "<<endl;
            break;
            
        }
        //alternate players
        playerPlay++;
        
        i = check();
        
        boardFilled = isBoardFilled();
    }
    
    if(i==true)
    {
        cout<<"Player"<<--playerPlay<<" wins!"<<endl;
    }
    else if(boardFilled==true)
    {
        cout << "Draw game!"<<endl;
    }
}

