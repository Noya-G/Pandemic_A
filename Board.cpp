#include <iostream>
#include "Board.hpp"

namespace pandemic{
    Board::Board(){}
    Board::~Board(){}
    int& Board::operator[](const City &city){ 
        int *pointer = new int(0);
        return *pointer;
    }
    std::ostream &operator<<(std::ostream &out, const Board &board){ return out; }
    void Board::read_cities(){}
    bool Board::is_clean(){ return false; }
    void Board::remove_cures(){}
}