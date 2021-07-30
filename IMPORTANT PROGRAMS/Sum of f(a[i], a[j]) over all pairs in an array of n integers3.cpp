#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int f=0;
        int i, k= 1;
        int j;
        while(k<n){
            i = 0;
            j=i+k;
            while(j<n){
                if(abs(a[j]-a[i])>1){
                    f += a[j] - a[i];
                }
                j++;
                i++;
            }
        k++;
        }
        cout<<f<<endl;
    }
}
