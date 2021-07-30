
using namespace std;

int maxDiff(int arr[], int size) { 
    int max_diff, min_ele, i;
    max_diff = arr[1] - arr[0];
    min_ele = arr[0];
    for(i = 1; i < size; i++){
        if(arr[i] - min_ele > max_diff){
            max_diff = arr[i] - min_ele;
        }
        if(min_ele > arr[i]){
            min_ele = arr[i];
        }
    }
    return max_diff;
}  

int main(){
    int test;
    cin >> test;
    while(test--){
        int size;
        cin >> size;
        int arr[size], i;
        for(i = 0; i < size; i++)   cin >> arr[i];
        cout << maxDiff(arr, size);
        cout << endl;
    }
}