#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

void print(vector<int> a,int n){
    cout<<3*n<<endl;
    for (int i = 0;i<n/2;i++){
        cout<<1<<" "<<i+1<<" "<<n-i<<endl;
        cout<<2<<" "<<i+1<<" "<<n-i<<endl;
        cout<<1<<" "<<i+1<<" "<<n-i<<endl;
        cout<<1<<" "<<i+1<<" "<<n-i<<endl;
        cout<<2<<" "<<i+1<<" "<<n-i<<endl;
        cout<<1<<" "<<i+1<<" "<<n-i<<endl;
    }
}

int main(){
    int tc;
    cin>>tc;
    while (tc){
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i = 0;i<n;i++){
            cin>>a[i];
        }
        print(a,n);
        tc--;
    }
    
    return 0;
}