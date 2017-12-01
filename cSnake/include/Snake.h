#ifndef SNAKE_H
#define SNAKE_H

#include "Types.h"
#include <stack>

using namespace std;

class Snake {
    public:
        Snake();
        void move(Direction direction_);

    private:
        stack<Coordinate> coords;
        int length;

};

#endif // SNAKE_H
