#include <SDL.h>
#include <iostream>
#include "common_parameters.h"
#include <malloc.h>


bool Volkov(SDL_Window* win, SDL_Renderer* ren)
{
	static SDL_Event ev;
	static bool check = true;
	static bool pause = 0;

	SDL_SetRenderDrawColor(ren, 255, 255, 255, 255);
	SDL_RenderClear(ren);

	while (SDL_PollEvent(&ev))
	{
		switch (ev.type)
		{
		case SDL_QUIT:
			return 0;
			break;
		}
	}

	

	SDL_RenderPresent(ren);

	return 1;
}
