#include<iostream>
using namespace std;
int main()
{
    int row,col,count=1;

    for(row=1;row<=5;row=row+1)
    {
        for(col=1;col<=5;col++)
        {
            cout<<count<<" ";
            count+=1;
        }
        cout<<endl;
    }
}