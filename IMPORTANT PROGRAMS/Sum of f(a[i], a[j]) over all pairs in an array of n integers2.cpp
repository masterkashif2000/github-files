using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,k,j;
	    int sum=0;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    for(i=0;i<n;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(abs(arr[i]-arr[j])>1)
	            sum=sum+arr[j]-arr[i];
	            else
	            sum=sum+0;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}