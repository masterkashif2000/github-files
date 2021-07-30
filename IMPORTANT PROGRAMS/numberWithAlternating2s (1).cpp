using namespace std;
bool consecutive(int n)
{
    while(n>0)
    {
    int last_bit=(n&(n>>1));
    if(last_bit==1)
    {
        return true;
    }
    n=n>>1;
    }
    return false;

}
int power(int a,int n)
{
    int ans=1;
    while(n>0)
    {
        int mask=(n&1);
        if(mask)
        {
        ans*=a;
        }
        a=a*a;
        n=n>>1;
    }
    return ans;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<power(2,n);i++)
        {
            if(consecutive(i)==false)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}
