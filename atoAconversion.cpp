#include<iostream>
using namespace std;
char convert(char name)
{
    char ans=name-'a'+'A';
    return ans;
}
int main()  
{
    char alphabet;
    cout<<"Enter the alphabet you want to convert: ";
    cin>>alphabet;
    cout<<convert(alphabet);
}