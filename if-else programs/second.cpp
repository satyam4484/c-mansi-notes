/* Write a C++ program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter your integer:"<<endl;
    cin>>n;
    if(n>51){
        cout<<"n is greater than 51"<<endl;
        cout<<"result:"<<(n-51)*3<<endl;
    }
    else{
        cout<<"51-n="<<51-n<<endl;
    }
    return 0;
}