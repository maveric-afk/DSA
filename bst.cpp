#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
int data;
Node* left;
Node* right;

Node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
}

};

Node* InsertInBST(Node* root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(data>root->data){
        root->right=InsertInBST(root->right,data);
    }
    else{
        root->left=InsertInBST(root->left,data);
    }
    return root;
}

void takeinput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        root=InsertInBST(root,data);
        cin>>data;
    }
}

void levelOrderTrav(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!(q.empty()))
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;  
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

Node* minValue(Node* root){
    Node* temp=root;
    while(temp->left){
        temp=temp->left;
    }
    return temp;
}

Node* maxValue(Node* root){
    Node* temp=root;
    while(temp->right){
        temp=temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root,int val){
    if(root==NULL)
    return NULL;

    if(root->data==val){
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        if(root->left==NULL && root->right!=NULL){
             Node* temp=root->right;
            delete root;
            return temp;
        }

        if(root->left!=NULL && root->right!=NULL){
            int mini=minValue(root->right)->data;
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
            return root;
        }
    }

    else if(root->data>val){
        root->left=deleteFromBST(root->left,val);
        return root;
    }
    else{
        root->right=deleteFromBST(root->right,val);
        return root;
    }
}

int main(){

        Node* root=NULL;

        cout<<"Enter data to create BST:-";
        takeinput(root);

        cout<<"Printing the bst:-"<<endl;
        levelOrderTrav(root);

        cout<<"Min:-"<<minValue(root)<<endl;
        cout<<"Max:-"<<maxValue(root)<<endl;

        //Q. Search in BST
    //     Node* searchBST(Node* root, int val) {
    //     if(root==NULL)
    //     return NULL;

    //     if(root->val==val)
    //     return root;

    //     else if(val>root->val){
    //         return searchBST(root->right,val);
    //     }
    //      else{
    //         return searchBST(root->left,val);
    //     }
    // }


    //Q. Validate BST
//     bool solve(Node* root, int max, int min){
//         if(root==NULL) return true;

//         if(root->data<max && root->data>min){
//             bool left=solve(root->left,root->data,min);
//             bool right=solve(root->right,max,root->data);

//             return left && right;
//         }
//         else{
//             return false;
//         }
//     }
//   public:
//     // Function to check whether a Binary Tree is BST or not.
//     bool isBST(Node* root) {
//        return solve(root,INT_MAX,INT_MIN);
//     }


// //Q. Kth smallest in BST
//     void solve(int k,int& count,TreeNode* root,int &ans){
//         if(root==NULL) return;

//         solve(k,count,root->left,ans);
//          count++;
//         if(count==k) ans=root->val;
//         solve(k,count,root->right,ans);
//     }
// public:
//     int kthSmallest(TreeNode* root, int k) {
//         if(root==NULL) return 0;
//      int count=0;
//      int ans;
//      solve(k,count,root,ans);
//      return ans;   
//     }

// // alternate

// int kthSmallest(Node *root, int k) {
//         if(root==NULL) return -1;
//         int ans=-1;
//         Node* curr=root;
//         int count=0;
//         while(curr!=NULL){
//             if(!curr->left){
//                 count++;
//                 if(count==k) ans=curr->data;
//                 curr=curr->right;
//             }
//             else{
//                 Node* pred=curr->left;
//                 while(pred->right && pred->right!=curr){
//                     pred=pred->right;
//                 }
//                 if(pred->right==NULL){
//                     pred->right=curr;
//                     curr=curr->left;
//                 }
//                 else{
//                     pred->right=NULL;
//                      count++;
//                      if(count==k) ans=curr->data;
//                      curr=curr->right;
//                 }
//             }
//         }
//         return ans;
//     }



// //Q. BT to BST
//  void merge(vector<int> &v,int s,int e,int mid){
//         int i=s;
//         int j=mid+1;
//         vector<int> temp;
//         while(i<=mid && j<=e){
//             if(v[i]<=v[j]){
//                 temp.push_back(v[i++]);
//             }
//             else{
//                 temp.push_back(v[j++]);
//             }
//         }
        
//         while(i<=mid){
//             temp.push_back(v[i++]);
//         }
        
//         while(j<=e){
//             temp.push_back(v[j++]);
//         }
        
//         for(int i=0;i<temp.size();i++){
//             v[i+s]=temp[i];
//         }
//     }
//     void mergeSort(vector<int>& v,int s,int e){
//         if(s>=e) return;
//         int mid=s+(e-s)/2;
//         mergeSort(v,s,mid);
//         mergeSort(v,mid+1,e);
        
//         merge(v,s,e,mid);
//     }
//     void solve(Node* root,vector<int>& in){
//         if(root==NULL) return;
        
//         solve(root->left,in);
//         in.push_back(root->data);
//         solve(root->right,in);
//     }
//     Node* func(vector<int> v,int s,int e){
//         if(s>e) return NULL;
        
//         int mid=s+(e-s)/2;
//         Node* root=new Node(v[mid]);
        
//         root->left=func(v,s,mid-1);
//         root->right=func(v,mid+1,e);
        
//         return root;
//     }
//   public:
//     Node *binaryTreeToBST(Node *root) {
//        vector<int> in;
//        solve(root,in);
//        mergeSort(in,0,in.size()-1);
       
//        return func(in,0,in.size()-1);
//     }





//Q. LCA in bst
//   TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root==NULL) return NULL;
//         TreeNode* ans;
//         while(root!=NULL){
//             if(root->val<p->val && root->val<q->val){
//                 root=root->right;
//             }
//             else if(root->val>p->val && root->val>q->val){
//                 root=root->left;
//             }
//             else{
//                 ans= root;
//                 break;
//             }
//         }
//         return ans;
//     }
// }


// //Q. Two sum in bst

//    void inorder(TreeNode* root,vector<int>& v){
//     if(root==NULL) return;
//     inorder(root->left,v);
//     v.push_back(root->val);
//     inorder(root->right,v);
// }
//     bool findTarget(TreeNode* root, int k) {
//         if(!root) return false;
//         vector<int> v;
//         inorder(root,v);

//         int i=0;
//         int j=v.size()-1;
//         bool ans=false;

//         while(i<j){
//            if(v[i]+v[j]==k){
//             ans=true;
//             break;
//            }
//            else if(v[i]+v[j]<k){
//             i++;
//            }
//            else{
//             j--;
//            }
//         }
//         return ans;
//     }



// //Q. Balance a BST
// TreeNode* func(vector<int> v,int s,int e){
//         if(s>e) return NULL;

//          int mid=s+(e-s)/2;
//         TreeNode* temp=new TreeNode(v[mid]);
//         temp->left=func(v,s,mid-1);
//         temp->right=func(v,mid+1,e);

//         return temp;
//     }
//     void solve(TreeNode* root,vector<int>& v){
//             if(root==NULL) return;

//             solve(root->left,v);
//             v.push_back(root->val);
//             solve(root->right,v);
//     }
// public:
//     TreeNode* balanceBST(TreeNode* root) {
//         vector<int> v;
//         solve(root,v);

//         int s=0;
//         int e=v.size()-1;
//         TreeNode* ans=func(v,s,e);
//         return ans;
//     }



// //Q. Construct BST from preorder
//  TreeNode* solve(vector<int> preorder,int mini,int maxi,int &i){
//         if(i>=preorder.size()){
//             return NULL;
//         }

//         if(preorder[i]<mini or preorder[i]>maxi)
//         return NULL;

//         TreeNode* root=new TreeNode(preorder[i++]);
//         root->left=solve(preorder,mini,root->val,i);
//         root->right=solve(preorder,root->val,maxi,i);

//         return root;
//     }
// public:
//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//         int mini=INT_MIN;
//         int maxi=INT_MAX;
//         int i=0;
//         return solve(preorder,mini,maxi,i);
//     }



// //Q.Largest bst in binary tree
// class Nodeval{
//     public:
//   int minNode,maxNode,maxSize;
  
//   public:
//   Nodeval(int minNode,int maxNode,int maxSize){
//       this->minNode=minNode;
//       this->maxNode=maxNode;
//       this->maxSize=maxSize;
//   }
// };

// class Solution {
//     private:
//     Nodeval solve(Node* root){
//         if(root==NULL){
//             return Nodeval(INT_MAX,INT_MIN,0);
//         }
        
//         Nodeval left=solve(root->left);
//         Nodeval right=solve(root->right);
        
//         if(root->data>left.maxNode && root->data<right.minNode){
//             return Nodeval(min(root->data,left.minNode),max(root->data,right.maxNode),1+left.maxSize+right.maxSize);
//         }
//         else{
//             return Nodeval(INT_MIN,INT_MAX,max(left.maxSize,right.maxSize));
//         }
//     }
//   public:
//     int largestBst(Node *root) {
//        return solve(root).maxSize;
        
//     }
// };



// //Q. BSt with dead end
//  private:
//     bool solve(Node* root,int mini,int maxi){
//         if(root==NULL) return false;
//         if(root->left==NULL and root->right==NULL){
//             if((abs(root->data-mini) <=1) and (abs(maxi-root->data) <=1)){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }
        
//         bool left=solve(root->left,mini,root->data);
//         bool right=solve(root->right,root->data,maxi);
        
//         if(left==true or right==true) return true;
//         else return false;
        
//     }
//   public:
//     bool isDeadEnd(Node *root) {
//       return solve(root,0,INT_MAX);
//     }


//Q. count bst nodes lying in a range
// int getCount(Node *root, int l, int h) {
//        int count=0;
//        Node* curr=root;
//        while(curr!=NULL){
//            if(!curr->left){
//                if(curr->data>=l && curr->data<=h){
//                    count++;
//                }
//                curr=curr->right;
//            }
//            else{
//                Node* pred=curr->left;
//                while(pred->right && pred->right!=curr){
//                    pred=pred->right;
//                }
//                if(pred->right==NULL){
//                    pred->right=curr;
//                    curr=curr->left;
//                }
//                else{
//                    pred->right=NULL;
//                     if(curr->data>=l && curr->data<=h){
//                    count++;
//                     }
//                    curr=curr->right;
//                }
//            }
//        }
//         return count;
//     }




//Q. median of bst
// float findMedian(struct Node *root) {
//     if(root==NULL) return 0;
//     int count=0;
//     float ans;
//         Node* curr=root;
//         while(curr!=NULL){
//             if(!curr->left){
//                     count++;
//                 curr=curr->right;
//             }
//             else{
//                 Node* pred=curr->left;
//                 while(pred->right && pred->right!=curr){
//                     pred=pred->right;
//                 }
//                 if(pred->right==NULL){
//                     pred->right=curr;
//                     curr=curr->left;
//                 }
//                 else{
//                     pred->right=NULL;
//                     count++;
//                     curr=curr->right;
//                 }
//             }
//         }
        
//     if(count%2==0){
//         float a,b;
//         int cnt=0;
//          Node* curr=root;
//         while(curr!=NULL){
//             if(!curr->left){
//                     cnt++;
//                     if(cnt==count/2){
//                         a=curr->data;
//                     }
//                     if(cnt==count/2+1){
//                         b=curr->data;
//                         break;
//                     }
//                 curr=curr->right;
//             }
//             else{
//                 Node* pred=curr->left;
//                 while(pred->right && pred->right!=curr){
//                     pred=pred->right;
//                 }
//                 if(pred->right==NULL){
//                     pred->right=curr;
//                     curr=curr->left;
//                 }
//                 else{
//                     pred->right=NULL;
//                     cnt++;
//                     if(cnt==count/2){
//                         a=curr->data;
//                     }
//                     if(cnt==count/2+1){
//                         b=curr->data;
//                         break;
//                     }
//                     curr=curr->right;
//                 }
//             }
//         }
//         ans=float((a+b)/2);
//     }
//     else{
//            float a;
//         int cnt=0;
//          Node* curr=root;
//         while(curr!=NULL){
//             if(!curr->left){
//                     cnt++;
//                     if(cnt==count/2+1){
//                         a=curr->data;
//                         break;
//                     }
//                 curr=curr->right;
//             }
//             else{
//                 Node* pred=curr->left;
//                 while(pred->right && pred->right!=curr){
//                     pred=pred->right;
//                 }
//                 if(pred->right==NULL){
//                     pred->right=curr;
//                     curr=curr->left;
//                 }
//                 else{
//                     pred->right=NULL;
//                     cnt++;
//                     if(cnt==count/2+1){
//                         a=curr->data;
//                         break;
//                     }
//                     curr=curr->right;
//                 }
//             }
//         }
//         ans=float(a);
//     }
//     return ans;
// }



// //Q. brothers from two root
//  void inorder(Node* root,vector<int>& v){
//         if(root==NULL) return;
        
//         inorder(root->left,v);
//         v.push_back(root->data);
//         inorder(root->right,v);
//     }
//   public:
//     int countPairs(Node* root1, Node* root2, int x) {
//         vector<int> in1;
//         vector<int> in2;
//         inorder(root1,in1);
//         inorder(root2,in2);
        
//         int i=0;
//         int j=in2.size()-1;
        
//         int cnt=0;
//         while(i<in1.size() && j>=0){
//             int sum=in1[i]+in2[j];
//             if(sum==x){
//                 cnt++;
//                 j--;
//             }
//             else if(sum<x){
//                 i++;
//             }
//             else{
//                 j--;
//             }
//         }
//         return cnt;
//     }



// //Q. Min dist b/w two nodes in B.T.
//  void distance(Node* root,int x,bool& state,int& dist){
//         if(root==NULL) return;
//         if(root->data==x){
//             state=true;
//             return;
//         }
        
//         if(state==false){
//             distance(root->left,x,state,dist);
//             if(state==false)
//             distance(root->right,x,state,dist);
//         }
//         if(state==true){
//             dist++;
//         }
//     }
//     Node* solve(Node* root,int a,int b){
//         if(root==NULL) return NULL;
//         if(root->data==a) {return root;}
//         if(root->data==b) {return root;}
        
//         Node* left=solve(root->left,a,b);
//         Node* right=solve(root->right,a,b);
        
//         if(!left && !right) return NULL;
//         else if(!left && right) return right;
//         else if(left && !right) return left;
//         else{
//             return root;
//         }
//     }
//   public:
//     int findDist(Node* root, int a, int b) {
//        bool state1=false,state2=false;
//        Node* lca=solve(root,a,b);
       
//        int dist1=0,dist2=0;
//        distance(lca,a,state1,dist1);
//        distance(lca,b,state2,dist2);
       
//        return dist1+dist2;
        
//     }



// //Q. min dist between bst nodes values
//  int minDiffInBST(TreeNode* root) {
//         int ans=INT_MAX;
//         vector<int> v;
//         TreeNode* curr=root;
//         while(curr!=NULL){
//             if(!curr->left){
//                v.push_back(curr->val);
//                 curr=curr->right;
//             }
//             else{
//                 TreeNode* pred=curr->left;
//                 while(pred->right && pred->right!=curr){
//                     pred=pred->right;
//                 }
//                 if(pred->right==NULL){
//                     pred->right=curr;
//                     curr=curr->left;
//                 }
//                 else{
//                     pred->right=NULL;
//                   v.push_back(curr->val);
//                     curr=curr->right;
//                 }
//             }
//         }

//         for(int i=1;i<v.size();i++){
//             ans=min(ans,abs(v[i]-v[i-1]));
//         }
//         return ans;
//     }



// //Q. recover bst
//  void recoverTree(TreeNode* root) {
//         if(!root) return;
//         TreeNode* prev=NULL;
//         TreeNode* first=NULL;
//         TreeNode* mid=NULL;
//         TreeNode* last=NULL;

//         TreeNode* curr=root;
//         while(curr){
//             if(!curr->left){
//                if(prev && prev->val>curr->val){
//                 if(!first)
//                 {first=prev;
//                 mid=curr;}
//                 else{
//                     last=curr;
//                 }
//                }
//                prev=curr;
//                curr=curr->right;
//             }
//             else{
//                 TreeNode* pred=curr->left;
//                 while(pred->right && pred->right!=curr){
//                     pred=pred->right;
//                 }

//                 if(pred->right==NULL){
//                     pred->right=curr;
//                     curr=curr->left;
//                 }
//                 else{
//                 pred->right=NULL;
//                  if(prev && prev->val>curr->val){
//                 if(!first)
//                 {first=prev;
//                 mid=curr;}
//                 else{
//                     last=curr;
//                 }
//                }
//                prev=curr;
//                curr=curr->right;

//                 }
//             }
//         }
//         if(last){
//             swap(first->val,last->val);
//         }
//         else{
//             swap(first->val,mid->val);
//         }
//     }