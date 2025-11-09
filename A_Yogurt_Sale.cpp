#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    while(t--)
    {
        int n, a, b; 
        cin>>n>>a>>b; 
        if(n == 1)
        {
            cout<<a<<endl; 
        }
        else if(n % 2 == 0)
        {
            int mn = min((n * a), (b * n/2));
            cout<<mn<<endl; 
        }
        else 
        {
            int mn = min((a * n) , (n/2)*b+a);
            cout<<mn<<endl; 
        }
        
    }
    return 0; 
}