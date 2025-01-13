#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"Enter the number of occurence: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            //Printing name;
            cout<<" ";
        }
        for(char name='A';name<='A'+row-1;name++)
        {
            cout<<name<<" ";
        }
        cout<<endl;

    }
}