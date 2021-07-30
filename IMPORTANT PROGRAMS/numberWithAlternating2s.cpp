
int main() {
	//code
	int n,t,flag,j,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(i=1;i<=(1<<n)-1;i++)
	    {
	        flag=0;
	        for(j=0;j<=n-1;j++)
	        {
	            if(i&(1<<j)&&flag==0)
	            flag=1;
	            else if(i&(1<<j)&&flag==1)
	            {
	                flag++;
	                j=n;
	            }
	            else
	            flag=0;
	        }
	        if(flag==1||flag==0)
	        cout<<i<<" ";
	        
	    }
	    cout<<endl;
	}
	return 0;
}