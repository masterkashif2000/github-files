/*PAIR IS A CONTAINER WHICH HELPS TO BIND TWO VALUES AS A SINGLE ENTITY*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
    pair<int,char> p1;
    p1.first=10;
    p1.second='B';
    cout<<p1.first<<" ";
    cout<<p1.second<<endl;
    pair<int,int> p2;
    p2.first=100;
    p2.second=200;
    cout<<p2.first<<" ";
    cout<<p2.second<<endl;
    pair<char,char> p3;
    p3.first='A';
    p3.second='B';
    cout<<p3.first<<" ";
    cout<<p3.second<<endl;
    pair<float,float> p4;
    p4.first=3.14;
    p4.second=6.78;
    cout<<p4.first<<" ";
    cout<<p4.second<<endl;
    pair<string,string> p5;
    p5.first="kashif";
    p5.second="anwar";
    cout<<p5.first<<" ";
    cout<<p5.second<<endl;

    //SO HERE WE HAVE TAKEN DOUBLE,FLOAT,INT CHAR,STRING//

    //ANOTHER WAY OF DOING THIS//
    pair<int,char> p6(p1);
    cout<<p6.first<<" ";
    cout<<p6.second<<endl;
    //so new way of inserting values in pair//
    pair<int,int> p7=(make_pair(400,800));
    cout<<p7.first<<" ";
    cout<<p7.second<<endl;

    pair<int,string> p8=make_pair(110,"AUDI");
    cout<<p8.first<<" ";
    cout<<p8.second<<endl;

    //lets see this way of taking values//
    int a,b;
    cin>>a>>b;
    pair<int,int> p9=make_pair(a,b);
    cout<<p9.first<<" ";
    cout<<p9.second<<endl;

    //Array of Pairs
    //VECTOR OF PAIRS

    pair<pair<int,int>,string> CAR;
    CAR.first.first=1;
    CAR.first.second=100000000;
    CAR.second="AUDI";
    cout<<CAR.second<<" "<<CAR.first.first<<" "<<CAR.first.second<<" ";

}
