#include <iostream>
#include "array.h"
using namespace std;

int main() {
	int arr[] = { 3,3,3,3,3};

	Array a1; // a1 ← {0}
	a1.print();
	Array a2(5, 0); // a2 ← {0, 0, 0, 0, 0}
	a2.print();
	Array a3(5, arr); // a3 ← {3, 3, 3, 3, 3}
	a3.print();
	Array a4(a3); // a4 ← {3, 3, 3, 3, 3}
	a4.print();

	a2.add(a3); // a2 ← {3, 3, 3, 3, 3}
	a2.subtract(a3); // a2 ← {0, 0, 0, 0, 0}
	a2.fill(1); // a2 ← {1, 1, 1, 1, 1}
	a2.print();
	a2.multiply(a3); // a2 ← {3, 3, 3, 3, 3}
	cout << a3.product(a4) << endl; // 45
	cout << a3.getSize() << endl; //5
	cout << a3.getData()[2] << endl; //3
	a2.copy(a3); // a2 ← {3, 3, 3, 3, 3}
	a2.fill(1); // a2 ← {1, 1, 1, 1, 1}
	a2.print(); // [1 1 1 1 1] 
}

