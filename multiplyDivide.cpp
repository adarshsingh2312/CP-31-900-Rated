#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int t; 
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int count_2 = 0;
        int count_3 = 0;
        while(n%2==0){
            n/=2;
            count_2++;
        }
        while(n%3==0){
            n/=3;
            count_3++;
        }
        if(n!=1){
            cout<<-1<<endl;
            continue;
        }
        if(count_2<=count_3){
            cout<<(count_3+(count_3-count_2))<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}