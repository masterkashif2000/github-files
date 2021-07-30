
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	 int n,i,f,j,add,sum=0;
	 cin>>n;
	 int a[n];
	 for(i=0;i<n;i++)
	 cin>>a[i];
	 for(i=0;i<n;i++)
	 {
	  for(j=i+1;j<n;j++)
	  {
	   f=a[j]-a[i];
	   if(f>1 || f<-1)
	   add=f;
	   else
	   add=0;
	  sum=sum+add;
	  }
	 }
	 cout<<sum<<endl;
	}
	return 0;
}