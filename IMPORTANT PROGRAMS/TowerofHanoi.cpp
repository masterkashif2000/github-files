#include <iostream>
using namespace std;
void TowerOfHanoi(int n,char src,char dest,char helper){
    if(n==0){
        return;
    }
    TowerOfHanoi(n-1,src,helper,dest);
    cout<<"Move "<<n<<"disc from "<<src<<"to "<<dest<<endl;
    TowerOfHanoi(n-1,src,dest,helper);
}
int main() {
   int n;
   cin>>n;
   TowerOfHanoi(n,'A','C','B');

}
