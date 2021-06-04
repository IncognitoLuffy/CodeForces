#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    int ans = 1;
    unordered_set<int> s;
    for (int i = 0; i<n;i++){
        int x;
        cin>>x;
        if (ans == x){
            ans++;
            while (s.find(ans)!=s.end()){
                ans++;
            }
        }
        s.insert(x);
    }
    cout<<ans;
    
    return 0;
    
}