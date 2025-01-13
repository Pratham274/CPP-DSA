#include<iostream>
using namespace std;
int main()
{
    int i,j,k=5;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=k;j++)
        {
            cout<<j*j<<" ";
        }
        cout<<endl;
        k=k-1;
    }
}