#include <stdio.h>

int main() {
    int red_balls[10];
    for (int i = 0; i < 10; i++) {
        red_balls[i] = 5;
    }
    int size = sizeof(red_balls) / sizeof(red_balls[0]);
    printf("В коробке red_balls помещается %d шариков.\n", size);
    return 0;
}
