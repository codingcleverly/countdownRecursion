#include <iostream>
using namespace std;

void countdown(int num)
{
    for(int i = num; i>0; i--)
    {
        cout<<i<<endl;
    }
    cout<<"Blast Off!"<<endl;
}


void countdownRecursive(int num)
{
    if(num<1)
    {
        cout<<"Blast Off!"<<endl;
        return;
    }
    else
    {
        cout<<num<<endl;
        countdownRecursive(num-1);
    }
}

// countdownRecursive(3);
//     countdownRecursive(2);
//         countdownRecursive(1);
//             countdownRecursive(0);
//             return;
//         return;
//     return;
// return;



int main()
{

    //countdown(10);
    countdownRecursive(10);
    return 0;
}