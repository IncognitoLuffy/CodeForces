#include<bits/stdc++.h>

using namespace std;


int main(){
    int x,y;
    cin>>x>>y;
    if (x>0 && y>0) cout<<0<<" "<<(x+y)<<" "<<(x+y)<<" "<<0<<endl;
    if (x>0 && y<0) cout<<0<<" "<<-(x-y)<<" "<<(x-y)<<" "<<0<<endl;
    if (x<0 && y>0) cout<<-(-x+y)<<" "<<0<<" "<<0<<" "<<(-x+y)<<endl;
    if (x<0 && y<0) cout<<-(-x-y)<<" "<<0<<" "<<0<<" "<<-(-x-y)<<endl;
}