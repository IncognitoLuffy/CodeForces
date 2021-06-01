#include <bits/stdc++.h>
#define ll long long int 
using namespace std;


int main(){
    int m;
    cin>>m;
    vector<int> nums(m);
    for (int i = 0;i<m;i++){
        cin>>nums[i];
    }
    int max_index = 0;
    for (int i =1;i<m;i++){
        if (nums[i]>nums[max_index]){
            max_index = i;
        }
    }
    int min_index = m-1;
    for (int i = m-2;i>=0;i--){
        if (nums[i]<nums[min_index]){
            min_index = i;
        }
    }
    if (min_index==max_index) cout<<0<<endl;
    else{
        if (min_index>max_index){
            int ans = max_index-0;
            ans += m-1 - min_index;
            cout<<ans<<endl;
        }
        else{
            int ans = max_index-0;
            ans+= m-1 - min_index-1;
            cout<<ans<<endl;
        }
    }

    
    return 0;
}