#include<bits/stdc++.h>
using namespace std;

long long int factorial(int n)
{
    if(n>0)
    return(n*factorial(n-1));
    else 
    return 1;
}

int main()
{
    int n;
    cout<<"Enter the number of which you want factorial :-"<<endl;
    cin>>n;
    long long int pro=factorial(n);
    cout<<pro;
    return 0;
    
}
//endl