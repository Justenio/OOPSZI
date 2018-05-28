#include "Header.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	double eps;
	int n, k;
	for(;;)
	{
		system("cls");
		printf("Введите номер действия:\n1 - Задание 1\n2 - Задание 2\n3 - Задание 3\n4 - Задание 4\n5 - Задание 5\n6 - Выход\n\n");
		switch (_getch())
		{
		case '1':
			system("cls");
			printf("Задание 1:\n");
			printf("n = "); scanf("%i", &n);
			printf("Сумма = %.50f\n", task1(n));
			_getch();
			break;
		case '2':
			system("cls");
			printf("Задание 2:\n");
			printf("eps = "); scanf("%lf", &eps);
			printf("Сумма = %.50f\n", task2(eps));
			_getch();
			break;
		case '3':
			system("cls");
			printf("Задание 3:\n");
			printf("n = "); scanf("%i", &n);
			printf("k = "); scanf("%i", &k);
			task3(n, k);
			_getch();
			break;
		case '4':
			system("cls");
			printf("Задание 4:\n");
			printf("eps = "); scanf("%lf", &eps);
			printf("i = %d\n", task4(eps));
			_getch();
			break;
		case '5':
			system("cls");
			printf("Задание 5:\n");
			printf("eps = "); scanf("%lf", &eps);
			printf("i = %d\n", task5(eps));
			_getch();
			break;
		case '6':
			return 0;
			break;
		default:
			system("cls");
			printf("Неверный ввод\n");
			_getch();
			break;
		}
	}
}

double a(int i) 
{
	return (pow((-1), i) / ((i + 1)*(i + 2)*(i + 3)));
}
