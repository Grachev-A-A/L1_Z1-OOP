//
//  main.cpp
//  L1_Z1
//
//  Created by Александр Грачев (ИКБО-10-18) on 15/02/2019.
//  Copyright © 2019 Александр Грачев. All rights reserved.
//  Тема 1. РАЗРАБОТКА И ОТЛАДКИ КОНСОЛЬНОГО ПРОЕКТА В
//  СРЕДЕ VISUAL STUDIO
//

#include "pch.h"
#include "stdio.h"
#include "locale.h"
#define PI 3.14
#define SQR(x) x*x

int main(int argc, const char * argv[]) {
	setlocale(LC_ALL, "rus");

	//Задание 1. ВЫВОД.

	//Пункт 1. Вывод размера ячеек памяти.
	printf("Размер ячейки памяти типа int = %d\n", sizeof(int));
	printf("Размер ячейки памяти типа char = %d\n", sizeof(char));
	printf("Размер ячейки памяти типа unsigned char = %d\n", sizeof(unsigned char));
	printf("Размер ячейки памяти типа short = %d\n", sizeof(short));
	printf("Размер ячейки памяти типа long = %d\n", sizeof(long));
	printf("\nРазмер ячейки памяти типа float = %d\n", sizeof(float));
	printf("Размер ячейки памяти типа double = %d\n", sizeof(double));
	printf("Размер ячейки памяти типа long double = %d\n", sizeof(long double));
	//Пункт 2. Переменные.
	char ch = 65;
	int i = 684;
	float f = 68.4f;
	double d = 6.84;
	printf("\nЗначение переменной i = %d,\nЗначение переменной f = %f,\nЗначение переменной d = %lf,\nЗначение символьной переменной ch = %c,\nКод символа переменной ch = %d\n", i,f,d,ch,ch);
	printf("\nВещественное значение в формате хранения d = %f,\nв заданном формате d =%10.3f\n", d, d);
	printf("Целое число в формате хранения i=%d,\nв заданном формате i=%10d\n",i,i);
	//Пункт 3. Работа с define'ами.
	printf("\nPI=%f\n", PI);
	printf("Значение выражения = %f\n", SQR(2)*PI);

	//Задание 2. ВВОД.

	/*
	*	В задании используется функция ввода scanf_s, а не scanf, так как
	*	VS считает последнюю небезопасной и не даёт запустить проект.
	*	Код ошибки С4996
	*	Текст: 'scanf': This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.	L1_Z1	c:\users\virtualwin\source\repos\l1_z1\l1_z1\l1_z1.cpp	52	
	*/

	int a, b;
	double y;
	char c;
	// Ввод одного значения целого типа
	printf("Введите целое число в переменную а\n");
	scanf_s("%d", &a);
	printf("Введено значение %d\n", a);
	// Ввод нескольких значений целого типа
	printf("Введите два целых числа\n"); //при вводе числа разделяйте пробелом
	scanf_s("%d %d", &a, &b);
	printf("Введено значение a=%d,\n\tb=%d\n", a,b);

	// Ввод нескольких значений различных типов
	printf("Введите одно целое число \nодно дробное число\nодин символ\n");//через пробел
	scanf_s("%d %lf %c", &a, &y, &c);
	printf("Введено значение a=%d,\n\ty=%lf,\n\tc=%c\n", a, y, c);


	// Ввод текста, состоящего из нескольких слов, которые отделяются пробелами друг от друга, функцией scanf.
	// Определить переменную для хранения текста из 100 символов:
	char s[100];

	// Добавьте операторы для организации ввода текста
	printf("Введите текст из нескольких слов");
	scanf_s("%s", &s);
	//Вывод значения переменной s
	printf("Введен текст %s\n", s);

	return 0;
}
