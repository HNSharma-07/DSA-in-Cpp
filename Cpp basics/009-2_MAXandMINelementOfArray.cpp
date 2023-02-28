#include <iostream>
using namespace std;

void takeArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
int MaxEle(int arr[], int size)
{
    int maxi = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]); // by using inbuilt func.
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    return maxi;
}
int MinEle(int arr[], int size)
{
    int min = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[100];
    int size;
    cout << "enter array size (Max=100) : ";
    cin >> size;
    cout << "enter the elements : ";
    takeArray(arr, size);
    // cout << "the elements of the array are : \n";
    // printArray(arr, size);
    cout << "Maximum element is : " << MaxEle(arr, size) << endl;
    cout << "Minimum element is : " << MinEle(arr, size) << endl;
}