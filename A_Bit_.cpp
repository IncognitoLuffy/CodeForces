#include<bits/stdc++.h>

using namespace std;


int main(){
    string s;
    int n;
    cin>>n;
    int ans = 0;
    for (int i = 0;i<n;i++){
        cin>>s;
        for (int j = 0; j<3;j++){
            if (s[j]=='+'){
                ans++;
                break;
            }
            else if (s[j]=='-'){
                ans--;
                break;
            }
        }
    }
    cout<<ans<<endl;
}