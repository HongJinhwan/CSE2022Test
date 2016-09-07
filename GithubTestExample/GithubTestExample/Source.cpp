#include <stdio.h>
#include <iostream>
#include <ostream>
#include <fstream>
//branch commit test.
//namespace

struct Vector2D {
	int x = 1;
	int y = 2;

	void print() {
		printf("%d %d \n", x,y);
	}
};

namespace Vector2D_Second {
	int x = 3;
	int y = 4;

	void print() {
		printf("%d %d \n", x, y);
	}
}

std::ostream& operator << (std::ostream& stream, Vector2D vector) {
	stream << vector.x << " " << vector.y << std::endl;
	return stream;
}

void main()
{
	int a;
	Vector2D_Second::print();
	Vector2D vector1, vector2;
	vector2.x = 3;
	vector2.y = 4;
	/*
	printf("Hello, world!");
	//my first github code.

	std::cout << "Hello,world" << std::endl;
	//std : standard -> namespaceÁß ÇÏ³ª
	std::cout << vector1.x << " " << vector1.y;

	std::cout << vector1 << std::endl;


	FILE *of = fopen("text.txt", "w");
	fprintf(of, "%d %d", vector1.x, vector1.y);
	fclose(of);

	
	*/

	std::ofstream of("cppstyle.txt");

	of << vector1 << std::endl;

	std::cin >> a;
}