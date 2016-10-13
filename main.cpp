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

int main()
{
    header();
    boardGame();
    return 0;
}

void header ()
{
    string player1, player2;
    cout<<"Welcome to TIC-TAC-TOE Game!";
    cout<<endl<<endl;
    
    cout<<"Name of Player 1: ";
    cin>>player1;
    
    cout<<"Name of Player 2: ";
    cin>>player2;
    cout<<endl;
    
    cout<<player1<<" goes first and then "<<player2;
    cout<<endl<<endl;
    
    cout<<player1<<"(X)"<<"\t\t"<<player2<<"(O)";
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



