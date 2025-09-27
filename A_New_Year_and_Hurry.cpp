#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k ;
    cin>>n>>k; 
    int count = 0; 
    int x = 240;
    for(int i = 1; i<=n; i++)
    {
        if(x - i*5 >= k)
        {
            count++;
            x = x-i*5;
        }
    }
    cout<<count<<endl;
    return 0; 
}