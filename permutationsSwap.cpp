#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int g = 0;
        for(int i=0; i<n; i++){
            g = gcd(g,abs((i+1)-a[i]));
        }
        cout<<g<<endl;
    }
    return 0;
}