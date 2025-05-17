#include "iostream"
using namespace std;
void Selection(int arr[], int s)
{
    int hit;
    for (int i = 0; i < s - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < s; j++)
        {
            hit++;
            if (arr[j] > arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(arr[min], arr[i]);
        }
    }
    cout<<hit<<"\n";
}

int main()
{
    int arr[] = {4, 2, 6, 7, 8};
    int s = sizeof(arr) / sizeof(arr[0]);
    // cout<<"Selection";
    Selection(arr, s);
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "\t \n";
    }
}