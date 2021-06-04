#include<bits/stdc++.h>

using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    for (int i = 0; i<m;i++){
        string ans = "";
        int x = 0;
        while (x<n){
            if (s[x]=='B' && x+1<n && s[x+1]=='G'){
                ans += "GB";
                x = x+2;
            }
            else{
                ans += s[x];
                x++;
            }
        }
        s = ans;
    }
    cout<<s<<endl;
}