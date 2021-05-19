#define HELLO "Hello"
#define WORLD "World"
#define NAME "Tali"

#define DEF(x) #x, x
const char *defs[] = {
    DEF(HELLO),
    DEF(WORLD),
    DEF(NAME)
};
#define n_defs (sizeof(defs) / sizeof(const char *))
