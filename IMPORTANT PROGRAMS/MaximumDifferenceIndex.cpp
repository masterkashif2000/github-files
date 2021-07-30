#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n;
    cin >>t;
    while(t--){
        cin >>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]].push_back(i);
        }
        int mx=INT_MIN;
        for(auto ele:mp){
            auto indexes=ele.second;
            int y=indexes[indexes.size()-1];
            int x=indexes[0];
            if(y-x>mx){
                mx=y-x;
            }
        }
        cout<<mx<<"\n";
    }
    return 0;
}