#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
typedef long long int ll;

int main()
{
 char str[]="geeksforgeeks";
 memset(str,'t',sizeof(str));
 cout<<str<<endl;
 char s[]="ALGORITHM";
 memset(s,'$',sizeof(s));
 cout<<s<<endl;

 ///STRCHR
 char a[]="My name is KASHIF ANWAR";
 char *ch=strchr(a,'K');
 cout<<ch-a<<endl;
 char che='A';
 if(strchr(a,che)!=NULL){
    cout<<che<<" is present in the string"<<'/n';
 }

///USING STL FUNCTION
 string d="My name is KASHIF ANWAR";
 ll r=d.find("K");
 cout<<r<<endl;


}
