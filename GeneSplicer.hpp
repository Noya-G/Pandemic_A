
#include "Player.hpp"


namespace pandemic{
    class GeneSplicer: public Player
    {
        private:
        public:
        using Player::Player;
        void discover_cure(const Color &color);
    };
}