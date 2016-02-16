#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct highscore
{
    int score;
    char name[20];
} highscore;

typedef struct platform
{
    int (*cursor)(int x, int y);
    int (*cleartoeol)();
    int (*clearto)(int x);
    int (*putc)(int c);
    int (*puts)(char *s);
} platform;

#define HIGHSCORE_COUNT 10

void lintgame_init(highscore highscores[HIGHSCORE_COUNT], platform *plat);

#ifdef __cplusplus
};
#endif // __cplusplus
