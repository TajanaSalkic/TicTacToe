//
// Created by DT User on 25/05/2024.
//

#ifndef TICTACTOE_TICTACTOE_H
#define TICTACTOE_TICTACTOE_H

#include <iostream>
using namespace std;

class TicTacToe {
protected:
    char niz[9][11];
    char Igrac;
public:
    TicTacToe();

    virtual bool Pobjeda();

    virtual void zamjeni();

    virtual void Igra();

    virtual ~TicTacToe()=default;
};


#endif //TICTACTOE_TICTACTOE_H
