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
void BubbleSort(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    print(arr, len);
}
int main()
{
    int arr[] = { 5,2,8,3,6,4,1,9,7,10 };
    int len = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr,len);
}


