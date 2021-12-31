#include <stdio.h>
#include <unistd.h>

/*
The unistd.h header is not actually part of the standard C library. 
Instead, it gives your programs access to some of the POSIX libraries.

POSIX was an attempt to createa common set of functions for use across all popular operating systems.
*/

int main(int argc, char *argv[]) {
    char *delivery = "";
    int thick = 0;
    int count = 0;
    char ch;

    while ((ch = getopt(argc, argv, "d:t")) != EOF) { //The ‘d’ is followed by a colon because it takes an argument.
        switch (ch) {
            case 'd':
                delivery = optarg; //We’ll point the delivery variable to the argument supplied with the ‘d’ option.
                break;
            case 't':
                thick = 1;
                break;
            default:
                fprintf(stderr, "Unknow option: '%s'\n", optarg);
                return 1;
        }
    }

    //These two lines make sure we skip past the options we read.
    //optind stores the number of strings read from the command line to get past the options.
    argc -= optind;
    argv += optind;

    if (thick) {
        puts("Thick crust.");
    }

    if (delivery[0]) {
        printf("To be delivered: %s\n", delivery);
    }

    puts("Ingredients:");

    //After processing the options, the first ingredient is argv[0].
    for (count = 0; count < argc; count++) {
        puts(argv[count]);
    }

    return 0;
}
