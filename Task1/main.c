#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);      // ��� � ��������� ����� �������� ������ ����������
    SetConsoleOutputCP(1251);

    float t1, t2, t3, avg, time_sum;
    printf("������ ��� �����! (����� ����� ������� ����� ����� ��� ����� Enter, ����� ����� �� ������ ���� ������� �� 10000)\n");
    scanf("%f %f %f", &t1, &t2, &t3); // �������� ����� (����� ������� ����� ����� ��� ����� Enter)

    if (t1 > 10000 || t2 > 10000  || t3 > 10000) // �����
        printf("�� ����� ����� ����� 10000");
    else
    {
        avg = (t1 + t2 + t3) / 3; // ����'����
        time_sum = avg / 3;

        printf("���, ���������� ��� �'������ ������: %0.2f �����", time_sum); // ���������
    }

    return 0;
}
