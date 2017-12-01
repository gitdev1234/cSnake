#ifndef GAME_H
#define GAME_H

#include "Snake.h"


class Game {
    public:
        Game();

    private:
        Coordinate GameSize;
        Snake snake;


};

#endif // GAME_H
