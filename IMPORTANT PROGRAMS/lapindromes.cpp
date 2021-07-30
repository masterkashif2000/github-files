#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s,s1,s2;
	int t,len;
	cin>>t;
	while(t--){
	    cin>>s;
	    len=s.length();
	    if(len%2==0){
	        s1=s.substr(0 , len/2);
	        s2=s.substr((len/2), len-1);
	    }
	    else{
	        s1=s.substr(0, len/2);
	        s2=s.substr( (len/2) +1 ,  len-1);
	    }
	   // cout<<s1<<" "<<s2;
	    sort(s1.begin(),s1.end());
	    sort(s2.begin(),s2.end());
	    if(s1==s2)
	      cout<<"YES"<<endl;
	    else
	      cout<<"NO"<<endl;

	}
	return 0;
}
