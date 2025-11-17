#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t;
    while (t--)
    {
        long long n; 
        cin>>n; 
        int count = 0; 
        for(int i = 1; i<=9; i++)
        {
            int num = i; 
            while (num<=n)
            {
                count++; 
                num = num * 10 + 1; 
            }
            
        }
        cout<<count<<endl; 
    }
    
    return 0; 
}