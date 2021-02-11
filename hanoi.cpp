#include<bits/stdc++.h>
using namespace std;

void tOH(int n,char from_rod,char to_rod, char help_rod)
{
    if(n==1)
    {
        cout<<"Move Disk 1 from "<<from_rod<<" to rod "<<to_rod<<endl;
        return;
    }
    tOH(n-1,from_rod,help_rod,to_rod);
    cout<<"Move Disk "<<n<<" from rod "<<from_rod<<" to rod "<<to_rod<<endl;
    tOH(n-1,help_rod,to_rod,from_rod);
}
 int main()
 {
     int n;
     cout<<"Enter number of discs you want :-"<<endl;
     cin>>n;
     tOH(n,'A','C','B');

 }