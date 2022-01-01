#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(){
			data=0;
			next=NULL;
		}
};
class linklist{
	public:
		node *head;
		linklist(){
			head=NULL;
		}
	void insertFirst(int val){
		node *newnode=new node();
		newnode->data=val;
		if(head==NULL){
			head=newnode;
			cout<<"Insert scuccessfull"<<endl;
		}else{
			newnode->next=head;
			head=newnode;
		}
		
	}	
	void insertLast(int val){
		node *newnode=new node();
		newnode->data=val;
		if(head==NULL){
			head=newnode;
			cout<<"Insert "<<endl;
		}else{
			node *temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newnode;
			cout<<"Insert"<<endl;
			
		}
	}
	
	void insertAtspecfic(int old,int val){
		node *newnode=new node();
		newnode->data=val;
		if(head==NULL){
			head=newnode;
			cout<<"Data inserted"<<endl;
		}else{
			node *temp=head;
			node *spec=NULL;
			while(temp->next!=NULL){
				if(temp->next->data==old){
						spec=temp->next;
						temp->next=spec->next;
						break;
				}
			}
			
		}
	}
	void search(int num){
		if(head!=NULL){
			node *temp=head;
			while(temp!=NULL){
				if(temp->data==num){
					cout<<"Number is Found"<<endl;
					return;
				}
				temp=temp->next;
			}
			cout<<"Number is Not Found"<<endl;
		}else{
			cout<<"List is empty"<<endl;
		}
	}
	void update(int old,int newnum){
		if(head!=NULL){
			node *temp=head;
			while(temp!=NULL){
				if(temp->data==old){
					temp->data=newnum;
					cout<<"Number is Update"<<endl;
					return;
				}
				temp=temp->next;
			}
			cout<<"Old Number is not found"<<endl;
		}else{
			cout<<"List is empty"<<endl;
		}
	}
	
	void display(){
		int count=0;
		if(head!=NULL){
			node * temp=head;
			while(temp!=NULL){
				//cout<<temp->data<<" ";
				count++;
				temp=temp->next;	
		}
		cout<<"Total Number of Nodes is"<<count<<endl;
		}else{
			cout<<"List is empty"<<endl;
		}
	}
	void printprime(){
		
		if(head!=NULL){
			node *temp=head;
			int a=0;
			int index=0;
			int c=0;
			while(temp!=NULL){
				a=temp->data;
				index++;
				for(int i=2;i<=a;i++){
					if(a%i==0){
						//cout<<"This number is Prime"<<a <<" and it sotore on node: "<<index<<endl;
						//break;
						c++;	
					}
				}
				if(c==1){
				cout<<"This number is Prime"<<a <<" and it sotore on node: "<<index<<endl;
	
				}
				a=0;
				c=0;
				temp=temp->next;
			}
		}else{
			cout<<"List is empty"<<endl;
		}
	}
	
	void dlt(int num){
		node *pre=NULL;
		if(head!=NULL){
			if(head->data==num){
				pre=head;
				head=head->next;
			}else{
				node *temp=head;
				while(temp->next!=NULL){
					if(temp->next->data==num){
						pre=temp->next;
						temp->next=pre->next;
						break;
					}
					temp=temp->next;
				}
			}
			delete pre;
			cout<<"delete successfully"<<endl;	
			
		}else{
			cout<<"List is empty"<<endl;
		}
	}	
};
int main(){
 linklist obj;
 obj.insertFirst(23);
 obj.insertFirst(33);
 obj.insertFirst(7);
 obj.insertLast(57);
 obj.insertLast(97);
 obj.insertLast(50);
 //obj.search(99);
 //obj.display();
 //obj.update(33,89);
 //obj.update(23,100);
 //obj.display();
 //obj.dlt(57);
 //obj.display();
 obj.printprime();
}
