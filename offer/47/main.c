#include<iostream>
using namespace std;
int main()
{
    float a=1.0;
    cout<<a<<endl;
    cout<<(int)a<<endl;
    cout<<&a<<endl;
    cout<<(int &)a<<endl;
    cout<<(int *)&a<<endl;
    cout<<((int)a==(int &)a)<<endl;
    return 0;
}