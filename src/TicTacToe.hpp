#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP
#include <iostream>
#include <string>

class TicTacToe
{
public:
    void displayBoard();
    
protected:
    static inline char board[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
};

#endif // TICTACTOE_HPP
