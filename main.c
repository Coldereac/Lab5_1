#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
*Завдання 1. Приклад 3. Необхідно порівняти введену користувачем відповідь з
рядком, що зберігається в пам'яті.
а) Додати можливість виконати користувачеві декілька спроб для надання
вірної відповіді.
б) відредагувати код таким чином, щоб у відповіді було не важливо які
літери, маленькі чи великі, використовує виконавець програми.
 */

char * allocating( const int size) {
    return (char*) malloc(size + 1 * sizeof(char));
}

#define SIZE 30
#define ANSWER "Kitty"

int main() {
    char *try = allocating(SIZE);
    int attempts = 3;
    while (attempts) {
        printf("You have %d attempts\n", attempts);
        printf("Who said \"Meow\"?\n");
        gets(try);
        if (strcasecmp(try, ANSWER) == 0) {
            puts("Rightly!");
            attempts = 0;
        } else {
            puts("No");
            attempts--;
        }
    }
    return 0;
}

