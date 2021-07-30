#include<iostream>
using namespace std;
int main(){
int N,M;
cin>>N;
int a[1000];
for(int i=0;i<N;i++){
cin>>a[i];
}
cin>>M;
int b[1000];
for(int i=0;i<M;i++){
cin>>a[i];
}
int S=max(sizeof(a),sizeof(b));
int A[S];

    if(sizeof(a)==sizeof(b)){
        for(int i=0;i<S;i++){
            if((a[i]+b[i])<9){
                A[i]=a[i]+b[i];
            }
            else{
                A[i]=(a[i]+b[i])%10;
            }
        }
    }
    else if(sizeof(a)<sizeof(b)){
        A[0]=b[0];
        for(int i=1;i<S;i++){
                if((a[i]+b[i])<9){
                    A[i]=a[i]+b[i];
            }
            else{
                A[i]=(a[i]+b[i])%10;
            }

        }
    }
    else if(sizeof(a)>sizeof(b)){
        A[0]=a[0];
        for(int i=1;i<S;i++){
                if((a[i]+b[i])<9){
                    A[i]=a[i]+b[i];
            }
            else{
                A[i]=(a[i]+b[i])%10;
            }

        }
    }


for(int i=0;i<S;i++){
    cout<<A[i]<<" ";
}
}
