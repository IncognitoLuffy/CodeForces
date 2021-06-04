#include<bits/stdc++.h>

using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    vector<int> nums(n,0);
    int a = 1;
    for (int i = 0; i<n;i++){
        nums[i] = a;
        a++;
    }
    int sum = n*(n+1);
    sum = sum/2;
    m = m%sum;
    bool found  = false;
    for (int i = 0; i<n && m>0;i++){
        if (m<nums[i]){
            found = true;
            break;
        }
        else{
            m = m- nums[i];
        }
    }
    if (found) cout<<m<<endl;
    else cout<<0<<endl;
}