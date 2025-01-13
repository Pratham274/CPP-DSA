#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"Enter the number of time of occurence :";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            //Print space
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            //Print *
            cout<<"*";
        }
        cout<<endl;
    }
}