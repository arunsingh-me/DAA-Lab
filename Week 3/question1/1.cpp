#include <iostream>
using namespace std;

void Insertion_Sort(int arr[], int n)
{
    int key, comp = 0, shifts = 0, i, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
            comp++;
            shifts++;
        }
        arr[j + 1] = key;
        shifts++;
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nComparisons=" << comp;
    cout << "\nShifts=" << shifts;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Insertion_Sort(arr, n);
    }
    return 0;
}