
#include <SDL/SDL.h>

int main(int argc, char** argv, char** envp)
{
    SDL_Surface* pic = 0;
    SDL_Surface* screen = 0;

    SDL_Init(SDL_INIT_EVERYTHING);
    screen = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE | SDL_NOFRAME | SDL_FULLSCREEN);
    pic = SDL_LoadBMP("xin.bmp");
    SDL_BlitSurface(pic, 0, screen, 0);
    SDL_Flip(screen);
    SDL_Delay(20000);
    SDL_FreeSurface(pic);
    SDL_Quit();

    return 0;
}

