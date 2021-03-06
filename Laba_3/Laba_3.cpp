#include "pch.h"
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

typedef void(*FunctionPointer)();

void FirstTask();

void SecondTask();

void ThirdTask();

void Fourth();

void Fifth();

void Sixth();

void Seventh();

int main()
{
	FunctionPointer functionPointers[] = { FirstTask, SecondTask, ThirdTask, Fourth, Fifth, Sixth ,Seventh };

	cout << "Hello! Thi is my programm. Press esc to exit.\n";

	while (true)
	{
		int task_num = 0;
		int task_count = 7;

		cout << "Get me task number\n (1-" << task_count << ")\n";
		cin >> task_num;

		if (task_num < 0 || task_num > task_count)
		{
			cout << "Oops... incorrect number.\n";
			continue;
		}

		functionPointers[task_num - 1]();

		cout << "\nPress any key not esc... or press esc to exit\n";

		if (_getch() == 27)
		{
			cout << "Goodbye!";

			return 0;
		}

		system("cls");
	}

}

void FirstTask()
{
	cout << "Get me a\n";
	int a = 0;
	cin >> a;
	cout << "Get me b\n";
	int b = 0;
	cin >> b;
	int max = a > b ? a : b;
	cout << "Max value is " << max;
}

void SecondTask()
{
	cout << "Get me x\n";
	int x = 0;
	cin >> x;
	cout << "Get me y\n";
	int y = 0;
	cin >> y;
	cout << "Get me radius\n";
	int r = 0;
	cin >> r;

	if (((x - 0) * (x - 0) + (y - 0) * (y - 0)) < r * r)
	{
		cout << "Point in a circle." << endl;
	}
	else if ((x * x  + (y * y)) == r * r)
	{
		cout << "The point lies on the circle." << endl;
	}
	else
	{
		cout << "Point not in a circle." << endl;
	}
}

void ThirdTask()//еще в ходе 2 лабы вставил проверку на корректность
{
	double a, b, c, perimeter, s = 0;

	cout << "Get me a\n";
	cin >> a;
	cout << "Get me b\n";
	cin >> b;
	cout << "Get me c\n";
	cin >> c;

	if (a >= b + c || b >= a + c || c >= a + b)
	{
		cout << "Uncorrect triangle!";
		return;
	}
	perimeter = (a + b + c) / 2;
	cout << "Perimeter / 2 = " << perimeter << endl;

	s = sqrt(perimeter * (perimeter - a) * (perimeter - b) * (perimeter - c));
	cout << "Question is " << s << endl;

	return;
}

void Fourth()
{
	setlocale(LC_ALL, "Russian");
	cout << "Не совсем понимаю, почему отчет по этому заданию на компьютере, но разница в том, какому из 'if' принадлежит 'else'.";
}

void Fifth()
{
	double a, b, c, disc, x1, x2 = 0;

	cout << "Get me a\n";
	cin >> a;
	cout << "Get me b\n";
	cin >> b;
	cout << "Get me c\n";
	cin >> c;

	disc = b * b - 4 * a*c;

	if (disc < 0)
	{
		cout << "No solutions\n";
		return;
	}

	x1 = (-1 * b + sqrt(disc)) / (2 * a);
	
	if (disc == 0)
	{
		cout << "One solution. X == " << x1;
		return;
	}

	x2 = (-1 * b - sqrt(disc)) / (2 * a);

	cout << "Two solutions. X1 == " << x1 << " X2 == " << x2 << endl;
}

void Sixth()
{
	setlocale(LC_ALL, "Russian");

	cout << "Использовать вложенные условия (1) или неполную форму (2)\n";

	bool vlojenn = false;

	while (true)
	{
		int variant = 0;

		cin >> variant;

		if (variant == 1)
		{
			vlojenn = true;
			break;
		}
		else if (variant == 2)
		{
		break;
		}
		else
		{
		cout << "По моему, я выразился четко и ясно. Мне нужно 1 или 2. Зачем вы ввели " << variant << "?\n";
		continue;
		}
	}

	double a, b = 0;

	cout << "Get me a\n";
	cin >> a;
	cout << "Get me b\n";
	cin >> b;

	if (vlojenn)
	{
		if (a < 0)
		{
			if (b < 0)
			{
				cout << "3 quadrant" << endl;
				cout << " |" << endl;
				cout << "___" << endl;
				cout << "*|" << endl;
			}
			else
			{
				cout << "4 quadrant" << endl;
				cout << " |" << endl;
				cout << "___" << endl;
				cout << " |*" << endl;
			}
		}
		else
		{
			if (b < 0)
			{
				cout << "2 quadrant" << endl;
				cout << "*|" << endl;
				cout << "___" << endl;
				cout << " |" << endl;
			}
			else
			{
				cout << "1 quadrant" << endl;
				cout << " |*" << endl;
				cout << "___" << endl;
				cout << " |" << endl;
			}
		}
	}
	else
	{
		if (a < 0 && b < 0)
		{
			cout << "3 quadrant" << endl;
			cout << " |" << endl;
			cout << "___" << endl;
			cout << "*|" << endl;
		}
		else if (a > 0 && b < 0)
		{
			cout << "2 quadrant" << endl;
			cout << "*|" << endl;
			cout << "___" << endl;
			cout << " |" << endl;
		}
		else if (a < 0 && b > 0)
		{
			cout << "4 quadrant" << endl;
			cout << " |" << endl;
			cout << "___" << endl;
			cout << " |*" << endl;
		}
		else if (a > 0 && b > 0)
		{
			cout << "1 quadrant" << endl;
			cout << " |*" << endl;
			cout << "___" << endl;
			cout << " |" << endl;
		}
	}
}


void Seventh()
{
	setlocale(LC_ALL, "Russian");
	double x, y, z = 0;

	cout << "Введите y\n";
	cin >> y;
	cout << "Введите z\n";
	cin >> z;

	cout << "y = " << y << ", z = " << z << "\nX = y ... z\nВ вашей власти повлиять на то, каким будет результат этого выражения. Введите +, -, * или /, чтобы подставить\nего вместо многоточия и узреть результат своего вмешательства.\n";

	char variant = ' ';

	while (true)
	{
		cin >> variant;

		if (variant != '-' && variant != '+' && variant != '*' && variant != '/')
		{
			cout << "Некорректный знак.\n";
			continue;
		}
		break;
	}

	switch (variant)
	{
	case('-'):
	{
		x = y - z;
		break;
	}
	case('+'):
	{
		x = y + z;
		break;
	}
	case('*'):	
	{
		x = y * z;
		break;
	}
	case('/'):
	{
		x = y / z;
		break;
	}
	default:
	{
		cout << "There is error!!!";
		return;
	}
	}

	cout << "Результат выражения: x = " << x << "";




}