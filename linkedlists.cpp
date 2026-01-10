#include<iostream>
using namespace std;

//SINGLY LINKED LIST

// class node{
//     public:
//     int data;
//     node* next;
//     node(int d){
//         this->data=d;
//         this->next=NULL;
//     }

//     ~node(){
//         int value=this->data;
//        if(this->next!=NULL){
//         delete next;
//         this->next=NULL;
//        }
//        cout<<"Memory is free for node having data: "<<value<<endl;
//     }
// };
// void insertAthead(node* &head,int d){
//     node* temp=new node(d);
//     temp->next=head;
//     head=temp;
// }

// void insertAttail(node* &tail,int d){
//     node* temp=new node(d);
//     tail->next=temp;
//     tail=temp;
// }

// void insertAtposition(node* &head,node* &tail,int position,int d){
//     if(position==1){
//         insertAthead(head,d);
//         return;
//     }
//     node* temp =head;
//     int count=1;
//     while(count<position-1){
//         temp=temp->next;
//         count++;
//     }
//     if(temp->next==NULL){
//         insertAttail(tail,d);
//         return;
//     }
//     node* nodeinsert=new node(d);
//     nodeinsert->next=temp->next;
//     temp->next=nodeinsert;
// }

// void deleteNode(int position,node* &head,node* &tail){
//     //deleteing starting node
//     if(position==1){
//         node* temp=head;
//         head=head->next;
//         temp->next=NULL;
//         delete temp;
//         return;
//     }
// node* temp=head;
// node* previous=NULL;
// int cnt=1;
// while(cnt<position){
//     previous=temp;
//     temp=temp->next;
//     cnt++;
// }
// if(temp->next==NULL){
// tail=previous;
// }
// previous->next=temp->next;
// temp->next=NULL;
// delete temp;

// }
// void print(node* &head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     node* node1=new node(2);
//    node* head=node1;
//    node* tail=node1;
//    print(head);
   
//    insertAthead(head,5);
//    insertAthead(head,7);
//    print(head);
   
//    insertAttail(tail,8);
//    insertAttail(tail,11);
//    print(head);
   
//    insertAtposition(head,tail,4,1);
//    print(head);
   
//    insertAtposition(head,tail,1,12);
//    print(head);
   
//    insertAtposition(head,tail,8,22);
//    print(head);


//    //Deletion
//    deleteNode(8,head,tail);
//    print(head);
//    cout<<tail->data<<endl;
// }





// //DOUBLY LINKED LIST

// class node{
//     public:
//     int data;
//     node* prev;
//     node* next;

//     //constructor
//     node(int d){
//         this->data=d;
//         this->prev=NULL;
//         this->next=NULL;
//     }
//     ~node(){
//         int value=this->data;
//         if(next!=NULL){
//             delete next;
//             next=NULL;
//         }
//         cout<<"memory of node having data "<<value<<" is free"<<endl;
//     }
// };
// void insertAthead(node* &head,int d){
//     if(head==NULL){
//         node* temp=new node(d);
//         head=temp;
//     }
//     node* temp=new node(d);
//     temp->next=head;
//     head->prev=temp;
//     head=temp;
// }
// void print(node* &head){
// node* temp=head;
// while(temp!=NULL){
//     cout<<temp->data<<" ";
//     temp=temp->next;
// }
// cout<<endl;
// }
// void insertAttail(node* &tail,int d){
//     if(tail==NULL){
//         node* temp=new node(d);
//         tail=temp;
//     }
//     node* temp=new node(d);
//     tail->next=temp;
//     temp->prev=tail;
//     tail=temp;
// }
// void insertAtposition(node* &head,node* &tail,int position,int d){
//     if(position==1){
//         insertAthead(head,d);
//         return;
//     }
//     node* temp=head;
//     int count=1;
//     while(count<position-1){
//         temp=temp->next;
//         count++;
//     }
//     if(temp->next==NULL){
//         insertAttail(tail,d);
//         return;
//     }
//     node* nodeinsert=new node(d);
//     nodeinsert->next=temp->next;
//     temp->next->prev=nodeinsert;
//     temp->next=nodeinsert;
//     nodeinsert->prev=temp;
// }
// void deleteNode(int position,node* &head,node* &tail){
//     //deleteing starting node
//     if(position==1){
//         node* temp=head;
//        temp->next->prev=NULL;
//        head=temp->next;
//        temp->next=NULL;
//        delete temp;
//         return;
//     }
// node* temp=head;
// node* previous=NULL;
// int cnt=1;
// while(cnt<position){
//     previous=temp;
//     temp=temp->next;
//     cnt++;
// }
// if(temp->next==NULL){
// tail=previous;
// }
// temp->prev=NULL;
// previous->next=temp->next;
// temp->next=NULL;
// delete temp;

