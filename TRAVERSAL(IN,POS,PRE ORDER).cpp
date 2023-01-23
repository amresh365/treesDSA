#include<iostream>
using namespace std;
struct node* create();
void postorder(struct node* root);
void inorder(struct node* root);
void preorder(struct node*root);
int main()
{
	struct node*root;
	cout<<"enter the root ";
	root=create();

	postorder(root);
	
}


struct node
{
	int data ;
	struct node*left,*right;
	
};

void inorder(struct node* root)
{
	if(root==0)
	{
		return ;
	}
preorder(root->left);	
cout<<root->data;	
preorder(root->right);	
	
}
void preorder(struct node*root)
{
if(root==0)
{
	return ;
}

cout<<root->data;
preorder(root->left);
preorder(root->right);	
}
void postorder(struct node* root)
{
postor1der(root->left);
postorder(root->right);
	cout<<root->data;
}




//to create a tree in the node;
struct node* create()
{
	int x;
struct node* newnode;
newnode= (struct node*)malloc(sizeof(struct node))	;
cout<<"enter number";
cin>>x;
if(x==-1)
{
	return 0;
}

else
{
newnode->data=x;
cout<<"enter left chield of"<<" "<<x;
newnode->left=create();
cout<<"enter right chield of"<<""<<x;
newnode->right=create();
return newnode;
}

}











