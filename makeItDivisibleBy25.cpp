#include <iostream>
#include <vector>
#include <limits.h>
#include <string>
using namespace std;
typedef long long ll;

int ops (string digits, string num){
    int x = digits[0];
    int y = digits[1];
    int steps = 0;
    int j = num.size()-1;
    while(j>0 && num[j]!=y){
        j--;
        steps++;
        
    }
    int i = j-1;
    while(i>0 && num[i]!=x){
        i--;
        steps++;
    }
    return steps;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string num = to_string(n);
        vector<string>v = {"00","25","50","75"};
        int ans = INT_MAX;
        for(auto digits : v){
            int mini = ops(digits,num);
            ans = min(ans,mini);
        }
        cout<<(ans)<<endl;
    }
    return 0;
}