#include <stdio.h>
#include <string.h>

char* XOR(char* input, char key[]) {
    char* given_input = input;
    
    for(int i = 0; i < strlen(input); i++) {
        given_input[i] = input[i] ^ key[(i % sizeof(key) / sizeof(char))];
    }

    return given_input;
}
