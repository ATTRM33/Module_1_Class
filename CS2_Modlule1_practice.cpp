//Zach Brown
//Date: 7/9/2024
//CS2 

#include <iostream>

using namespace std;

//prototypes
void practiceArrays();
void practicePointers();
void practiceStructs();
int getCount();
int* populateNumbers(int* ptr, int count);



int main() {
	
	
	practiceArrays();

	//practicePointers();

	//practiceStructs();
}




void practiceArrays() {
	
	//local variables
	int sum = 0;
	int count = getCount();
	int* ptr = nullptr;


	//get values
	ptr = populateNumbers(ptr, count);

	//sum of values in array
	for (int i = 0; i < count; i ++) {

		sum += *(ptr+i);
	}

	
	//average of values in array
	//for (int i = 0; i < count; i++)
	//{
		//sum += *(ptr + i);
	
	//}
	double average = sum / static_cast<double>(count);

	//highest value
	int highest = *ptr;

	for (int i = 0; i < count; i++) {
		if (highest < *(ptr + i)) {
			highest = *(ptr + i);
		}
	}

	//lowest value
	int lowest = *ptr;

	for (int i = 0; i < count; i++) {
		if (lowest > *(ptr + i)) {

			lowest = *(ptr + i);
		}
	}

	cout << "The sum of the 5 numbers is: " << sum << endl;
	cout << "The average of the 5 numbers is: " << average << endl;
	cout << "The highest number is: " << highest << endl;
	cout << "The lowest number is: " << lowest << endl;

	delete[] ptr;
	ptr = nullptr;
}

int getCount() {
	int count;

	cout << "How values would you like to Enter: ";
	cin >> count;
	return count;
}

int* populateNumbers(int* ptr, int count) {
	//get values

	ptr = new int[count];
	for (int i = 0; i < count; i++) {

		cout << "Please enter a value : ";
		cin >> *(ptr+i) ;
	}
	return ptr;
}




void practicePointers() {

}
void practiceStructs() {

}