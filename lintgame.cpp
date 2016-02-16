#include <lintgame.h>

static platform *gP;
extern "C" {

void lintgame_init(highscore highscores[HIGHSCORE_COUNT], platform *plat)
{
    gP = plat;
}

};
