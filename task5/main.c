#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251); // ��� � ��������� ����� ������� ��������� ����
    SetConsoleOutputCP(1251);

    int n, t = 0;
    printf("������ ������� ����������� n: ");
    scanf("%d", &n); // �������� ����� n
    if (n > 1 && n < 10000) // �����, ���������� � ������
    {
        int all = pow (2, n); // ��������� ����� 2 �� ������� n
        for (int i = 1; i <= n - 2; i++) // ����, ��� ����, ��� ���� ��������� ������� �����
        {
            t+=i; // ��������
        }
        printf("ʳ������ ������� �������������: %d\n", all - t); // ���� ����������
    }
    else
        printf("Error\n");

    return 0;
}
