#include <stdio.h>

int main() {
    int colorful_balls[15];
    // Заполняем массив: 1-й элемент = 1, 2-й = 2, ..., 15-й = 15
    for (int i = 0; i < 15; i++) {
        colorful_balls[i] = i + 1;
    }
    int size = sizeof(colorful_balls) / sizeof(colorful_balls[0]);
    printf("В коробке colorful_balls помещается %d шариков.\n", size);
    return 0;
}
