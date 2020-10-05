#include "header.h"

void load_menu0(GameState *game) {
    game->menuMus = Mix_LoadMUS("resource/sounds/menuMus.mp3");

    SDL_Surface *surface = NULL;
    game->menu0_status = 0;
    //меню0_________________________________________________________________________
    surface = IMG_Load("./resource/images/backgrounds/menu0.png");
    game->menu0 = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    Mix_PlayMusic(game->menuMus, -1);

    if (surface == NULL) {
        printf("Cannot find menu0.png\n");
        SDL_Quit();
        exit(1);
    }
}

void load_menu1(GameState *game) {
    game->menuMus = Mix_LoadMUS("resource/sounds/menuMus.mp3");

    SDL_Surface *surface = NULL;
    game->menu_status = 0;
    //меню_________________________________________________________________________
    surface = IMG_Load("./resource/images/backgrounds/menu1.png");
    game->menu1 = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    Mix_PlayMusic(game->menuMus, -1);

    if (surface == NULL) {
        printf("Cannot find menu1.png");
        SDL_Quit();
        exit(1);
    }

    game->x_score = 0;
    for(game->x_i = 0; game->x_i < 25; game->x_i++) {
        game->x_list[game->x_i] = 0;
    }
    game->x_i = 0;
}

void load_menu2(GameState *game) {
    game->menuMus = Mix_LoadMUS("resource/sounds/menuMus.mp3");

    SDL_Surface *surface = NULL;
    game->menu_status = 0;
    //меню_________________________________________________________________________
    surface = IMG_Load("./resource/images/backgrounds/menu2.png");
    game->menu2 = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    Mix_PlayMusic(game->menuMus, -1);

    if (surface == NULL) {
        printf("Cannot find menu2.png");
        SDL_Quit();
        exit(1);
    }

    game->x_score = 0;
    for(game->x_i = 0; game->x_i < 25; game->x_i++) {
        game->x_list[game->x_i] = 0;
    }
    game->x_i = 0;
}
