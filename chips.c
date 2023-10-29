#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// a chip
typedef struct {
    char name[50];
    char type[50];
    char message[255];
} Chip;

//  chat between chips
void chat(Chip chip1, Chip chip2) {
    printf("%s: Hi, I am a %s. %s\n", chip1.name, chip1.type, chip1.message);
    printf("%s: Hello, I am a %s too! %s\n", chip2.name, chip2.type, chip2.message);
}

int main() {
    // two chips
    Chip intelChip;
    strcpy(intelChip.name, "Intel Chip");
    strcpy(intelChip.type, "Computer Chip");
    strcpy(intelChip.message, "I can process data at lightning speed!");

    Chip laysChip;
    strcpy(laysChip.name, "Lays Chip");
    strcpy(laysChip.type, "Potato Chip");
    strcpy(laysChip.message, "I am crunchy and tasty!");

    // chat between Intel and Lays chip
    chat(intelChip, laysChip);

    return 0;
}
