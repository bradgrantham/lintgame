#include <lintgame.h>
#include <string.h>
#include <stdlib.h>

int unix_cursor(int x, int y)
{
    return 1;
}

int unix_cleartoeol()
{
    return 1;
}

int unix_clearto(int x)
{
    return 1;
}

int unix_putc(int c)
{
    return 1;
}

int unix_puts(char *s)
{
    return 1;
}


platform unixplatform =
{
    unix_cursor,
    unix_cleartoeol,
    unix_clearto,
    unix_putc,
    unix_puts,
};

int main(int argc, char **argv)
{
    highscore highscores[10];
    for(int i = 0; i < HIGHSCORE_COUNT; i++) {
        highscores[i].score = 1000;
        strcpy(highscores[i].name, "B-Rad");
    }

    lintgame_init(highscores, &unixplatform);

    return EXIT_SUCCESS;
}
