#include <iostream>
using namespace std;
void print(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void InsertSort(int* arr, int len)
{
    for (int i = 1; i < len; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    print(arr, len);
}
int main()
{
    int arr[] = { 5,2,8,3,6,4,1,9,7,10 };
    int len = sizeof(arr) / sizeof(arr[0]);
    InsertSort(arr, len);
}


