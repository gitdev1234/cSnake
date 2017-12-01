#ifndef SNAKE_H
#define SNAKE_H

#include "Types.h"
#include <stack>

using namespace std;

class Snake {
    public:
        Snake(Coordinate startCoords_ = {0,0});
        void move(Direction direction_, Coordinate SizeOfGame_);

        /* --- getter / setter */
        void setLength(int val_) {length = val_;} ;

        int getLength() {return length;} ;

    private:
        stack<Coordinate> coords;
        int length;

};

#endif // SNAKE_H
