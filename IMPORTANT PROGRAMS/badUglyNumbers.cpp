#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        if(n>0){
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            i=0;
            for(;s[i]!='\0';i++){
               if(s[i]!=0 && s%s[i]!=0){
                    count++;
               }
            }
            cout<<count;
        }
    }

}
}
