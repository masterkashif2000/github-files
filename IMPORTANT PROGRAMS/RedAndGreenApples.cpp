#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int X, Y, A, B, C;
  cin >> X >> Y >> A >> B >> C;
  
  vector<int> va(A);
  vector<int> vb(B);
  vector<int> vc(C);
  
  for(int i = 0; i < A; i++){
    cin >> va[i];
  }
  for(int i = 0; i < B; i++){
    cin >> vb[i];
  }
  for(int i = 0; i < C; i++){
    cin >> vc[i];
  }
  
  sort(va.begin(), va.end());
  sort(vb.begin(), vb.end());
  sort(vc.begin(), vc.end());
  
  vector<int> v(X + Y + C);
  for(int i = 0; i < X; i++){
    v[i] = va[A - X + i];
  }
  for(int i = X; i < (X + Y); i++){
    v[i] = vb[B - X - Y + i];
  }
  for(int i = X + Y; i < (X + Y + C); i++){
    v[i] = vc[i - X - Y];
  }
  
  sort(v.begin(), v.end());
  long long sum = 0;
  for(int i = C; i < X + Y + C; i++){
    sum += v[i];
  }
  cout << sum << endl;
}
      
#include <bits/stdc++.h>