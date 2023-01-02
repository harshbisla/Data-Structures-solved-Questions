 #include<iostream>
using namespace std;
//class node{
// * Definition for singly-linked list.
  struct ListNode 
    {
      int val;
      ListNode *next;
      ListNode() : val(0), next(NULL) {}
      ListNode(int x) : val(x), next(NULL) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
 
 
 ListNode* last_node(ListNode* head)
    {
        ListNode* temp=head;
        if(head==NULL)
        {
            return NULL;
        }
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        return temp;
    }
    ListNode* prev_node(ListNode* head)
    {
        ListNode* temp=head;
        if(head==NULL ||head->next==NULL)
        {
            return NULL;
        }
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        return temp;
    }
    void print(ListNode* head)
    {
        if(head==NULL)
        {
            return ;
        }
        while(head!=NULL)
        {
            cout<<head->val;
            head=head->next;
        }
    }
    ListNode* rl(ListNode* head)
    {
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return head;
        }
        
        ListNode* last=last_node(head);
        ListNode* prev=prev_node(head);
        ListNode* temp=head;
        ListNode* t=head->next;
        temp->next=last;
        if(temp!=prev)
            prev->next=NULL;
        else
        {
        	return temp;
		}
        last->next=rl(t);
        return temp;
    }
    void reorderList(ListNode* head) 
	{
        ListNode* x=rl(head);
        print(x);
    }
    int main()
    {
    	ListNode *a=new ListNode(1);
    	ListNode *b=new ListNode(2);
    	ListNode *c=new ListNode(3);
    	ListNode *d=new ListNode(4);
//    	ListNode *e=new ListNode(5);
    	a->next=b;
    	b->next=c;
    	c->next=d;
//    	d->next=e;
    	reorderList(a);
    	
	}
