#include <iostream>
#include <stack>
using namespace std;

class TwoStack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;
    int size1 = 0;
    int size2 = 0;

public:
    // Initialize TwoStack.
    TwoStack(int s)
    {
        this->size = s;
        arr = new int[size];
        this->top1 = -1;
        this->top2 = size;
    }

    // Push in stack 1.
    void push1(int num)
    {
        if (size - top1 > 1 && top1 < top2 - 1)
        {
            top1++;
            arr[top1] = num;
            size1++;
        }
        else
        {
            return;
        }
    }

    // Push in stack 2.
    void push2(int num)
    {
        if (top2 <= size && top1 < top2 - 1)
        {
            top2--;
            arr[top2] = num;
        }
        else
        {
            return;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1()
    {
        if (top1 >= 0)
        {
            top1--;
            return arr[top1 + 1];
        }
        else
        {
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2()
    {
        if (top2 < size)
        {
            top2++;
            return arr[top2 - 1];
        }
        else
        {
            return -1;
        }
    }
};

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

public:
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
            cout << arr[top + 1];
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

// int main(){
//     //STL

// // stack <int> s;
// // s.push(2);
// // s.push(4);
// // cout<<"printing top element : "<<s.top()<<endl;
// // s.pop();
// // cout<<"printing top element : "<<s.top()<<endl;

// // if(s.empty()){
// //     cout<<"stack is empty"<<endl;
// // }
// // else{
// //     cout<<"stack is not empty"<<endl;
// // }
// // cout<<s.size()<<endl;

// //class implementation[arrays]

// // Stack st(5);
// // st.push(1);
// // st.push(2);
// // st.push(3);
// // st.push(4);
// // st.push(5);
// // st.push(6);
// // cout<<st.empty()<<endl;
// // cout<<st.peek()<<endl;

// // st.pop();
// // cout<<st.peek()<<endl;
// // st.pop();
// // cout<<st.peek()<<endl;
// // st.pop();
// // cout<<st.peek()<<endl;
// // st.pop();
// // cout<<st.peek()<<endl;
// // st.pop();
// // cout<<st.peek()<<endl;

// // cout<<st.empty()<<endl;

// //class implementation[LL]

// }

// // Q.reverse a string using stack
// int main()
// {
//     Stack s(6);
//     s.push('c');
//     s.push('h');
//     s.push('i');
//     s.push('r');
//     s.push('a');
//     s.push('g');

//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop();
// }

// //Q. delete middle element
// class Solution {
//     private:
//     void solve(int cnt,int size,stack<int>& s){
//         if(cnt==size){
//             s.pop();
//             return;
//         }

//         int top=s.top();
//         s.pop();
//         cnt++;
//         solve(cnt,size,s);
//         s.push(top);
//     }
//   public:
//     // Function to delete middle element of a stack.
//     void deleteMid(stack<int>& s) {
//         int n=(s.size())/2;
//         solve(0,n,s);
//     }
// };

// Q.insert at bottom[using recursion]
//  void insert(stack<int>& ans,stack<int> myStack){
//      if(myStack.size()==1){ans.push(myStack.top());return;}
//      int temp=myStack.top();
//      myStack.pop();
//      insert(ans,myStack);
//      ans.push(temp);
//      }
//      stack<int> pushAtBottom(stack<int>& myStack, int x)
//      {
//         stack<int> ans;
//         ans.push(x);
//      insert(ans,myStack);
//     return ans;

// Q.Reverse stack
//  class Solution {
//      private:
//      void insertAtBottom(stack<int>& st,int x){
//          if(st.empty()){
//              st.push(x);
//              return;
//          }
//          int top=st.top();
//          st.pop();
//          insertAtBottom(st,x);
//          st.push(top);
//      }
//      void solve(stack<int>& st){
//          if(st.empty()){
//              return;
//          }

//         int top=st.top();
//         st.pop();
//          solve(st);
//         insertAtBottom(st,top);

//     }
//   public:
//     void Reverse(stack<int> &St) {
//         solve(St);
//     }
// };



// // Q. Sort a stack
// void insert(stack<int> &s, int top)
// {
//     if (s.top() >= top || s.empty())
//     {
//         s.push(top);
//         return;
//     }

//     int topp = s.top();
//     s.pop();
//     insert(s, top);
//     s.push(topp);
// }
// void sort(stack<int> &s)
// {
//     if (s.empty())
//     {
//         return;
//     }
//     int top = s.top();
//     s.pop();
//     sort(s);
//     if ((s.empty()) or (s.top() >= top))
//     {
//         s.push(top);
//     }
//     else
//     {
//         insert(s, top);
//     }
// }
// int main()
// {
//     stack<int> s;

//     s.push(2);
//     s.push(7);
//     s.push(1);
//     s.push(9);
//     s.push(3);

//     sort(s);

//     cout << "after sorting:" << endl;
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
// }



// Q. Next smaller element
//  vector<int> nextSmallerElement(vector<int> &arr, int n)
//  {
//     stack<int> s;
//     s.push(-1);
//     vector<int> ans(n);
//     for(int i=n-1;i>=0;i--){
//         int curr=arr[i];
//         while(s.top()>=curr){
//             s.pop();
//         }
//         ans[i]=s.top();
//         s.push(curr);
//     }
//     return ans;
//  }

// Q.largest rectangle in histogram
//  vector<int> nextSmallerelement(vector<int> heights,int n){
//      vector<int> next(n);
//      stack<int> s;
//      s.push(-1);
//      for(int i=n-1;i>=0;i--){
//          int curr=heights[i];
//          while(s.top()!=-1 && heights[s.top()]>=curr){
//              s.pop();
//          }
//          next[i]=s.top();
//          s.push(i);
//      }
//      return next;
//  }
//    vector<int> prevSmallerelement(vector<int> heights,int n){
//     vector<int> prev(n);
//      stack<int> s;
//      s.push(-1);
//      for(int i=0;i<n;i++){
//          int curr=heights[i];
//          while(s.top()!=-1 && heights[s.top()]>=curr){
//              s.pop();
//          }
//          prev[i]=s.top();
//          s.push(i);
//      }
//      return prev;
//  }
//  int largestRectangleArea(vector<int>& heights) {
//      int n=heights.size();
//      vector<int> next(n);
//      next=nextSmallerelement(heights,n);
//      vector<int> prev(n);
//      prev=prevSmallerelement(heights,n);
//      int area=INT_MIN;
//      for(int i=0;i<n;i++){
//              int l=heights[i];
//              if(next[i]==-1){
//                  next[i]=n;
//              }
//              int b=next[i]-prev[i]-1;
//              int newarea=l*b;
//              area=max(area,newarea);
//      }
//      return area;
//  }

// //Q. celebrity problem

//  int celebrity(vector<vector<int> >& mat) {
//         stack<int> s;
//         int n=mat.size();
//         for(int i=0;i<n;i++){
//             s.push(i);
//         }

//         while(s.size()!=1){
//             int A=s.top();
//             s.pop();
//             int B=s.top();
//             s.pop();
//            if(mat[A][B]==1){
//                s.push(B);
//            }
//             else{
//                 s.push(A);
//             }
//         }

//         int candidate=s.top();
//         bool rowCheck=true;
//         bool colCheck=true;
//         for(int i=0;i<n;i++){
//             if(mat[candidate][i]==1 && i!=candidate){
//                 rowCheck=false;
//                 break;
//             }
//         }
//          for(int i=0;i<n;i++){
//             if(mat[i][candidate]==0 && i!=candidate){
//                 rowCheck=false;
//                 break;
//             }
//         }

//         if(rowCheck==true && colCheck==true){
//             return candidate;
//         }
//         else{
//             return -1;
//         }

// Q. Maximal rectangle

// vector<int> nextSmallerelement(vector<int> heights,int n){
//    vector<int> next(n);
//    stack<int> s;
//    s.push(-1);
//    for(int i=n-1;i>=0;i--){
//        int curr=heights[i];
//        while(s.top()!=-1 && heights[s.top()]>=curr){
//            s.pop();
//        }
//        next[i]=s.top();
//        s.push(i);
//    }
//    return next;
// }
//  vector<int> prevSmallerelement(vector<int> heights,int n){
//   vector<int> prev(n);
//    stack<int> s;
//    s.push(-1);
//    for(int i=0;i<n;i++){
//        int curr=heights[i];
//        while(s.top()!=-1 && heights[s.top()]>=curr){
//            s.pop();
//        }
//        prev[i]=s.top();
//        s.push(i);
//    }
//    return prev;
// }
// int largestRectangleArea(vector<int> heights) {
//    int n=heights.size();
//    vector<int> next(n);
//    next=nextSmallerelement(heights,n);
//    vector<int> prev(n);
//    prev=prevSmallerelement(heights,n);
//    int area=INT_MIN;
//    for(int i=0;i<n;i++){
//            int l=heights[i];
//            if(next[i]==-1){
//                next[i]=n;
//            }
//            int b=next[i]-prev[i]-1;
//            int newarea=l*b;
//            area=max(area,newarea);
//    }
//    return area;
// }

// int maxArea(vector<vector<int>> &mat) {
//    int area= largestRectangleArea(mat[0]);
//    int n=mat.size();
//    int m=mat[0].size();
//    for(int i=1;i<n;i++){
//        for(int j=0;j<m;j++){
//            if(mat[i][j]!=0)
//                mat[i][j]+=mat[i-1][j];

//            else
//                mat[i][j]=0;
//        }
//        area=max(area,largestRectangleArea(mat[i]));
//    }

//    return area;
// }

// Q.  Design a stack that supports getMin() in O(1) time and O(1) extra space

// stack<int> s;
// int mini;
// void push(int data) {
//     if(s.empty()){
//         s.push(data);
//         mini=data;
//     }
//     else{
//         if(data<mini)
//        {
//         s.push(2*data-mini);
//         mini=data;}
//     else{
//         s.push(data);
//     }
//   }
// }

// void pop() {
//     if(s.empty()){
//         return;
//     }
//     int curr=s.top();
//     s.pop();
//     if(curr>mini){
//         return;
//     }
//     else{
//         int prevMin=mini;
//         int val=2*mini-curr;
//         mini=val;
//         return;
//     }
// }

// int top() {
//    if(s.empty()){
//        return -1;
//    }
//    int curr=s.top();
// if(curr<mini){
// return mini;
// }
// else{
// return curr;
// }
// }

// int getMin() {
//    if(s.empty()){
//        return -1;
//    }
//    return mini;
// }

// //Q.Valid parentheses
// bool isValid(string s) {
//     unordered_map<char,char> closetoopen;
//     closetoopen['[']=']';
//     closetoopen['{']='}';
//     closetoopen['(']=')';

//     stack<char> st;

//     for(int i=0;i<s.size();i++){
//         if(s[i]=='(' or s[i]=='{' or s[i]=='['){
//             st.push(s[i]);
//         }
//         else{
//             if(st.size()==0){
//                return false;
//             }
//             if(s[i]==closetoopen[st.top()]){
//                 st.pop();
//             }

//             else{
//                 return false;
//             }
//         }
//     }

//    return st.size()==0;
// }