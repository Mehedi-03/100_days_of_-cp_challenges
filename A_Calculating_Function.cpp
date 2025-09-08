#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n; 
    cin>>n; 
    if(n % 2 == 0)
    {
        cout<<n/2<<endl; 
    }
    else 
    {
        cout<<-(n+1)/2<<endl;
    }
    // long long sum = 0; 
    // for(int i = 1; i<=n; i++)
    // {
    //     if(i % 2 != 0)
    //     {
    //         sum += -i; 
    //     }
    //     if(i % 2 == 0)
    //     {
    //         sum += i; 
    //     }

    // }
    return 0; 
}