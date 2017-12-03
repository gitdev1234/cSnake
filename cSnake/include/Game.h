#ifndef GAME_H
#define GAME_H

#include "Snake.h"


class Game {
    public:
        Game(Coordinate gameSize_ = {.x = 10, .y = 10});

        /* --- getters / setters --- */
        void setGameSize(Coordinate val_) {GameSize = val_;} ;
        void setCurrentSnakeHeadCoord(Coordinate val_) {currentSnakeHeadCoord = val_;};

        Coordinate getGameSize() {return GameSize;} ;
        Coordinate getCurrentSnakeHeadCoord() {return currentSnakeHeadCoord;};

    private:
        Coordinate GameSize;
        Coordinate currentSnakeHeadCoord;
        Snake snake;
        vector<Coordinate> foodCoords;

        void init();
        void start();
        void pause();
        void end();
        void increaseScore();

        void createFood(int foodCount_);
        bool checkCoordIsFood(Coordinate coord_);
        bool checkCoordIsSnake(Coordinate coord_);

        void move(Direction dir_);


};

#endif // GAME_H
