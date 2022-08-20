#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter your integer:"<<endl;
    cin>>number;

    if(number>0)
    {
        cout<<"entered integer is positive:"<<number<<endl;
    }

    else if (number==0)
    {
        cout<<"entered integer is zero:"<<number<<endl;
    }

    else
    {
        cout<<"entered integer is negative:"<<number<<endl;
    }

    return 0;
}