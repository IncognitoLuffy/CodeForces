#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    int count5 = 0;
    int count0 = 0; 
    for (int i = 0; i<n;i++){
        int x;
        cin>>x;
        if (x==5) count5++;
        else count0++;
    }
    if (count0==0) cout<<-1<<endl;
    else if (count5 <=8) cout<<0<<endl;
    else{
        int x = count5%9;
        count5 = count5-x;
        for (int i = 0; i<count5;i++){
            cout<<5;
        }
        for (int i=0;i<count0;i++){
            cout<<0;
        }
    }
    return 0;
    
}