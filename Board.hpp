#pragma once
#include <iostream>
#include "City.hpp"

namespace pandemic{
    class Board{
        public:
            Board();
            ~Board();
            int& operator[](const City &city);
            friend std::ostream &operator<<(std::ostream &out, const Board &board);
            void read_cities();
            void remove_cures();
            bool is_clean();
    };
}