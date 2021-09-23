#include <iostream>
using namespace std;

void Selection_Sort(int arr[], int n)
{
    int small, comp = 0, swaps = 0, i, j;
    for (i = 0; i < n - 1; i++)
    {
        small = i;
        j = i - 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[small])
                small = j;
            comp++;
        }
        int temp = arr[i];
        arr[i] = arr[small];
        arr[small] = temp;
        swaps++;
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nComparisons=" << comp;
    cout << "\nSwaps=" << swaps;
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
        Selection_Sort(arr, n);
    }
    return 0;
}