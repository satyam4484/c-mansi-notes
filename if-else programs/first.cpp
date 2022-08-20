/*
Write a C++ program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.
*/

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter your integer: ";
    cin>>a>>b;
    if(a==b){
        cout<<"two numbers are same"<<endl;
        cout<<"result:"<<(a+b)*3<<endl;
    }else {
        cout<<"a+b="<<(a+b)<<endl;
    }

    return 0;


}