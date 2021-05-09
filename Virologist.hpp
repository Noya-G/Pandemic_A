#include "Player.hpp"

namespace pandemic{
    class Virologist: public Player{
        using Player::Player;
        Player& treat(const City &city);
    };
}