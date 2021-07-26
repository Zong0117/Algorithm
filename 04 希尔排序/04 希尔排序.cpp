#include <iostream>
using namespace std;
void swap(int* num1, int* num2)
{
    int* temp = num1;
    num1 = num2;
    num2 = temp;
}
void print(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void ShellSort(int* arr, int len)
{
    for (int gap = len / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < len; i++)
        {
            int key = arr[i];
            int j = i - gap;
            while (j >= 0 && arr[j] > key)
            {
                arr[j + gap] = arr[j];
                j -= gap;
            }
            arr[j + gap] = key;
        }  
    }
    print(arr, len);
}
int main()
{
    int arr[] = { 5,2,8,3,6,4,1,9,7,10 };
    int len = sizeof(arr) / sizeof(arr[0]);
    ShellSort(arr, len);
}
