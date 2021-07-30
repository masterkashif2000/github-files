#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll int n;
    cin>>n;
    while(n--){
        ll int x;
        cin>>x;
        vector <ll int> v;
        v.push_back(100);v.push_back(50);v.push_back(10);v.push_back(5);v.push_back(2);v.push_back(1);
        ll int s = 0;
        ll int i = 0;
        while (x>0){
            s+=(x/v[i]);
            x = x%v[i];
            i++;
        }
        cout<<s<<endl;
    }
    return 0;
}
