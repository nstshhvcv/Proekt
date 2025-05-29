//Дано предложение. Определить, есть ли буква а в нем. В случае положитель-
//ного ответа найти также порядковый номер первой из них.
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Пожалуйста, введите предложение в качестве аргумента командной строки.\n");
        return 1;
    }

    char *sentence = argv[1];
    int found = 0;
    int index = -1;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == 'а' || sentence[i] == 'А') { // Проверяем и строчную, и заглавную 'а'
            index = i;
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Буква 'а' найдена на позиции: %d\n", index);
    } else {
        printf("Буква 'а' не найдена в предложении.\n");
    }

    return 0;
}
