/*
** EPITECH PROJECT, 2018
** my_hunter
** File description:
** draw and loop
*/

#include "my.h"

void loop_game(t_game *game)
{
    while (sfRenderWindow_isOpen(game->engine.window)) {
        draw_game(game);
        duck_tick(game);
        poll_events(game);
    }
}

void draw_game(t_game *game)
{
    sfRenderWindow_drawSprite(game->engine.window,
                              game->engine.background.sprite, NULL);
    sfSprite_setTextureRect(game->duck.sprite, game->duck.rect);
    sfSprite_setPosition(game->duck.sprite, game->duck.pos);
    sfRenderWindow_drawSprite(game->engine.window, game->duck.sprite, NULL);
    sfRenderWindow_drawText(game->engine.window, game->score.text, 0);
    sfRenderWindow_display(game->engine.window);
}
