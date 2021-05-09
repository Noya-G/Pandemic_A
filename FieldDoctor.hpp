#include "Player.hpp"

namespace pandemic{
    class FieldDoctor: public Player{
        private:
        public:
            using Player::Player;
            void treat(const City &city);
    };
}