// }
// int getLen(node* &head){
//     int len=0;
// node* temp=head;
// while(temp!=NULL){
//     len++;
//     temp=temp->next;
// }
// return len;
// }
// int main(){
// node* node1=new node(10);

// node* head=node1;
// node* tail=node1;
// print(head);
// cout<<"Length of linked list: "<<getLen(head)<<endl;

// insertAthead(head,11);
// print(head);
// cout<<"Length of linked list: "<<getLen(head)<<endl;

// insertAttail(tail,13);
// print(head);
// cout<<"Length of linked list: "<<getLen(head)<<endl;

// insertAthead(head,5);
// print(head);
// cout<<"Length of linked list: "<<getLen(head)<<endl;

// insertAtposition(head,tail,2,17);
// print(head);
// cout<<"Length of linked list: "<<getLen(head)<<endl;

// insertAtposition(head,tail,1,28);
// print(head);
// cout<<"Length of linked list: "<<getLen(head)<<endl;

// insertAtposition(head,tail,7,98);
// print(head);
// cout<<"Length of linked list: "<<getLen(head)<<endl;

// //deletion
// deleteNode(1,head,tail);
// print(head);


// deleteNode(6,head,tail);
// print(head);
// }
 




// //CIRCULAR LINKED LIST
class node{
    public:
    int data;
    node* next;
node(int d){
    this->data=d;
    this->next=NULL;
}
~node(){
    int value=this->data;
    if(this->next != NULL){
        delete next;
        next=NULL;
    }
    cout<<"free the memory of node having data: "<<value<<endl;
}
};

void insertNode(node* &tail,int ele,int d){
    //assuming that the element is present in the list
    if(tail==NULL){
        node* newNode=new node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
//Non-empty list
node* curr=tail;

while(curr->data!=ele){
    curr=curr->next;
}
node* temp=new node(d);
temp->next=curr->next;
curr->next=temp;
    }
}

void print(node* &tail){
    if(tail==NULL){
        cout<<"List is empty"<<endl;
    }
    else{
    node* temp=tail;
  do{
    cout<<tail->data<<" ";
    tail=tail->next;
  }while(tail!=temp);
  cout<<endl;
}
}

