#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b; 
    cin>>a>>b;
    int fashn_count = min(a, b);
    int same_colut = (max(a, b) - fashn_count) / 2;
    cout<<fashn_count<<" "<<same_colut<<endl;
    return 0; 
}