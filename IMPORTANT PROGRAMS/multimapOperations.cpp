// { Driver Code Starts
//Initial Template for C++
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends


//User function Template for C++



multimap<int,int> multimapInsert(int arr[],int n)
{
    multimap<int,int>mp;
    for(int i=0;i<n;i++){
        mp.insert(pair<int,int>(arr[i],i));
    }
    
    return mp;
    
}


void multimapDisplay(multimap<int,int>mp)
{
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}


void multimapErase(multimap<int,int>&mp,int x)
{
   //If and else condition to erase x from the multimap
   
    int num=0;
    num=mp.erase(x);
    
    if(num!=0){
        cout<<"erased "<<x;
    }
    else{
       cout<<"not found";
    }
    
    cout<<endl;
}

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n]; 
        for(int i=0;i<n;i++)
        cin>>arr[i]; //Taking input array
        
        multimap<int,int>mp=multimapInsert(arr,n); //multimap insert function that returns a function
        multimapDisplay(mp); //print the keys and values of the multimap
        int x;
        cin>>x; //element to be erased
        
        multimapErase(mp,x); //the erase function
        multimapDisplay(mp);
        
        
    }
	return 0;
}  // } Driver Code Ends