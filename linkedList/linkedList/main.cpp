#include <iostream>

#include "linkedList.h"


int main() {
	list x;

	for (int i = 1; i <= 5; i++) {
		x.add(i);
	}

	x.print();


	system("pause");
	return 0;
}