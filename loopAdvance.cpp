//Calculate power of a number
#include<iostream>
using namespace std;
int main()
{
    int n,i,p,num;
    cout<<"Enter the number of which you want to get the power: ";
    cin>>n;
    cout<<"Enter the power to be raised: ";
    cin>>p;

    num=n;
    for(i=1;i<p;i++)
    {
        num=num*n;
    }
    cout<<num;

}