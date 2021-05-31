#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

void print(string s,int  n ,ll m){
    bool one = false;
    for (int i = 0;i<n;i++){
        if (s[i]=='1'){
            one = true;
            break;
        }
    }
    if (!one) cout<<s<<endl;
    else{
        if (m>n) m==n;
        vector<int> left(n,INT_MAX);
        int one_index = -1;
        if (s[0]=='1') one_index = 0;
        for (int i = 1; i<n;i++){
            if (one_index==-1){
                if (s[i]=='1') one_index = i;
                continue;
            }
            else{
                left[i] = i-one_index;
                if (s[i]=='1') one_index = i;
            }
        }
        vector<int> right(n,INT_MAX);
        one_index = -1;
        if (s[n-1]=='1') one_index = n-1;
        for (int i = n-2;i>=0;i--){
            if (one_index ==-1) {
                if (s[i]=='1') one_index = i;
                continue;
            }
            else{
                right[i] = one_index-i;
                if (s[i]=='1') one_index = i;
            }
        }
        vector<int> one_nearby(n,INT_MAX);
        for (int i = 0; i<n;i++){
            one_nearby[i] = min(left[i],right[i]);
            if (left[i]==right[i]) one_nearby[i] = -1;
        }
        string ans = "";
        

        for (int i = 0; i<n;i++){
            if (s[i]=='1'){
                ans += '1';
                continue;
            }
            else{
                if (one_nearby[i]==-1 || one_nearby[i]>m){
                    ans+='0';
                }
                else{
                    ans+='1';
                }
            }
        }
        cout<<ans<<endl;
    }
}

int main(){
    int tc;
    cin>>tc;
    while (tc){
        int n;
        ll m;
        cin>>n>>m;
        string s;
        cin>>s;
        print(s,n,m);
        tc--;
    }
    
    return 0;
}