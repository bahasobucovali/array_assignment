#include <iostream>
#include "array.h"
using namespace std;

Array::Array() {
	size = 1;
	data = new int[size];
	data[0] = 0;
}

Array::Array(const int size, const int val) :size(size){
	data = new int[size];
	for (int i = 0; i < size; i++) {
		data[i] = val;
	}
}

Array::Array(const int size, const int* arr) :size(size){
	data = new int[size];
	for (int i = 0; i < size; i++) {
		data[i] = arr[i];
	}
}

Array::Array(const Array& src_Arr):size(src_Arr.size) {
	data = new int[size];
	for (int i = 0; i < size; i++) {
		data[i] = src_Arr.data[i];
	}
}

void Array::add(const Array& src_Arr) {
	for (int i = 0; i < size; i++) {
		data[i] = data[i] + src_Arr.data[i];
	}
	print();
}
void Array::subtract(const Array& src_Arr) {
	for (int i = 0; i < size; i++) {
		data[i] = data[i] - src_Arr.data[i];
	}
	print();

}
void Array::multiply(const Array& src_Arr) {
	for (int i = 0; i < size; i++) {
		data[i] = data[i] * src_Arr.data[i];
	}
	print();
}
int Array::product(const Array& src_Arr) {
	int result=0;
	for (int i = 0; i < size; i++) {
		result += data[i] * src_Arr.data[i];
	}
	return result;
}

void Array::copy(const Array& rhs_Arr) {
	size = rhs_Arr.size;
	data = new int[size];
	for (int i = 0; i < size; i++) {
		data[i] = rhs_Arr.data[i];
	}
}

int Array::getSize() { return size; }
int* Array::getData() { return data; }
void Array::fill(const int value) {
	for (int i = 0; i < size; i++) {
		data[i] = value;
	}
}
void Array::print() {
	for (int i = 0; i < size; i++) {
		cout << data[i];
	}
	cout << endl;
}
