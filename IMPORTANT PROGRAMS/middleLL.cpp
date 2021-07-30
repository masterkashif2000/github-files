#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll n;
	cin>>n;
	cout<<10*n<<endl;
}

// // structure of node
// struct Node{
// 	ll data;
// 	struct Node *next;
// }*tail,*head;
// //prototypes
// node *create_new_node(int);
// void insert(node *);
// void displaY_LINKED_LIST(node *);
// node *find_MID(node*);

// //creation of Node

// node *create_new_node(int info){
// 	node *ptr=new Node;
// 	ptr->data=info;
// 	ptr->next=NULL;
// 	return ptr;
// }

// void insert(node *newptr){
// 	if(!head){
// 		head=tail=newptr;
// 		return;
// 	}
// 	//Else
// 	tail->next=newptr;
// 	tail=tail->next;
// }
// int main(){
// 	ll choice=1;
// 	head=tail=NULL;

// 	while(choice==1){
// 		cout<<"Enter node value\n";
//         cin>>info;
// 	}
// }