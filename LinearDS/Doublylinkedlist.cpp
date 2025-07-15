//   ############ Doubly linked list ###################

// This is bidirections linked list

#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> lis{1, 2, 3,0};

    for (auto i : lis)
    {
        cout << i << " ";
    }
    lis.push_back(40);     //time O(n)
    cout << "\nAfter Push_back" << endl;
    for (auto i : lis)
    {
        cout << i << " ";
    }
    lis.push_front(90);
    cout << "\nAfter Push_front" << endl;
    for (auto i : lis)
    {
        cout << i << " ";
    }
    lis.pop_back();
    lis.pop_front();

    cout << "\nAfter pop_back" << endl;
    for (auto i : lis)
    {
        cout << i << " ";
    }

    lis.reverse();
    // lis.sort();
    cout << "\n After reverse" << endl;
    for (auto i : lis)
    {
        cout << i << " ";
    }

    lis.remove(2); // O(1)
    cout << "\n After Remove" << endl;
    for (auto i : lis)
    {
        cout << i << " ";
    }
    // cout<<"\nLambda";
    // cout<<[](int a,int b){return a>b;}(5,40);

    //  lis.remove_if([](int a,int b){return a>b;}(5,40));
    // Lambda function (anonimas)  it's the single line functions 
    // [] in front

    return 0;
}

 