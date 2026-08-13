#include <iostream>
using namespace std;

int binarysearch(int arr[], int key, int s, int e)
{
    if (s > e)   // base condition
        return -1;

    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return binarysearch(arr, key, s, mid - 1);
    else
        return binarysearch(arr, key, mid + 1, e);
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of array (sorted): ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter element to be searched: ";
    cin >> key;

    int result = binarysearch(arr, key, 0, n - 1);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}
