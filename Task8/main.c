#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251); // ��� � ��������� ����� ������� �� ���������� ���������
    SetConsoleOutputCP(1251);

    int factorial = 1, res_count = 1;
    char word[14];

    printf("������ �����: ");
    gets(word); // �������� �����

    int size_word = strlen(word); // ʳ������ ����

    if (size_word <= 14) // �����, ���������� � ������
    {
        for (int i = 0; i < size_word; i++)
        {
            char current_letter = word[i]; // ��������� ��� ������� �����
            int isDuplicate = 0; // ������, ���� ����������� ��� �������

            for (int t = 0; t < i; t++)
            {
                if (word[t] == current_letter) // �������� �� �����
                {
                    isDuplicate = 1; // ������, ���� ����� �������
                    break; // �������� ������ �����
                }
            }
            if (!isDuplicate) // �����, �� �� ���� ��������� ����
            {
                int count = 0; // ˳�������
                for (int t = i; t < size_word; t++)
                {
                    if (word[t] == current_letter) // �������� �� ���������
                        count++;
                }
                for (int k = 1; k <= count; k++)
                {
                    res_count *= k; // �������� ����, �� ������������
                }
            }
            factorial *= (i + 1); // �������� ������� ����
        }
        printf("ʳ������ �������: %d\n", factorial / res_count); // ���� ����������
    }
    else
        printf("Error\n"); // ���� ��������� ����� �� �����������

    return 0;
}
