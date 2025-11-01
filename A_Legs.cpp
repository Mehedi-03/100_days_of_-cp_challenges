#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    while(t--)
    {
        int n; 
        cin>>n; 
        int count = 0; 
        int result = n /4; 
        count += result; 
        n = n % 4; 
        int r = n / 2; 
        count += r; 
        cout<<count<<endl; 
    }
    return 0; 
}