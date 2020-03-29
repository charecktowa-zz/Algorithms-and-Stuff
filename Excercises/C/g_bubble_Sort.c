#include <SDL2/SDL.h>

/* Window Stuff */
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 500

int main() {

    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;

    int state = 0;
    int array[SCREEN_WIDTH];

    /* Fill the array with random numbers */
    for (int i = 0; i < SCREEN_WIDTH; i++)
        array[i] = rand() % SCREEN_HEIGHT + 1;

    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        fprintf(stderr, "Could not initialize SDL: %s\n", SDL_GetError());
        state = -1;
    } else {
        window = SDL_CreateWindow("Bubble Sort", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                                 SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
                                                 
        if (! window) {
            fprintf(stderr, "Error while creating the window: %s\n", SDL_GetError());
            state = -1;
        } else {
            SDL_bool done = SDL_FALSE;

            while (!done) {
                SDL_Event event;

                SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
                SDL_RenderClear(renderer);

                /* Drawing the lines */
                SDL_SetRenderDrawColor(renderer, 0, 0, 0 , SDL_ALPHA_OPAQUE);
                for (int i = 0; i < SCREEN_WIDTH; i++) {
                    
                    SDL_RenderDrawLine(renderer, i, i, i, i);

                    SDL_RenderPresent(renderer);

                }

                /* Exit Window */
                while (SDL_PollEvent(&event)) {
                    if (event.type == SDL_QUIT)
                        done = SDL_TRUE;
                }

            }
        }
    }

    SDL_DestroyWindow(window);

    SDL_Quit();

    return state;
}
