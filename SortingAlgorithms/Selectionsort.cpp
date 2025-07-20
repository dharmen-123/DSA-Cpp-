#include "iostream"
using namespace std;
void Selection(int arr[], int s)
{
    int hit=0;
    for (int i = 0; i < s - 1; i++)      // loop is run (n-1) times
    {  
        int min = i;
        hit++;
        for (int j = i + 1; j < s; j++)     // loop is running n times
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

//  Time complexity of Selection Sort is n(n-1)=
// Worst case = O(n^2) 
// Best case  = O(n^2) 
// Average case=O(n^2) 