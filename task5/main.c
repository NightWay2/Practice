#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251); // Цей і наступний рядок підключає українську мову
    SetConsoleOutputCP(1251);

    int n, t = 0;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n); // Введення числа n
    if (n > 1 && n < 10000) // Умова, поставлена в задачі
    {
        int all = pow (2, n); // Приводимо число 2 до степеня n
        for (int i = 1; i <= n - 2; i++) // Цикл, для того, щоб дати лічильнику потрібне число
        {
            t+=i; // лічильник
        }
        printf("Кількість шуканих послідовностей: %d\n", all - t); // Вивід результату
    }
    else
        printf("Error\n");

    return 0;
}
