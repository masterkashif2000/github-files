#include<iostream>
using namespace std;
#include<cstring>
using namespace std;
int main()
{

    string s[5]={"apple","banana","mango","orange","papaya"};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
    cout<<"enter the fruit to search"<<endl;
    string s2;
    cin>>s2;
    for(int i=0;i<n;i++){
        if(s[i]==s2){
            cout<<"element found at"<<i<<endl;
        }
    }
    string s3="Another Way!";
    for(int j=0;j<s3.length;j++){
        cout<<s3[j]<<"-";
    }
}
