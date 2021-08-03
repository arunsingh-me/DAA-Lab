# Sorting Algorithms

```cpp
#include <iostream>
using namespace std;
void bubble_sort(int arr[], int n) {
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 0; j <= n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main() {
	// your code goes here
    int arr[] = {3, 9, 4, -4, -2, 8};
    int n = sizeof(arr)/sizeof(int);
    bubble_sort(arr, n);
    for (auto x : arr) {
        cout << x << ",";
    }
	return 0;
}
```

```
SELECT * FROM employees;

```

```
SELECT * FROM employees;

```