void deleteNode(node* &tail,int ele){
if(tail==NULL){
    cout<<"list is empty"<<endl;
}
else{
    node* prev=tail;
    node* curr=prev->next;
    while(curr->data!=ele){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    if(curr==prev){
        tail=NULL;
    }
    if(tail==curr){
        tail=prev;
    }
    curr->next=NULL;
    delete curr;

}
}
// int main(){
// node* tail=NULL;
// insertNode(tail,5,3);
// print(tail);
// insertNode(tail,3,5);
// print(tail);
// insertNode(tail,5,7);
// print(tail);
// insertNode(tail,5,6);
// print(tail);

// deleteNode(tail,3);
// print(tail);

// deleteNode(tail,5);
// print(tail);

// deleteNode(tail,7);
// print(tail);

// deleteNode(tail,6);
// print(tail);
// }




//Q.reverse a LL

//  class ListNode{
//     public:
//     int data;
//     ListNode* next;
//     ListNode(int d){
//         this->data=d;
//         this->next=NULL;
//     }
//  };
// class Solution {
//     private:
//  void insertAthead(ListNode* &head,int d){
//     ListNode* temp=new ListNode(d);
//     temp->next=head;
//     head=temp;
//  }
// public:
//     ListNode* reverseList(ListNode* head) {
//           int d=0;
//           ListNode* temp=head;
//           ListNode* ans=0;
//           while(temp!=NULL){
//               d=temp->data;
//               insertAthead(ans,d);
//               temp=temp->next;
//           }
//            return ans; 


//ALTERNATE

// Node* reverseLinkedList(Node *head)
// {
//    Node* prev=NULL;
//    Node* curr=head;
//    Node* forward;
//    while(curr!=NULL){
//        forward=curr->next;
//        curr->next=prev;
//        prev=curr;
//        curr=forward;
//    }
//    return prev;
// }


// //using recursion
// class Solution {
// private:
//     void solve(ListNode* prev, ListNode* curr, ListNode* &newHead) {
//         if (curr == NULL) {
//             newHead = prev;
//             return;
//         }
//         ListNode* forward = curr->next;
//         curr->next = prev;
//         solve(curr, forward, newHead);
//     }

// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* newHead = NULL;
//         solve(NULL, head, newHead);
//         return newHead;
//     }
// };


// //Q middle of LL

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node()
//     {
//         this->data = 0;
//         next = NULL;
//     }
//     Node(int data)
//     {
//         this->data = data; 
//         this->next = NULL;
//     }
//     Node(int data, Node* next)
//     {
//         this->data = data;
//         this->next = next;
//     }
// };
// Node *findMiddle(Node *head) {
//     int N=0;
//     Node* temp=head;
//     while(temp!=NULL){
//         N++;
//         temp=temp->next;
//     }
//    int middle=1;
//    if(N%2==0){
// while(middle<N/2+1){
// head=head->next;
// middle++;
// }
//    }

//    else{
// while(middle<=N/2){
// head=head->next;
// middle++;
// }
//    }
//    return head;
// }




//Q.circularly lniked
// bool isCircular(Node* head){
//     if(head==NULL){
//         return true;
//     }
//    Node* slow=head;
//    Node* fast=head;
//    bool ans=false;
//    while(slow!=NULL && fast!=NULL){
//        slow=slow->next;
//        fast=fast->next;
//        if(fast!=NULL)
//        fast=fast->next;
//        if(slow==fast){
//            if(slow!=head){
//                break;
//            }
//            ans=true;
//            break;
//        }
//    }
//    return ans;
// }




//Q check and remove cycle in LL
//approach-1[only detection]

// bool hasCycle(ListNode *head) {
//     map<ListNode*,bool> visited;
//     ListNode* temp=head;
//     while(temp!=NULL){
//      if(visited[temp]==true){
//          return true;
//      }
//      visited[temp]=true;
//      temp=temp->next;
//     }
//      return false;
//  }

//approch-2 [floyd cycle detection]
// bool hasCycle(ListNode *head) {
//     if(head==NULL || head->next==NULL){return false;}
//   ListNode* slow=head;
//   ListNode* fast=head;
//   while(slow!=NULL && fast!=NULL){
//     slow=slow->next;
//     fast=fast->next;
//     if(fast!=NULL){
//         fast=fast->next;
//     }
//      if(slow==fast){return true;}
//   }
//   return false;}



//Q. remove duplicates from sorted list

// if(head==NULL){
//     return head;
// }
// node* temp=head;
// while(temp->next!=NULL){
//     if(temp->val!=temp->next->val){
//         temp=temp->next;
//     }
//     else{
//         node* target=temp->next;
//         temp->next=temp->next->next;
//         target->next=NULL;
//         delete target;
//     }
// }
// return head;



//Q. remove duplicates from Unsorted list
// Node *removeDuplicates(Node *head){
//     if(head==NULL || head->next==NULL){return head;}
// unordered_map <int,bool> present;
// Node* curr=head;
// Node* prev=NULL;
// while(curr!=NULL){
//     if(present[curr->data]==true){
//         prev->next=curr->next;
//         Node* temp=curr;
//         curr=curr->next;
//         temp->next=NULL;
//         delete temp;
//     }
//     else{
//     present[curr->data]=true;
//     prev=curr;
//     curr=curr->next;}
// }

// return head;
// }



// //Q. split a circular list

// Node* getTail(Node* head,int size){
//     int cnt=1;
//     Node* temp=head;
//     while(cnt<size){
//     temp=temp->next;
//     cnt++;
//     }
//     return temp;
//     }
//     int getLength(Node* head){
//         int size=1;
//         Node* temp=head;
//         Node* curr=temp->next;
//         while(curr!=temp){
//             size++;
//             curr=curr->next;
//         }
//     return size;
//     }
//     void splitCircularList(Node *head){
//         int N=getLength(head);
//         int half=N/2;
//         Node* head2=NULL;
//         Node* tail=getTail(head,N);
//         int cnt=1;
//         Node* temp=head;
//         while(cnt<half){
//             temp=temp->next;
//             cnt++;
//         }
//         head2=temp->next;
//         temp->next=head;
//         tail->next=head2;
//     }
    


// //Q.sort 0,1,2
// Node* sortList(Node *head){
//     Node* temp=head;
//     int zero=0;
//     int one=0;
//     int two=0;
//     while(temp!=NULL){
//         if(temp->data==0){
//             zero++;
//             temp=temp->next;
//         }
//         else if(temp->data==1){
//             one++;
//             temp=temp->next;
//         }
//        else{
//             two++;
//             temp=temp->next;
//         }
//     }

//     Node* curr=head;
//     for(int i=1;i<=zero;i++){
//         curr->data=0;
//         curr=curr->next;
//     }
//     for(int i=1;i<=one;i++){
//         curr->data=1;
//         curr=curr->next;
//     }
//     for(int i=1;i<=two;i++){
//         curr->data=2;
//         curr=curr->next;
//     }
//     return head;
// }



// //Q.Add two numbers
// class Solution {
//     private:
//     ListNode* reverseLL(ListNode* head){
//         ListNode* prev=NULL;
//         ListNode* curr=head;
//         ListNode* forward=NULL;
//         while(curr!=NULL){
//             forward=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=forward;
//         }
//         return prev;
//     }

//     void insertAthead(ListNode* &head,int d){
//         if(head==NULL){
//             ListNode* temp=new ListNode(d);
//             head=temp;
//             return;
//         }
//         ListNode* temp=new ListNode(d);
//         temp->next=head;
//         head=temp;
//     }
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* sumhead=NULL;
//         int carry=0;
//         while(l1!=NULL && l2!=NULL){
//             int sum=l1->val+l2->val+carry;
//             if(sum>=10){
//                 insertAthead(sumhead,sum%10);
//                 carry=1;
//             }
//             else{
//                 insertAthead(sumhead,sum);
//                 carry=0;
//             }
//             l1=l1->next;
//             l2=l2->next;
//         }

//         while(l1!=NULL){
//              int sum=l1->val+carry;
//             if(sum>=10){
//                 insertAthead(sumhead,sum%10);
//                 carry=1;
//             }
//             else{
//                 insertAthead(sumhead,sum);
//                 carry=0;
//             }
//             l1=l1->next;
//         }

//         while(l2!=NULL){
//              int sum=l2->val+carry;
//             if(sum>=10){
//                 insertAthead(sumhead,sum%10);
//                 carry=1;
//             }
//             else{
//                 insertAthead(sumhead,sum);
//                 carry=0;
//             }
//             l2=l2->next;
//         }

//         if(carry==1){
//             insertAthead(sumhead,1);
//         }

//      return reverseLL(sumhead);
//     }
// };


// //Q. sort list

// class Solution {
//     private:
//     ListNode* findMid(ListNode* head) {
//     ListNode* slow = head;
//     ListNode* fast = head -> next;
    
//     while(fast != NULL && fast -> next != NULL) {
//         slow = slow -> next;
//         fast = fast -> next -> next; 
//     }
//     return slow;
// }

// ListNode* merge(ListNode* left, ListNode* right) {
    
//     if(left == NULL)
//         return right;
    
//     if(right == NULL)
//         return left;
    
//     ListNode* ans = new ListNode(-1);
//     ListNode* temp = ans;
    
//     //merge 2 sorted Linked List
//     while(left != NULL && right != NULL) {
//         if(left -> val < right -> val ) {
//             temp -> next = left;
//             temp = left;
//             left = left -> next;
//         }
//         else
//         {
//             temp -> next = right;
//             temp = right;
//             right = right -> next;
//         }
//     }
    
//     while(left != NULL) {
//         temp -> next = left;
//         temp = left;
//         left = left -> next;
//     }
    
//     while(right != NULL) {
//         temp -> next = right;
//         temp = right;
//         right = right -> next;
//     }
    
//     ans = ans -> next;
//     return ans;
    
// }
// public:
//     ListNode* sortList(ListNode* head) {
//          if( head == NULL || head -> next == NULL ) {
//         return head;
//     }
    
//     // break linked list into 2 halvs, after finding mid
//     ListNode* mid = findMid(head);
    
//     ListNode* left = head;
//     ListNode* right = mid->next;
//     mid -> next = NULL;
    
//     //recursive calls to sort both halves
//     left = sortList(left);
//     right = sortList(right);
    
//     //merge both left and right halves
//     ListNode* result = merge(left, right);
    
//     return result;
//     }
// };

// //Q. sort 0,1,2
// Node* LL(int zero,int one,int two){
//     Node* head=NULL;
//     Node* tail=NULL;
//     for(int i=1;i<=zero+one+two;i++){
//         if(i>=1 && i<=zero)
//         {Node* temp=new Node(0);
//         if(tail==NULL){
//             tail=temp;
//             head=temp;
//         }
//         else{
//            tail->next=temp;
//            tail=temp;
//         }}
    
//          if(i>zero && i<=zero+one)
//         {Node* temp=new Node(1);
//         if(tail==NULL){
//             tail=temp;
//             head=temp;
//         }
//         else{
//            tail->next=temp;
//            tail=temp;
//         }}
    
//          if(i>one+zero && i<=zero+one+two)
//         {Node* temp=new Node(2);
//         if(tail==NULL){
//             tail=temp;
//             head=temp;
//         }
//         else{
//            tail->next=temp;
//            tail=temp;
//         }}
//     }
//     return head;
    
//     }
//     Node* sortList(Node *head){
//            Node* temp=head;
//         int zero=0;
//         int one=0;
//         int two=0;
//         while(temp!=NULL){
//             if(temp->data==0){
//                 zero++;
//                 temp=temp->next;
//             }
//             else if(temp->data==1){
//                 one++;
//                 temp=temp->next;
//             }
//            else{
//                 two++;
//                 temp=temp->next;
//             }
//         }
//         Node* Head=LL(zero,one,two);
//         return Head;
//     }



// //Q. merge two sorted lists[optimized]

// ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//     ListNode* anshead=NULL;
//     ListNode* anstail=NULL;
//     while(list1!=NULL && list2!=NULL){
//        if(list1->val <= list2->val){
//            ListNode* temp=list1;
//            list1=list1->next;
//            temp->next=NULL;
//            if(anstail==NULL){
//                anstail=temp;
//                anshead=temp;
//            }
//            else{
//                anstail->next=temp;
//                anstail=temp;
//            }
//        }
//        else{
//             ListNode* temp=list2;
//            list2=list2->next;
//            temp->next=NULL;
//            if(anstail==NULL){
//                anstail=temp;
//                anshead=temp;
//            }
//            else{
//                anstail->next=temp;
//                anstail=temp;
//            }
//        }
//     } 

//     while(list1!=NULL){
//        ListNode* temp=list1;
//        list1=list1->next;
//        temp->next=NULL;
//        if(anstail==NULL){
//            anstail=temp;
//            anshead=anstail;
//        }else{
//            anstail->next=temp;
//            anstail=temp;
//        }
//     }  

//     while(list2!=NULL){
//        ListNode* temp=list2;
//        list2=list2->next;
//        temp->next=NULL;
//         if(anstail==NULL){
//            anstail=temp;
//            anshead=anstail;
//        }else{
//            anstail->next=temp;
//            anstail=temp;
//        }
//     }

//     return anshead;





// //Q. palindrome linked list
// node* reverse(node* head2){
//     node* prev=NULL;
//     node* curr=head2;
//     node* forward=NULL;

//     while(curr!=NULL){
//         forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//     }

//     return prev;
// }
// int countNodes(node* head){
//     int size=0;
//     node* temp=head;
//     while(temp!=NULL){
//         size++;
//         temp=temp->next;
//     }
//     return size;
// }
// bool isPalindrome(node* head) {
//     if(head==NULL || head->next==NULL){return true;}
//     int N=countNodes(head);
//     node* head2=head;
//     node* temp=head;
//     int cnt=1;
//     if(N%2==0){
//     while(cnt<N/2){
//         temp=temp->next;
//         cnt++;
//     }
//     head2=temp->next;
//     temp->next=NULL;
//    head2=reverse(head2);
//     }
//     else{
//         while(cnt<N/2){
//         temp=temp->next;
//         cnt++;
//     }
//    head2=temp->next->next;
//     temp->next=NULL;
//    head2= reverse(head2);
//     }

//     while(head!=NULL && head2!=NULL){
//         if(head->val == head2->val){
//             head=head->next;
//             head2=head2->next;
//         }
//         else{
//             return false;
//         }
//     }

//     return true;}





//Q. clone LL with random pointer[approach:-1]
//T.C. = O(N)
//S.C. = O(N)

// void insertatTail(Node* &tail,int d){
//     Node* temp=new Node(d);
//     tail->next=temp;
//     tail=temp;
// }

// Node* copyRandomList(Node* head) {
//     if(head==NULL){return NULL;}
//     Node* temp=head;
//     Node* Head=new Node(temp->val);
//     temp=temp->next;
//     Node* tail=Head;
//     while(temp!=NULL){
//         int d=temp->val;
//         insertatTail(tail,d);
//         temp=temp->next;
//     }
// unordered_map<Node*,Node*> oldTonew;
// Node* originalNode=head;
// Node* cloneNode=Head;
// while(originalNode!=NULL){
//     oldTonew[originalNode]=cloneNode;
//     originalNode=originalNode->next;
//     cloneNode=cloneNode->next;
// }
// cloneNode=Head;
// originalNode=head;
// while(originalNode!=NULL){
//     cloneNode->random=oldTonew[originalNode->random];
//     cloneNode=cloneNode->next;
//     originalNode=originalNode->next;
// }
// return Head;


// //Q. clone LL with random pointer[approach:-2]
//T.C. = O(N)
//S.C. = O(1)

// Node* copyRandomList(Node* head) {
//     if(head==NULL){return NULL;}
//     Node* temp=head;
//     Node* Head=new Node(temp->val);
//     temp=temp->next;
//     Node* tail=Head;
//     while(temp!=NULL){
//         int d=temp->val;
//         insertatTail(tail,d);
//         temp=temp->next;
//     }
// Node* originalNode=head;
// Node* cloneNode=Head;
// while(originalNode!=NULL && cloneNode!=NULL){
//     Node* next=originalNode->next;
//     originalNode->next=cloneNode;
//     originalNode=next;

//     next=cloneNode->next;
//     cloneNode->next=originalNode;
//     cloneNode=next;
// }
// Node* Temp=head;
// while(Temp!=NULL){
//     if(Temp->next!=NULL)
//     Temp->next->random=Temp->random?Temp->random->next:Temp->random;

// Temp=Temp->next->next;

// }

// originalNode=head;
// cloneNode=Head;
// while(originalNode!=NULL && cloneNode!=NULL){
//     originalNode->next=cloneNode->next;
//     originalNode=originalNode->next;
// if(originalNode!=NULL )
//    { cloneNode->next=originalNode->next;}
//     cloneNode=cloneNode->next;
// }
// return Head;}



// //Q flatten a ll
// class Solution {
//     private:
//     Node* mergeSortedLists(Node* list1,Node* list2){
//         if(list1==NULL) return list2;
//         if(list2==NULL) return list1;
//         Node* mergedHead=NULL;
//         Node* mergedTail=mergedHead;
//         while(list1!=NULL && list2!=NULL){
//             if(list1->data<=list2->data){
//                 Node* temp=list1;
//                 list1=list1->bottom;
//                 temp->bottom=NULL;
//                 if(mergedHead==NULL){
//                     mergedHead=temp;
//                     mergedTail=mergedHead;
//                 }
//                 else{
//                     mergedTail->bottom=temp;
//                     mergedTail=temp;
//                 }
//             }

//             else{
//                 Node* temp=list2;
//                 list2=list2->bottom;
//                 temp->bottom=NULL;
//                 if(mergedHead==NULL){
//                     mergedHead=temp;
//                     mergedTail=mergedHead;
//                 }
//                 else{
//                     mergedTail->bottom=temp;
//                     mergedTail=temp;
//                 }
//             }
//         }

//         while(list1!=NULL){
//             Node* temp=list1;
//             list1=list1->bottom;
//             temp->bottom=NULL;
//             mergedTail->bottom=temp;
//             mergedTail=temp;
//         }

//          while(list2!=NULL){
//             Node* temp=list2;
//             list2=list2->bottom;
//             temp->bottom=NULL;
//             mergedTail->bottom=temp;
//             mergedTail=temp;
//         }

//         return mergedHead;
//     }
    
//     void solve(Node* &head1,Node* head2){
//         if(head2==NULL){
//             return;
//         }
//         Node* temp=head2->next;
//         head2->next=NULL;
//         head1=mergeSortedLists(head1,head2);
//         head2=temp;
//         solve(head1,head2);
//     }
//   public:
//     // Function which returns the  root of the flattened linked list.
//     Node *flatten(Node *root) {
//         if(root==NULL or root->next==NULL){
//             return root;
//         }
        
//         Node* temp=root;
//         Node* newHead=NULL;
//         solve(newHead,temp);
//         return newHead;
//     }
// };




// //Q. reverse ll in k groups

// class Solution {
//     private:
//     ListNode* reverseLL(ListNode* head){
//         ListNode* prev=NULL;
//         ListNode* curr=head;
//         ListNode* forward=NULL;
//         while(curr!=NULL){
//             forward=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=forward;
//         }
//         return prev;
//     }

//     void solve(ListNode* &head,ListNode* temp,ListNode* prevNode,ListNode* nextNode,ListNode* kthNode,int k){
//         if(temp==NULL || temp->next==NULL){
//             if(prevNode)
//             prevNode->next=temp;
//             return;
//         }

//         int cnt=1;
//         while(cnt<k){
//             if(temp==NULL){
//                 break;
//             }
//             temp=temp->next;
//             cnt++;
//         }
//         if(temp==NULL){
//             temp=nextNode;
//             if(prevNode)
//             prevNode->next=temp;
//             return;
//         }
//         kthNode=temp;
//         temp=nextNode;

//         nextNode=kthNode->next;
//         kthNode->next=NULL;

//         kthNode=reverseLL(temp);
//         if(temp==head){
//             head=kthNode;
//         }

//         if(prevNode!=NULL){
//             prevNode->next=kthNode;
//         }
//         prevNode=temp;
//         temp=nextNode;

//         solve(head,temp,prevNode,nextNode,kthNode,k);

//     }
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         if(head==NULL or head->next==NULL){
//             return head;
//         }
//         ListNode* temp=head;
//         ListNode* prevNode=NULL;
//         ListNode* nextNode=head;
//         ListNode* kthNode=NULL;
//         solve(head,temp,prevNode,nextNode,kthNode,k);

//         return head;
//     }
// };