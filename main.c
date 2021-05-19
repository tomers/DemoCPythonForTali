#include "defs.h"
#include <stdio.h>

int main(void)
{
    int i;

    FILE *f = fopen("defs.json", "w");
    fprintf(f, "{\n");
    for (i = 0; i < n_defs; i += 2) {
        char *comma = i == (n_defs - 2) ? "" : ",";
        fprintf(f, "    \"%s\": \"%s\"%s\n", defs[i], defs[i + 1], comma);
    }
    fprintf(f, "}\n");
}
