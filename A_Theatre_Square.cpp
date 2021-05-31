#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

void print(ll n,ll m ,ll a){
    ll x = (n/a) +1;
    ll y = (m/a) +1;
    cout<<x*y<<endl;
}

int main(){
    ll n,m,a;
    cin>>n>>m>>a;
    print(n,m,a);
    
    return 0;
}