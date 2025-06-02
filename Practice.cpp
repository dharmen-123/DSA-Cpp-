#include<iostream>
using namespace std;
void bubble(int arr[],int s)
{
    int temp,c=0;
    bool d;
    for (int i=0;i<s;i++)
    {
        d=false;
        for (int j=0;j<s-i-1;j++)
        {
            c++;
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                d=true;
            }        
        } 
        if (d==false){
            break;
        }
    }
    cout<<"counter hit "<<c<<endl;
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    bubble (arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }
}