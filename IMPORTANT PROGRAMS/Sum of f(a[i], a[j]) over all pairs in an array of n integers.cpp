#include<iostream>
#include<vector>
using namespace std;

vector<int> pairs(vector<int> a){
    vector<int> ans;
    for(int i=0;i<a.size()-1;i++){
        for(int j=i+1;j<a.size();j++){
            if(abs(a[j]-a[i])>1){
                ans.push_back(a[j]-a[i]);
            }
        }
    }
    return ans;
}

int main(){
    int test;
    cin >> test;
    
    while(test--){
        int size;
        cin >> size;
        
        vector<int> vect;
        int i, val;
        for(i = 0; i < size; i++){
            cin >> val;
            vect.push_back(val);
        }
        
    vector<int> answer=pairs(vect);
    int sum=0;
    for(i=0;i<answer.size();i++){
        sum+=answer[i];
    }
    cout<<sum<<endl;
    }
}