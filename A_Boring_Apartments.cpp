#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    while(t--)
    {
        int x; 
        cin>>x; 
        int k = 0; 
        int d = x % 10;
        if(x == 0)
        {
            
        }
        while(x > 0)
        {
            x /= 10; 
            k++; 
        }
        int result = (d - 1)*10 + k*(k+1)/2;
        cout<<result<<endl; 
    }
    return 0; 
}