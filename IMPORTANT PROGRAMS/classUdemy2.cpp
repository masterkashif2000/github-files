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
    Rectange *ptr;
    ptr=&r1;
    ptr->length=20;
    ptr->breadth=10;
    cout<<"area of the Rectagle is"<<endl;
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter();
}