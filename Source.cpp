//Карина 101221
#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;

void init_field(char** field, int size);
//распечатка поля
void  print_field(char** field, int size);

int main() {
	int size = 3;
	char** field = new char* [size];
	for (int i = 0; i < size; i++) {
		field[i] = new char[size];
	}
	init_field(field, size);
	print_field(field, size);
	return 0;
}
void init_field(char** field, int size) {
	for (int i = 0; i < size; i++) {
		for (int h = 0; h < size; h++) {
			field[i][h] = ' ';
		}
	}
}
void  print_field(char** field, int size) {
	for (int i = 0; i < size; i++) {
		cout << "|---|---|---|" << endl;
		for (int h = 0; h < size; h++) {
			cout << "| " << field[i][h] << ' ';
		}
		cout << '|' << endl;
	}
	cout << "|---|---|---|" << endl;
}


