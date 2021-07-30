#include <bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
    int a,b;
    cin>>a>>b;
    int 128_t ans=(int128_t)a*b;
    cout<<ans;
	}
}
