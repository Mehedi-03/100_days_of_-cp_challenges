#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x; 
    cin>>x; 
    int count = 0; 
    int a[5] = {1, 5, 10 , 20, 100};
    for(int i = 4; i>=0; i--)
    {
        if(x == 0)
        {
            break;
        }
        int n = x; 
        int y = n / a[i]; 
        count += y;
        x = x % a[i]; 
    }
    cout<<count<<endl;

    return 0; 
}


