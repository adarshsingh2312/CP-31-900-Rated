#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count_1 = count(s.begin(),s.end(),'1');
        int count_0 = count(s.begin(),s.end(),'0');
        if(count_0==0 || count_1==0){
            cout<<"NET"<<endl;
            continue;
        }
        int pairs = min(count_0,count_1);
        if(pairs%2==0)  cout<<"NET"<<endl;
        else    cout<<"DA"<<endl;
    }
    return 0;
}