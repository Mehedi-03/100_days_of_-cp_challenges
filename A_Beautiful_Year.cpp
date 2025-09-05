#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>>n; 
    for(int i = n+1; ; i++)
    {
        int x = i; 
        int x_1 = x % 10; 
        x /= 10; 
        int x_2 = x % 10; 
        x /= 10;
        int x_3 = x % 10; 
        x /= 10; 
        int x_4 = x % 10; 
        if(x_1 !=  x_2 && x_1 != x_3 && x_1 != x_4 && x_2 != x_3 && x_2 != x_4 && x_3 != x_4)
        {
            cout<<i<<endl; 
            break; 
        }
    }
    return 0; 
}