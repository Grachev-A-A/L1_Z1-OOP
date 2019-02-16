//
//  main.cpp
//  L1_Z1
//
//  Created by Александр Грачев (ИКБО-10-18) on 15/02/2019.
//  Copyright © 2019 Александр Грачев. All rights reserved.
//

#include "pch.h"
#include "stdio.h"
#include "locale.h"
#define PI 3.14
#define SQR(x) x*x

int main(int argc, const char * argv[]) {
	setlocale(LC_ALL, "rus");

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

	return 0;
}
