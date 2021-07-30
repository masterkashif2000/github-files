#include<iostream>
using namespace std;
class Rectangle{
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
    Rectangle *ptr=new Rectangle;
    ptr->length=20;
    ptr->breadth=10;
    cout<<"area of the Rectagle is"<<endl;
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter();
}