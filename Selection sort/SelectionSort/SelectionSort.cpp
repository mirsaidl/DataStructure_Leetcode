#include <iostream>
using namespace std;

int Smallest(int arr[], int size);
int SelectionSort(int arr[], int size);


int main()
{
	
}

int Smallest(int arr[],int size) {
	int min = arr[0];
	int index = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < min)
			min = arr[i];
		    index = i;
	}
	return index;
}

int* SelectionSort(int arr[], const int size) {
	int* new_arr = new int[size];
	for (int i = 0; i < size; i++) {
		int smallest = Smallest(arr, size);
		new_arr[i] = arr[smallest];
	}

	for (int j = 0; j < size; j++) {
		int smallest = Smallest(arr, size);
		int newIndex = 0;
		int* poped = new int[size - 1];
		if (arr[j] != smallest) {
			poped[newIndex] = arr[j];
			newIndex++;
		}
		poped = arr;
	}

	return new_arr;
}