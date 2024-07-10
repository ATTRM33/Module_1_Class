//Zach Brown
//7/9/2024
//CS2 Pointers practice

#include <iostream>
#include <string>

using namespace std;

//prototypes
string getName();
int getAge();
void getMemory(string name, int age);
void printAscending(string* months);
void printDescending(string* months);

int main() {
	string name;
	int age;
	string months[12] = { "January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December" };

	name = getName();

	age = getAge();

	getMemory(name, age);

	cout << endl;

	printAscending(months);

	cout << endl;

	printDescending(months);

	return 0;
}

string getName() {
	//local variables
	string name;

	//prompt user for age
	cout << "What is your name?\n";
	getline(cin, name);

	return name;
}

int getAge() {
	//local variables
	string data;
	int age;

	//prompt for age
	cout << "How old are you? \n";
	getline(cin, data);

	//convert string data to int
	age = stoi(data);

	return age;
}

void getMemory(string name, int age) {

	string* ptr = nullptr;
	int* ptr2 = nullptr;

	ptr = &name;
	ptr2 = &age;

	cout << "Name: "<< * ptr << endl;
	cout << "The memory address of the name: " << ptr << endl;
	cout << endl;
	cout << "Age: "<< * ptr2 << endl;
	cout << "The memory address of the age is: " << ptr2 << endl;

	

}

void printAscending(string* months) {

	string* ptr = months;

	
	for (int i = 0; i < 12;i++) {
		cout << ptr[i]<< " ";
	}

}

void printDescending(string* months) {

	string* ptr = months;

	for (int i = 11; i >= 0; i--) {
		cout << ptr[i] << " ";
	}

	delete[] ptr;
	ptr = nullptr;
	
}
