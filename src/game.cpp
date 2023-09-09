//
// Created by jg03dev on 9/9/23.
//

#include "../include/game.h"
#include <SDL2/SDL.h>

namespace{
    const int kScreenWidth = 640;
    const int kScreenHeight = 480;
    const int kBitsPerPixel = 32;
    const int kFPS = 60;
}

game::game(){
    SDL_Init(SDL_INIT_EVERYTHING);
    //TODO: fix screen not showing or change SDL version
    screen_ = SDL_CreateRGBSurfaceWithFormat(0,
             kScreenWidth,
             kScreenHeight,
             kBitsPerPixel,
             SDL_PIXELFORMAT_RGBA8888);
    eventLoop();
}

game::~game(){
    SDL_Quit();
};

void game::eventLoop() {
    SDL_Event event;
    bool running = true;
    //while(running) ~ 60 Hz
    //      Handle input.
    //
    //      update(). Move the player. Move Projectiles. Check collisions
    //      draw(). Draw everything!
    while (running){
        const Uint32 start_time_ms = SDL_GetTicks();
        while (SDL_PollEvent(&event)){
            switch(event.type){
                case SDL_KEYDOWN:
                    if(event.key.keysym.sym == SDLK_ESCAPE){
                        running = false;
                    }
                default:
                    break;
            }

        }
        update();
        draw();
        const Uint32 elapsed_time_ms = SDL_GetTicks() - start_time_ms;
        //Running at 60fps
        SDL_Delay(1000/*ms*/ / kFPS /*fps*/ - elapsed_time_ms);
    }
}

void game::update(){

}

void game::draw(){

}


