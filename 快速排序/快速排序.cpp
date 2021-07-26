#include <iostream>
using namespace std;
void QuickSort(int* arr, int left, int right)
{
    if (left > right) return;
    int i = left;
    int j = right;
    int key = arr[left];
    while (i < j)
    {
        while (i < j && arr[j] >= key)
        {
            j--;
        }
        if (i < j)
        {
            arr[i] = arr[j];
            i++;
        }
        while (i < j && arr[i] <= key)
        {
            i++;
        }
        if (i < j)
        {
            arr[j] = arr[i];
            j--;
        }
    }
    arr[i] = key;
    QuickSort(arr, left, i - 1);
    QuickSort(arr, i + 1, right);
}
void print(int* arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = { 5,2,8,3,6,4,1,9,7,10 };
    int len = sizeof(arr) / sizeof(arr[0]);
    QuickSort(arr, 0, len - 1);
    print(arr, len);

}
