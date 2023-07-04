#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);      // Цей і наступний рядок дозволяє писати українською
    SetConsoleOutputCP(1251);

    float t1, t2, t3, avg, time_sum;
    printf("Введіть три числа! (числа можна вводити через пробіл або через Enter, також числа не повинні бути більшими за 10000)\n");
    scanf("%f %f %f", &t1, &t2, &t3); // Введення чисел (можна вводити через пробіл або через Enter)

    if (t1 > 10000 || t2 > 10000  || t3 > 10000) // умова
        printf("Ви ввели число більше 10000");
    else
    {
        avg = (t1 + t2 + t3) / 3; // Розв'язок
        time_sum = avg / 3;

        printf("Час, необхідний для з'їдання пирога: %0.2f годин", time_sum); // Результат
    }

    return 0;
}
