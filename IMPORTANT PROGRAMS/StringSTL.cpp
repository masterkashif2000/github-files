#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
typedef long long int ll;
int main()
{
    string s1="HELLO WORLD ";
    string s2(s1);
    cout<<s2<<endl;
    string s3=s2;
    cout<<s3<<endl;

    //now if we take a char Array and copy or make it as a copy in a String
    char a[]={'a','b','c','d','e','\0'};
    string s4(a);
    cout<<s4<<endl;
    //check if string is empty or not

    if(s4.empty()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    s1.append("I LOVE C++");
    cout<<s1<<endl;
    s1+=" AND PYTHON ALSO";
    cout<<s1<<endl;
    cout<<s1.length()<<endl;
    //clear
    s1.clear();
    cout<<s1<<endl;
    //compare
    string s10="APPLE";
    string s11="MANGO";
    cout<<s10.compare(s11)<<endl;
    if(s10>s11){
        cout<<"Mango is lexiographiclly greater than Apple"<<endl;
    }
    //find subarrays
    string s="I WANT TO HAVE APPLE JUICE";
    cout<<s<<endl;
    ll idx=s.find("APPLE");
    cout<<idx<<endl;
    //remove a word from string
    string word="APPLE";
    ll len=word.length();
    s.erase(idx,len);
    cout<<s<<endl;



}
