#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>>n; 
    int a[n]; 
    for(int i = 0; i<n; i++)
    {
        cin>>a[i]; 
    }
    int mx = a[0];
    for(int i = 0; i<n ; i++)
    {
        if(mx<a[i])
        {
            mx = a[i]; 
        }
    }
    int count = 0; 
    for(int i = 0; i<n; i++)
    {
        if(a[i] < mx)
        {
            count += mx-a[i]; 

        }
    }
    cout<<count<<endl;
    return 0; 
}