/*#include <iostream>
#include <vector>

void drawBoard(const std::vector<std::vector<char>> &board)
{
    for (const auto &row : board)
    {
        for (char cell : row)
        {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
}

bool checkWin(const std::vector<std::vector<char>> &board, char player)
{
    // Check rows, columns, and diagonals for a win
    for (int i = 0; i < 3; ++i)
    {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
        {
            return true;
        }
    }

    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
    {
        return true;
    }

    return false;
}

bool checkDraw(const std::vector<std::vector<char>> &board)
{
    for (const auto &row : board)
    {
        for (char cell : row)
        {
            if (cell == ' ')
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    std::vector<std::vector<char>> board(3, std::vector<char>(3, ' '));
    char currentPlayer = 'X';
    int row, col;
    bool gameOver = false;

    while (!gameOver)
    {
        drawBoard(board);
        std::cout << "Player " << currentPlayer << ", enter row and column (0-2): ";
        std::cin >> row >> col;

        if (board[row][col] == ' ')
        {
            board[row][col] = currentPlayer;
            gameOver = checkWin(board, currentPlayer);

            if (gameOver)
            {
                drawBoard(board);
                std::cout << "Player " << currentPlayer << " wins!" << std::endl;
            }
            else if (checkDraw(board))
            {
                drawBoard(board);
                std::cout << "It's a draw!" << std::endl;
                gameOver = true;
            }

            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
        else
        {
            std::cout << "That spot is already taken. Try again." << std::endl;
        }
    }

    return 0;
}*/

#include <iostream>
#include <windows.h>
#include <vector>
#include "TicTacToe.h"
#include "TicTacToeKomp.h"
#include <thread>
#include <chrono>


using namespace std;

void slow_print(const std::string& str, int delay_time) {
    for (size_t i = 0; i != str.size(); ++i) {
        std::cout << str[i];
        Sleep(delay_time);
    }
}
void typeString(const std::string& str, int delay) {
    for (char c : str) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    }
}

void typeStringS(const std::string& str, std::size_t index, int delay) {
    if (index < str.length()) {
        std::cout << str[index] << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
        typeStringS(str, index + 1, delay);
    }
}
void meni(){
    string s= "-------------------------------------\n"
              "\t1. Player vs Player\n"
              "\t2. Player vs Computer\n"
                "\t3. Exit\n";
    typeStringS(s,0,100);
    //slow_print(s,100);
    int izbor;
    auto *t1= new TicTacToeKomp();
    TicTacToe t;
    do{
        cout << "Enter a choice: ";
        cin >> izbor;
        cout << endl;
    }while(izbor<1 || izbor>3);
    while(izbor!=3){
        switch (izbor){
            case 1:
                t.Igra();
                meni();
            case 2:

                t1->Igra();
                meni();

        }
    }
}


int main(){
    meni();
    return 0;
}
