#include<bits/stdc++.h>
using namespace std;

long int fibonnaci(int n)
{
    if(n==1 || n==2)
    return 1;
    return (fibonnaci(n-1)+fibonnaci(n-2));
}

int main()
{
    int n;
    cout<<"Enter the nth term you want to see if the fibonacci series :-"<<endl;
    cin>>n;
    long int output = fibonnaci(n);
    cout<<output<<endl;
    return 0;
}