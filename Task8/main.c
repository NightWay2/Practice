#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251); // Цей і наступний рядок відповідає за підключення української
    SetConsoleOutputCP(1251);

    int factorial = 1, res_count = 1;
    char word[14];

    printf("Введіть слово: ");
    gets(word); // Введення слова

    int size_word = strlen(word); // Кількість букв

    if (size_word <= 14) // Умово, поставлена в задачі
    {
        for (int i = 0; i < size_word; i++)
        {
            char current_letter = word[i]; // Присвоєння для поточної букви
            int isDuplicate = 0; // Датчик, який призначений для повторів

            for (int t = 0; t < i; t++)
            {
                if (word[t] == current_letter) // Перевірка на букву
                {
                    isDuplicate = 1; // Показує, якщо буква співпадає
                    break; // Перериває роботу цикла
                }
            }
            if (!isDuplicate) // Умова, що не було співпадіння букв
            {
                int count = 0; // Лічильник
                for (int t = i; t < size_word; t++)
                {
                    if (word[t] == current_letter) // Перевірка на співпадіння
                        count++;
                }
                for (int k = 1; k <= count; k++)
                {
                    res_count *= k; // Факторіал букв, які повторюються
                }
            }
            factorial *= (i + 1); // Факторіал кількості букв
        }
        printf("Кількість анаграм: %d\n", factorial / res_count); // Вивід результату
    }
    else
        printf("Error\n"); // Якщо початкова умова не справдилася

    return 0;
}
