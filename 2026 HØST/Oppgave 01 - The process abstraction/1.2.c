#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    // Safety guard
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <number>\n", argv[0]);
        return 1;
    }

    // Convert the first argument to an integer
    int number = atoi(argv[1]);

    // Read a string from standard input
    enum { MAX_SIZE = 100 };
    char buff[MAX_SIZE];

    printf("Enter a string: ");
    if (fgets(buff, MAX_SIZE, stdin) == NULL) {
        fprintf(stderr, "Error reading input\n");
        return 1;
    }

    // Print the string 'number' times
    for (int i = 0; i < number; ++i) {
        printf("%s", buff);
    }

    return 0;
}
