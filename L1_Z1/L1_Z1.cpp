//
//  main.cpp
//  L1_Z1
//
//  Created by Александр Грачев on 15/02/2019.
//  Copyright © 2019 Александр Грачев. All rights reserved.
//

#include "pch.h"
#include <iostream>
#include "locale.h"

using namespace std;
int main(int argc, const char * argv[]) {
	setlocale(LC_ALL, "rus");

	//Пункт 1. Вывод размера ячеек памяти.
	cout << "int имеет размер: " << sizeof(int) <<
		"\nchar имеет размер: " << sizeof(char) <<
		"\nunsigned char имеет размер: " << sizeof(unsigned char) <<
		"\nlong имеет размер: " << sizeof(long) <<
		"\n\nfloat имеет размер: " << sizeof(float) <<
		"\ndouble имеет размер: " << sizeof(double) <<
		"\nlong double имеет размер: " << sizeof(long double) << endl;


	return 0;
}
