#include<bits/stdc++.h>

using namespace std;

int print(string s1,string s2 , int n){
    for (int i = 0;i<n;i++){
        int a1 = s1[i];
        int a2 = s2[i];
        if (a1>=97) a1 = a1-32;
        if (a2>=97) a2 = a2 -32;
        if (a1<a2) return -1;
        else if (a1>a2) return 1;
    }
    return 0;
}

int main(){
    int n,k;
    cin>>n>>k;
    int ans = 0;
    for (int i = 0; i<n;i++){
        int f,t;
        cin>>f>>t;
        int x;
        if (t>k) x = f-(t-k);
        else x = f;
        if (i == 0) ans = x;
        else ans = max(ans,x);
    }
    cout<<ans<<endl;
}