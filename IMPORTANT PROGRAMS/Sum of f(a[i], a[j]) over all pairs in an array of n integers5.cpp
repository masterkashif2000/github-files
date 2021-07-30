#include<vector>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--){
    string s;
    int n,k;
    vector <int> v;
    cin>>n;
    while(n--){
        cin>>k;
        v.push_back(k);
    }
    int count=0;
    for(int i=0;i<v.size();i++)
    for(int j=i+1;j<v.size();j++){
        if(abs(v[j]-v[i])>1)
        count = count + v[j]-v[i];
    }
    cout<<count<<endl;
    
    }
	return 0;
}