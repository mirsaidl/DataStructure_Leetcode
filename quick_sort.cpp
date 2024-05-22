#include <iostream>
using namespace std;


void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int partition(int a[], int l, int h) {
    int p = a[l];
    int i = l;
    int j = h;

    while (i < j) {
        do {
            i++;
        } while (a[i] <= p);

        do {
            j--;
        } while (a[j] > p);

        if (i < j) {
            swap(a[i], a[j]);
        };
    };

    swap(a[l], a[j]);

    return j;
}

void quick_sort(int a[], int l, int h) {
    int p = partition(a, l, h);
    if (l < h) {
        quick_sort(a, l, p);
        quick_sort(a, p+1, h);
    }
}

int main() {
    int a[] = { 45, 20, 10, 75, 80, 21, 56, 931, 1  3, 3123 };
    int n = sizeof(a) / sizeof(a[0]);
    quick_sort(a, 0, n);
    for (int i = 0; i < n; i++) {
        cout << a[i];
        cout << ' ';
    }
    return 0;
}

