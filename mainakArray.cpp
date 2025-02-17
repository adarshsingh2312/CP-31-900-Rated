#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; 
        vector<int>a(n+1);
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        int maximum = a[n]-a[1];
        // fixing a[n]
        for(int i=1; i<=n-1; i++){
            maximum = max(maximum,(a[n]-a[i]));
        }
        //fixing a[1]
        for(int i=2; i<=n; i++){
            maximum = max(maximum,(a[i]-a[1]));
        }
        //taking entire subarray
        for(int i=1; i<=n-1; i++){
            maximum = max(maximum,(a[i]-a[i+1]));
        }
        cout<<maximum<<endl;
    }
    return 0;
}