#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[4]; 
    for(int i = 0; i<4; i++)
    {
        cin>>ar[i]; 
    }
    sort(ar, ar+4);
    int a = ar[3] - ar[2]; 
    int b = ar[3] - ar[1]; 
    int c = ar[3] - ar[0]; 
    cout<<a<<" "<<b<<" "<<c<<endl; 
    return 0; 
}