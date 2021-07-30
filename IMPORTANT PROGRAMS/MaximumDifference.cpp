
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i<n;i++)
            cin >> A[i];
        int min = A[0];
        int max_dif = 0;
        for(int i = 1;i<n;i++)
        {
            if(A[i] > min)
                {
                    int max = A[i] - min;
                    if(max > max_dif)
                        max_dif = max;
                }
            else if(A[i] < min)
                min = A[i];
        }
        cout << max_dif << endl;
    }
	return 0;
}