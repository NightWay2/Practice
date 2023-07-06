#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y, res, i = 1, token = 0;
    scanf("%d %d", &x, &y); // Ввід даних
    res = x;
    if (0 <= x && x <= y && y <= pow(2, 31)) // Початкова умова
    {
        if (x == y) // Умова, при якій x = y
            printf("0\n");
        else // Якщо попередня умова не виконується
        {
            do // Цикл для обрахунку кроків
            {
                res = res + i; // Показник
                i = 2;
                token++; // Лічильник кроків
            }
            while (res != (y - 1) && res != (y - 2) && res != y); // Умова циклу
            if (res == (y - 1)) // Умова, коли потрібно зробити крок в 1
                token++; // Лічильник
            if (res == (y - 2)) // Умова, коли потрібно зробити 2 крока по 1
                token+=2; //Лічильник
            printf("%d\n", token); // Вивід результату
        }
    }
    else
        printf("Error"); // Вивід помилки при не виконанні початкової умови
    return 0;
}
