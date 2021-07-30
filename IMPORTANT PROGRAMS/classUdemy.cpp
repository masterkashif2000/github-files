#include<iostream>
using namespace std;
class Rectange{
    public:
      int length=2;
      int breadth=2;
      int area(){
          return length*breadth;
      }
      int perimeter(){
          return 2*(length+breadth);
      }
};
int main(){
    Rectange r1;
    r1.length=20;
    r1.breadth=10;
    cout<<"Area of the Retangle is"<<endl;
    cout<<r1.area()<<endl;
     cout<<"Perimeter of the Retangle is"<<endl;
    cout<<r1.perimeter()<<endl;
}