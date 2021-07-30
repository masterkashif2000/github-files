#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comparator(string s1,string s2){
int i=0;
string one=s1+s2;
string two=s2+s1;
if(one[i]>two[i]){
    return true;
}
else if(one[i]<two[i]){
    return false;
}
++i;
}
int main(){
int t;
cin>>t;
while(t--){
    int len;
    int i;
    cin>>len;
    vector<string> s;
    string temp;
    for(i=0;i<len;i++){
        cin>>temp;
        s.push_back(temp);
    }

    sort(s.begin(),s.end(),comparator);

for(int i=0;i<len;i++){
    cout<<s[i];
}
cout<<endl;
}
}
