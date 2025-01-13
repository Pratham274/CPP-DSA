#include<iostream>
using namespace std;
int main()
{
    int n,last=0,prev=1,current,i;
    cout<<"Enter the number upto the fabonacci you want :";
    cin>>n;

    if (n<=0)
    {
        cout<<"Enter a positive integer,"<<endl;
        return 0;
    }
    if(n>=1)cout<<"Fibonacci series:"<<last;
    if(n>=2)cout<<","<<prev;

    for(i=3;i<=n;i++)
    {
        current=prev+last;
        cout<<","<<current;
        last=prev;
        prev=current;
    }
    cout<<endl;
    return 0;
}