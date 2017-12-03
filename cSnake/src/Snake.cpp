#include "Snake.h"

Snake::Snake(Coordinate startCoords_) {
    coords.push(startCoords_);
    setLength(1);
}

void Snake::move(Coordinate newCoordOfHead_, bool newCoordIsFood_) {
    coords.push(newCoordOfHead_);
    if (!newCoordIsFood_) {
        coords.pop();
    }

}
