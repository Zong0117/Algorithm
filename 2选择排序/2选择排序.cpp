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
void SelectSort(int arr[], int len)
{
    int min;
    for (int i = 0; i < len; i++)
    {
        min = i;
        for (int j = i; j < len; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[i], arr[min]);
    }
    print(arr, len);
}
int main()
{
    int arr[] = { 5,2,8,3,6,4,1,9,7,10 };
    int len = sizeof(arr) / sizeof(arr[0]);
    SelectSort(arr,len);
}

