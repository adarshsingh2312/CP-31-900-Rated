#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2!=0 || n<4){
            cout<<-1<<endl;
            continue;
        }
        ll mini = 0;
        ll maxi = 0;
        if(n%6==0){
            mini = n/6;
        }
        else if(n%6==2 || n%6==4){
            mini = n/6 + 1;
        }
        maxi = n/4;
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}