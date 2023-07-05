#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2); // Введення координат
    int riz_x = x2 - x1; // Знаходимо координати вектора
    int riz_y = y2 - y1;
    printf("%0.6f\n", sqrt(pow(riz_x, 2) + pow(riz_y, 2))); // Результат

    return 0;
}
