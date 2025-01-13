#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int c= a;
    a= b;
    b= c;
}
void swap(float &c,float &d)
{
    float r=c;
    c=d;
    d=r;
}

int main()
{
    int a,b;
    cout<<"Enter number a as well as b: "<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    cout<<"Thank you for choosing Pass By Value/Reference Method :";
    float f1=4.8,f2=3.6;
    swap(f1,f2);
    cout<<f1<<" "<<f2<<endl;
}

