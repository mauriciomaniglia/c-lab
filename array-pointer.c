#include <stdio.h>

int main() {
    
    int drinks[] = {1, 4, 6};

    printf("1st order: %i drinks\n", drinks[0]);
    printf("1st order: %i drinks\n", *drinks);

    printf("3rd order: %i drinks\n", drinks[2]);
    printf("3rd order: %i drinks\n", *(drinks + 2));
    printf("3rd order: %i drinks\n", 2[drinks]);
}


