#include<iostream>>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n-1;i++){
    for(int j=n-1;j>=0;j--){
        if(j>=i){
            cout<<" ";
        }
        else{
            cout<<'#';
        }
    }
    cout<<endl;
}
return 0;
}
