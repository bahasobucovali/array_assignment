#include <iostream>
using namespace std;

class Array {
private:
	int* data;
	int size;
public:
	Array();
	Array(const int size, const int val);
	Array(const int size, const int* arr);
	Array(const Array& src_Arr);

	void add(const Array& src_Arr);
	void subtract(const Array& src_Arr);
	void multiply(const Array& src_Arr);
	
	int product(const Array& src_Arr);

	void copy(const Array& rhs_Arr);

	int getSize();
	int* getData();
	void fill(const int value);
	void print();
};
