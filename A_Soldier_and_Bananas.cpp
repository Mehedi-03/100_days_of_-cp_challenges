#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k , n, w; 
    cin>>k>>n>>w; 
    int count_b = 0; 
    for(int i = 1; i<=w; i++)
    {
        count_b += i; 
    }
    int price_b = k * count_b; 
    if(price_b <= n)
    {
        cout<<"0"<<endl; 
    }
    else
    {
        cout<<price_b - n<<endl; 
    }
    
    return 0; 
}