//
//  main.cpp
//  Final Project (Tic Tac Toe)
//
//  Created by Mikha Yupikha on 10/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

char boardNumber [9] = {'1','2','3','4','5','6','7','8','9'};
void boardGame ();
void header();
bool check();
int draw();

int main()
{
    header();
    int playerPlay = 1;
    bool i = false;
    
    do
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
        
        char mark;
        if (playerPlay==1)
            mark = 'X';
        else if (playerPlay==2)
            mark = 'O';
        
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
        playerPlay++;
        i = check();
    }
    while(i==false);
    
    if(i==true)
        cout<<"Player"<<--playerPlay<<" wins!"<<endl;
    
    return 0;
}

void header ()
{
    //string player1, player2;
    cout<<"Welcome to TIC-TAC-TOE Game!";
    cout<<endl<<endl;
    
    /*cout<<"Name of Player 1: ";
     cin>>player1;
     
     cout<<"Name of Player 2: ";
     cin>>player2;
     cout<<endl;
     
     cout<<player1<<" goes first and then "<<player2;
     cout<<endl<<endl;*/
    
    cout<<"Player1 (X) \t\t Player2 (O)";
    cout<<endl;
}

void boardGame ()
{
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

bool check()
{
    if (boardNumber[0] == boardNumber[1] && boardNumber[1] == boardNumber[2])
        return true;
    else if (boardNumber[0] == boardNumber[4] && boardNumber[4] == boardNumber[8])
        return true;
    else if (boardNumber[0] == boardNumber[3] && boardNumber[3] == boardNumber[6])
        return true;
    else if (boardNumber[1] == boardNumber[4] && boardNumber[4] == boardNumber[7])
        return true;
    else if(boardNumber[2] == boardNumber[4] && boardNumber[4] == boardNumber[6])
        return true;
    else if(boardNumber[2] == boardNumber[5] && boardNumber [5] == boardNumber[8])
        return true;
    else if(boardNumber[3] == boardNumber[4] && boardNumber[4] == boardNumber[5])
        return true;
    /*else if (boardNumber[0] != '1' && boardNumber[1] != '2' && boardNumber[2] != '3' && boardNumber[3]  != '4'&& boardNumber[4] != '5' && boardNumber[5] != '6' && boardNumber[6] != '7' && boardNumber[7] != '8' && boardNumber[8] != '9')
     return true;*/
    else
        return false;
}

/*int draw()
 {
 for(int i = 0; i<9; i++)
 {
 if(boardNumber[i] == 'X' || boardNumber[i] == 'O')
 cout<<"Draw";
 }
 return 0;
 }*/

