#ifndef SNAKE_H
#define SNAKE_H

#include "Types.h"
#include <queue>

using namespace std;

class Snake {
    public:
        Snake(Coordinate startCoords_ = {0,0});
        void move(Coordinate newCoordOfHead_, bool newCoordIsFood_);

        /* --- getter / setter */
        void setLength(int val_) {length = val_;} ;

        int getLength() {return length;} ;

    private:
        queue<Coordinate> coords;
        int length;

};

#endif // SNAKE_H
