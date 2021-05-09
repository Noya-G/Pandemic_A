#pragma once

#include "Color.hpp"
#include "Board.hpp"
#include "City.hpp"

#include <string>

namespace pandemic{
    class Player{
        private:
        City _city;
        std::string _role;
        public:
            Player(const Board &board, const City &city);
            Player();
            ~Player();
            Player& drive(const City &city);
            Player& fly_direct(const City &city);
            Player& fly_charter(const City &city);
            Player& fly_shuttle(const City &city);
            Player& discover_cure(const Color &color);
            Player& build();
            Player& treat(const City &city);
            Player& take_card(const City &city);
            std::string role();
            City& get_city();
            int num_of_cards();
    };
}