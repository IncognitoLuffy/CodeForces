#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    char x = s[0];
    string ans = "";
    ans += x;
    for (int i = 1;i<n;i++){
        if (s[i]!=x){
            x = s[i];
            ans+=s[i];
        }
    }
    
    int m = n - ans.size();
    cout<<m<<endl;
}