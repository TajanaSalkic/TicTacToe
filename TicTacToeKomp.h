//
// Created by DT User on 25/05/2024.
//

#ifndef TICTACTOE_TICTACTOEKOMP_H
#define TICTACTOE_TICTACTOEKOMP_H
#include <iostream>
#include "TicTacToe.h"

using namespace std;

class TicTacToeKomp : public TicTacToe {
public:
    TicTacToeKomp();

    void Komp();
    bool Pobjeda();

    void zamjeni();

    void Igra();
};

#endif //TICTACTOE_TICTACTOEKOMP_H
