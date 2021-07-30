#include <iostream>
using namespace std;
bool isSafe(int Board[][10],int i,int j,int n){
    for(int row=0;row<i;row++){
        if(Board[row][j]==1){
            return false;
        }
    }
    //you can check for Left Diagonal
    int x=i;
    int y=j;
    while(x>=0 && y>=0){
         if(Board[x][y]==1){
            return false;
        }
        x--;
        j--;
    }
    //you can check for Left Diagonal
        x=i;
        y=j;
    while(x>=0 && y<n){
         if(Board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }
    //the position is now safe for col and diagonal
    return true;
}
bool solveNQueen(int Board[][10],int i,int n){
    //base case
    if(i==n){
        //You have successfully put queens in the Row(0,,,n-1)
        //Print the Board
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(Board[i][j]==1){
                    cout<<"Q ";
                }
                else{
                    cout<<"_ ";
                }
            }
            cout<<endl;
        }
        return true;
    }
    //Recursive Case
    //So in this we have to place the queen in the current row and call on the remaining part which will be solved by recursion
    for(int j=0;j<n;j++){
        //I have to check if i,j position is safe to place the queen or not
        if(isSafe(Board,i,j,n)){
            //place the queen assuming i,j is the right position
            Board[i][j]=1;
            bool nextQueenRakhPaye=solveNQueen(Board,i+1,n);
            if(nextQueenRakhPaye){
                return true;
            }
            //means i,j is not the right position**Assumption is wrong
            Board[i][j]=0;//backtracking
        }
    }
    //you have tried for all positions in th current row but coudn't place a queen
    return false;

}
int main() {
   int n;
   cin>>n;
   int Board[10][10]={0};
   solveNQueen(Board,0,n);

}

