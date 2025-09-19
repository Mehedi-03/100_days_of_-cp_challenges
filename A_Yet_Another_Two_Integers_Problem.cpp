#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    while(t--)
    {
        int a, b; 
        cin>>a>>b; 
        int eq = abs(a-b)+9;
        int result = eq/10;
        cout<<result<<endl; 

    }
    return 0; 
}