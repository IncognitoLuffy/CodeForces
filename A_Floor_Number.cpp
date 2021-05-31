#include <bits/stdc++.h>

using namespace std;

void print(int x,int n){
    if (n<=2) cout<<1<<endl;
    else{
        int a = (n-3)/x;
        cout<<a+2<<endl;
    }
}

int main(){
    int a;
    cin>>a;
    while (a){
        int n,x;
        cin>>n>>x;
        print(x,n);
        a--;
    }
    
    return 0;
}