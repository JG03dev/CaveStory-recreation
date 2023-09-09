//
// Created by jg03dev on 9/9/23.
//

#ifndef GAME_H
#define GAME_H

struct SDL_Surface;

struct game {
    game();
    ~game();
private:
    void eventLoop();
    void update();
    void draw();

    SDL_Surface* screen_;
};


#endif //GAME_H
