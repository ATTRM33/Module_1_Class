//Zach Brown
//Date: 7/9/2024
//CS2 

#include <iostream>

using namespace std;

//prototypes
void practiceArrays();
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
	int count = getCount();// gets the amount of times the user wants to enter a number
	int* ptr = nullptr;


	//get values
	ptr = populateNumbers(ptr, count);

	//sum of values in array
	for (int i = 0; i < count; i ++) {

		sum += *(ptr+i);
	}

	double average = sum / static_cast<double>(count);

	//highest value
	int highest = *ptr;

	// for loop takes the highest value within the array and stores it in highest
	for (int i = 0; i < count; i++) {
		if (highest < *(ptr + i)) {
			highest = *(ptr + i);
		}
	}

	//lowest value
	int lowest = *ptr;

	// for loop takes the lowest value within the array and stores it in lowest
	for (int i = 0; i < count; i++) {
		if (lowest > *(ptr + i)) {

			lowest = *(ptr + i);
		}
	}

	//display infor to console for sum, average, highest and lowest values
	cout << "The sum of the 5 numbers is: " << sum << endl;
	cout << "The average of the 5 numbers is: " << average << endl;
	cout << "The highest number is: " << highest << endl;
	cout << "The lowest number is: " << lowest << endl;

	delete[] ptr;
	ptr = nullptr;
}

int getCount() {
	int count;

	//prompt user on how many values they wisht to enter
	cout << "How many values would you like to Enter: ";
	cin >> count;
	return count;
}

int* populateNumbers(int* ptr, int count) {
	
	ptr = new int[count];

	//for loop stores numbers entered into array ptr
	for (int i = 0; i < count; i++) {

		cout << "Please enter a value : ";
		cin >> *(ptr+i) ;
	}
	return ptr;
}

