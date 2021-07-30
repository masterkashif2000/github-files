#include<iostream>
using namespace std;

void reversed(int a[N][N],int N){
    for(int i=0;i<N;i++){
        for(int j=0,k=N-1;j<k;j++,k--){
            swap(a[i][j],a[i][k]);
        }
    }
}
void transpose(int a[N][N],int N]){
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            swap(a[i][j],a[j][i]);
        }
    }
}
void rotated(int a[N][N],int N){
    transpose(a,N);
    reversed(a,N);
}
void print(int a[N][N],int N){
 for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
 }
}
int main(){
    int N;
    cin>>N;
    int a[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the printed matrix is "<<endl;
    rotated(a,N);
    print(a,N);
}
