#include <iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
		Node(int data){
			setdata(data);
			next=NULL;
		}
		void setdata(int data){
			this->data=data;
		}
		int getdata(){
			return data;
		}
};
int get_first_element(Node* head,int n){
       return (head->getdata());
}
int get_nth_element(Node* head,int n){
	Node* temp=head;
	for(int i;i<=n;i++)
	{
		temp=temp->next;
	}	
	return temp->getdata();
}
int get_last_element(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		temp=temp->next;
	}
	return temp->getdata();
}
int get_length(Node *head){
	int count=0;
	Node *temp=head;
	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
	return count;
}
void display(Node* head){
	Node*temp=head;
	while(temp!=NULL){
		cout<<temp->getdata()<<"-->";
		temp=temp->next;
	}
}
void insert_in_last(Node *head,int val){
	Node* n=new Node(val);
	if(head==NULL){
		head=n;
		return;
	}
	Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}
int main()
{
Node *head=NULL;
insert_in_last(head,21);
insert_in_last(head,25);
insert_in_last(head,23);

get_first_element(head,5);
get_last_element(head);
display(head);
return 0;
}
