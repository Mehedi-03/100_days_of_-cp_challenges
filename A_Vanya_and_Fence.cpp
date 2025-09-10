#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , h; 
    cin>>n>>h; 
    int a[n]; 
    int mini_sum = 0; 
    for(int i = 0 ; i<n; i++)
    {
        cin>>a[i]; 
    }
    for(int i = 0 ; i<n; i++)
    {
        if(a[i] <= h)
        {
            mini_sum += 1; 
        }
        else
        {
            mini_sum += 2; 
        }
    }
    cout<<mini_sum<<endl; 

    return 0; 
}