#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    while(t--)
    {
        long long n; 
        cin>>n; 
        int count = 1; 
        while(n / 4 != 0)
        {
            n = n / 4; 
            count = count * 2; 
        }
        cout<<count<<endl; 
    }

    return 0; 
}