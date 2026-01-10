#include<iostream>
#include<queue>
using namespace std;
class Queue {
    int* arr;
    int size;
    int Front;
    int rear;
public:
    Queue() {
this->size=1000001;
        arr=new int[size];
        this->Front=-1;
        this->rear=-1;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(Front==-1 && rear==-1){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        if(Front==0 && rear==size-1){
            return;
        }
        else if(Front==-1){
            Front=0;
            rear++;
            arr[rear]=data;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }

    int dequeue() {
       if(Front==-1){
           return -1;
       }
       else if(Front==rear){
          int ans=arr[Front];
          Front=rear=-1;
          return ans;
       }
       else{
           Front++;
           return arr[Front-1];
       }
    }

    int front() {
        if(Front==-1 && rear==-1){
            return -1;
        }
        else{
            return arr[Front];
        }
    }
};

class MyCircularQueue {
    public:
    int* arr;
    int size;
    int front;
    int rear;
public:
    MyCircularQueue(int k) {
        this->size=k;
        arr=new int[size];
        this->front=-1;
        this->rear=-1;
    }
    
    bool enQueue(int value) {
        if((front==0 && rear==size-1) or (rear==(front-1))){
            return false;
        }
        else if(front==-1 && rear==-1){
            front=0;
            rear=0;
            arr[rear]=value;
            return true;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=value;
            return true;
        }
        else{
            rear++;
            arr[rear]=value;
            return true;
        }
    }
    
    bool deQueue() {
        if(front==-1 && rear==-1){
            return false;
        }
        else if(front == rear){
            arr[front]=-1;
            front=rear=-1;
            return true;
        }
        else if(front==size-1){
            arr[front]=-1;
            front=0;
            return true;
        }
        else{
            arr[front]=-1;
            front++;
            return true;
        }
    }
    
    int Front() {
        if(front==-1 && rear==-1){
            return -1;
        }
        else{
            return arr[front];
        }
    }
    
    int Rear() {
        if(front==-1 && rear==-1){
            return -1;
        }
        else{
            return arr[rear];
        }
    }
    
    bool isEmpty() {
        if(front==-1 && rear==-1){
            return 1;
        }
        else{
            return 0;
        }
        
    }
    
    bool isFull() {
         if((front==0 && rear==size-1) or (rear==(front-1)%(size-1))){
            return 1;
         }
         else{
            return 0;
         }
    }
};

class Deque{
    public:
int* arr;
int front;
int rear;
int size;
public:
Deque(int k){
    this->size=k;
    arr=new int[size];
    this->front=-1;
    this->rear=-1;
}

void push_front(int d){
if((front==0 && rear==size-1) or (rear==front-1)){
    cout<<"queue is full"<<endl;
    return;
}
else if(front==-1 && rear==-1){
    front=0;
    rear=0;
    arr[front]=d;
    return;
}
else if(front==0 && rear!=size-1){
    front=size-1;
    arr[front]=d;
    return;
}
else{
    front--;
    arr[front]=d;
    return;
}
}
void push_back(int d){
if((front==0 && rear==size-1) or (rear==front-1)){
    cout<<"queue is full"<<endl;
    return;
}
else if(rear == size-1 && front!=0){
    rear=0;
    arr[rear]=d;
    return;
}
else if(front==-1 && rear==-1){
    rear=front=0;
    arr[rear]=d;
    return;
}
else{
    rear++;
    arr[rear]=d;
    return;
}
}

void pop_back(){
if(front==-1 && rear==-1){
    cout<<"queue is empty"<<endl;
    return;
}
else if(rear==0 && front!=size-1){
    arr[rear]=-1;
    rear=size-1;
    return;
}
else if(front==rear){
    arr[front]=-1;
    front=rear=-1;
    return;
}
else{
    arr[rear]=-1;
    rear--;
    return;
}
}

void pop_front(){
if((front==-1 && rear==-1)){
    cout<<"queue is empty"<<endl;
    return;
}
else if(front==rear){
    arr[front]=-1;
    front=rear=-1;
    return;
}
else if(front == size-1 && rear!=0){
    arr[front]=-1;
    front=0;
    return;
}
else{
    arr[front]=-1;
    front++;
    return;
}
}

int Front(){
if(front==-1 && rear==-1){
    cout<<"queue is empty"<<endl;
   
}
else{
    return arr[front];
}
}

bool empty(){
    if(front==-1 && rear==-1){
        return true;
    }
    else{
        return false;
    }
}

};
int main(){

    // queue<int> q;
    // q.push(2);
    // q.push(4);
    // q.push(7);
    // q.push(3);
    // cout<<"size of the queue: "<<q.size()<<endl;
    // cout<<q.empty()<<endl;
    // cout<<"front is: "<<q.front()<<endl;

    // q.pop();
    // cout<<"size of the queue: "<<q.size()<<endl;
    // cout<<"front is: "<<q.front()<<endl;



// Queue q(5);
// q.push(3);
// q.push(4);
// q.push(5);
// cout<<q.Front()<<endl;
// q.push(7);
// q.push(8);
// q.push(99);

// cout<<q.Front()<<endl;
// q.pop();
// cout<<q.Front()<<endl;
// cout<<q.empty()<<endl;
// q.pop();
// q.pop();
// q.pop();
// q.pop();
// cout<<q.empty();


//  deque<int> d;
//  d.push_front(12);
//  d.push_back(14);
//  cout<<d.front()<<endl;
//  cout<<d.back()<<endl;
// d.pop_front();
// cout<<d.front()<<endl;

// if(d.empty()){
//     cout<<"Queue is empty"<<endl;
// }
// else{
//     cout<<"Queue is not empty"<<endl;
// }


// Deque deq(6);
// deq.push_back(3);
// deq.push_front(1);
// deq.push_back(4);
// deq.push_back(7);
// deq.push_back(9);
// deq.push_front(8);

// cout<<"kya ye queue khaali hai: "<<deq.empty()<<endl;
// cout<<"front element: "<<deq.Front()<<endl;
// deq.pop_back();
// deq.pop_front();
// cout<<"kya ye queue khaali hai: "<<deq.empty()<<endl;
// cout<<"front element: "<<deq.Front()<<endl;



// //Q. queue reversal
// class Solution {
//     private:
//     void solve(queue<int> &q){
//         if(q.empty()){
//             return;
//         }
//         int front=q.front();
//         q.pop();
//         solve(q);
//         q.push(front);
//     }
//   public:
//     queue<int> reverseQueue(queue<int> &q) {
//         solve(q);
//         return q;
//     }
// };



//Q. first negative integer in every window of k
//    vector<int> firstNegInt(vector<int>& arr, int k) {
//         vector<int> result;
//         int i=0,j=0;
//         int n=arr.size();
//         deque<int> deq;
//         while(j<n){
//             if(arr[j]<0){
//                 deq.push_back(arr[j]);
//             }
//             if(j-i+1==k){
//                 if(!deq.empty()){
//                     result.push_back(deq.front());
//                 }
//                 else{
//                     result.push_back(0);
//                 }
                
//                 if(arr[i]<0 && !deq.empty()){
//                     deq.pop_front();
//                 }
//                 i++;
//             }
//             j++;
//         }
//         return result;
//     }



// //Q. reverse a queue to number k
// if(q.size()<k){
//             return q;
//         }
//         deque<int> dq;
//         int i=1;
//         while(!q.empty()){
//             if(i<=k){
//                 dq.push_front(q.front());
//             }
//             else{
//                 dq.push_back(q.front());
//             }
//             i++;
//             q.pop();
//         }
        
//         while(!dq.empty()){
//             q.push(dq.front());
//             dq.pop_front();
//         }
        
//         return q;



// //Q. first non repeating character in stream
// string FirstNonRepeating(string &s) {
//         int counts[26]={0};
//         string ans="";
//         queue<char> q;
//         int n=s.size();
//         for(int i=0;i<n;i++){
//             q.push(s[i]);
//             counts[s[i]-'a']++;
//             while(!q.empty()){
//                 if(counts[q.front()-'a']>1){
//                     q.pop();
//                 }
//                 else{
//                     ans+=q.front();
//                     break;
//                 }
//             }
//             if(q.empty()){
//                 ans+='#';
//             }
//         }
//         return ans;
//     }




// //Q. Circular tour
//  int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int totGas=0,totCost=0;
//         for(int val:gas){
//             totGas+=val;
//         }
//         for(int val:cost){
//             totCost+=val;
//         }
//         if(totGas<totCost){
//             return -1;
//         }

//         int start=0,currGas=0;
//         for(int i=0;i<gas.size();i++){
//             currGas+=(gas[i]-cost[i]);
//             if(currGas<0){
//                 start=i+1;
//                 currGas=0;
//             }
//         }
//         return start;      
//     }




// //Q.Interleave first half of the queue with the second half
// void func(stack<int>& st,queue<int> &q){
//     if(st.empty()){
//         return;
//     }
//     int top=st.top();
//     st.pop();
//     func(st,q);
//     q.push(top);
// }
// void solve(queue<int>& q,stack<int>& st){
//     if(st.empty()){
//         return;
//     }
//     int top=st.top();
//     st.pop();
//     solve(q,st);
//     st.push(top);
//     st.push(q.front());
//     q.pop();
// }
// void interLeaveQueue(queue < int > & q) {
//     stack<int> st;
//     int n=q.size()/2;
//     for(int i=1;i<=n;i++){
//         int ele=q.front();
//         q.pop();
//         st.push(ele);
//     }
//     solve(q,st);
//     func(st,q);
// }