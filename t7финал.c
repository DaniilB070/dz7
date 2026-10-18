#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    int month;
    printf("Задание 5. Составить программу, которая в зависимости от порядкового номера месяца выводит на экран время года.\n\n");
    printf("Введите номер месяца (1-12): ");
    scanf("%d", &month);
    switch (month)
    {
    case 12:
    case 1:
    case 2:
        printf("Зима\n");
        break;

    case 3:
    case 4:
    case 5:
        printf("Весна\n");
        break;

    case 6:
    case 7:
    case 8:
        printf("Лето\n");
        break;

    case 9:
    case 10:
    case 11:
        printf("Осень\n");
        break;

    default:
        printf("Ошибка: введён неверный номер месяца!\n");
        break;
    }

    return 0;
}