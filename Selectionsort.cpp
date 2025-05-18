#include "iostream"
using namespace std;
void Selection(int arr[], int s)
{
    int hit=0;
    for (int i = 0; i < s - 1; i++)
    {  
        hit++;
        int min = i;
        for (int j = i + 1; j < s; j++)
        {
            if (arr[j]< arr[min])
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
int main(){
    int arr[] = {5,1,4,2,3};
    int s = sizeof(arr) / sizeof(arr[0]);
    Selection(arr, s);
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "\t";
    }
}