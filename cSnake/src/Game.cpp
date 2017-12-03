#include "Game.h"
#include <stdlib.h>

Game::Game(Coordinate gameSize_) {
    setGameSize(gameSize_);
    init();
}

void Game::init() {
    // set start coords of snake head
    Coordinate size = getGameSize();
    Coordinate startCoords;

    startCoords.x = rand() % (size.x - 1);
    startCoords.y = rand() % (size.y - 1);
    setCurrentSnakeHeadCoord(startCoords);

    createFood(1);

}

void Game::start() {

}

void Game::pause() {

}

void Game::end() {

}

void Game::createFood(int foodCount_) {
    foodCoords.clear();
    Coordinate size = getGameSize();
    Coordinate coord;
    for (int i = 0; i < foodCount_; i++) {
        do {
            // set coords of food
            coord.x = rand() % (size.x - 1);
            coord.y = rand() % (size.y - 1);


        } while (checkCoordIsFood(coord) || checkCoordIsSnake(coord)) ;
        foodCoords.push_back(coord);

    }

}


bool Game::checkCoordIsFood(Coordinate coord_) {
    return true;
}

bool Game::checkCoordIsSnake(Coordinate coord_) {
    return true;
}

void Game::move(Direction dir_) {
    Coordinate coord = getCurrentSnakeHeadCoord();
    switch (dir_) {
        case Direction::UP    : coord.y -= 1; break;
        case Direction::DOWN  : coord.y += 1; break;
        case Direction::LEFT  : coord.x -= 1; break;
        case Direction::RIGHT : coord.x += 1; break;
    }
    setCurrentSnakeHeadCoord(coord);
    if (checkCoordIsSnake(coord)){
        end();
    } else  {
        snake.move(coord,checkCoordIsFood(coord));
    }
}




