#include <iostream>
using namespace std;

int binary_search(int arr[], int item, int size) {
	int low = 0;
	int high = size - 1;
	

	while (low <= high) {
		int mid = ((low + high) / 2) * 1.0;
		int guess = arr[mid];

		if (guess == item)
			return mid;
		if (guess > item)
			high = mid - 1;
		else
			low = mid + 1;
    }
	
	cout << "There is no number like that in the array!\n";
	return -1;
}

int main() {
    
	
	int arr1[5] = { 1, 3, 5, 7, 9 };
	int arr2[4] = { 45 , 89, 95, 100 };
	int item = 3;

	cout << binary_search(arr1, item, 5) << endl;
	cout << binary_search(arr2, item, 4);

	return 0;

}