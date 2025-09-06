#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    double result = 0; 
    for(int i = 0; i< t; i++)
    {
        int n ; 
        cin>>n;
        result += n; 
         
    }
    cout<<fixed<<setprecision(12)<<result/t<<endl; 
    return 0; 
}