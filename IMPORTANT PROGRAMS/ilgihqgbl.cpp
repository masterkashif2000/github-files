#include<iostream>
using namespace std;
int main(){
	int M,N;
	cin>>M>>N;
	while((M>1&&M<10) && (N>1&&N<10)){
	int a[M][N];
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cin>>a[i][j];
		}
	}
	for(int j=0;j<N;j++){
	if(j&1){
        for(int i=M-1;i>=0;i--){
            cout<<a[i][j]<<", ";
        }

	}
	else
    {
        for(int i=0;i<M;i++){
           cout<<a[i][j]<<", ";
        }
    }
	}
	cout<<"END";
	}
}
