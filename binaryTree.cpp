// binary tree terms:-
//  1. Root
//  2. Children
//  3. Parent
//  4. Siblings
//  5. Ancestor
//  6. Descendant
//  7. Leaf

#include <iostream>
#include <queue>
#include<vector>
#include<stack>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

public:
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTrav(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!(q.empty()))
    {
        node *temp = q.front();
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

void ReverseLevOrder(node* root){
    queue<node*> q;
    stack<node*> s;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        s.push(temp);
        if(temp==NULL){
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else
       { if(temp->right!=NULL){
            q.push(temp->right);
        }
        if(temp->left!=NULL){
            q.push(temp->left);
        }}

    }
    while(!s.empty()){
        node* temp=s.top();
        s.pop();
        if(temp==NULL){
            cout<<endl;
        }
        else 
        cout<<temp->data<<" ";
    }
}
// L.N.R
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// N.L.R
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    inorder(root->left);
    inorder(root->right);
}

// L.R.N
void postOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    inorder(root->right);
    cout << root->data << " ";
}

void buildfromLevlorder(node* &root){
    queue<node*> q;
    cout<<"Enter a data for root: ";
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!(q.empty())){
        node* temp=q.front();
        q.pop();

        cout<<"Enter left node for: "<<temp->data;
        int leftData;
        cin>>leftData;
        if(leftData!= -1){
            temp->left=new node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter right node for: "<<temp->data;
        int rightData;
        cin>>rightData;
        if(rightData!= -1){
            temp->right=new node(rightData);
            q.push(temp->right);
        }

    }
}
int main()
{
    node *root = NULL;
    root = buildTree(root);
    // // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
   //  levelOrderTrav(root);

    // inorder(root);
    // cout << endl
    //      << endl;
    // preorder(root);
    // cout << endl
    //      << endl;
    // postOrder(root);

   // buildfromLevlorder(root);
    ReverseLevOrder(root);

    //Q. count leaf Nodes
    
// void IOtrav(node<int> *root,int &count){
//     if(root==NULL){
//        return;
//     }
  
//     IOtrav(root->left,count);
//   if(root->left==NULL && root->right== NULL){
//       count++;
//   }
//     IOtrav(root->right,count);
  
//   }
  
//   int noOfLeafNodes(node<int> *root){
//      int count=0;
//      IOtrav(root,count);
//      return count;
//   }



// //Q. max depth
// int maxDepth(node* root) {
//     if(root==NULL){
//         return 0;
//     }
//     int depth=0;
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//         node* temp=q.front();
//         q.pop();
//         if(temp==NULL){
//             depth++;
//             if(!q.empty())
//             q.push(NULL);
//         }
//         else{
//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }
//         }
//     }
//     return depth;}

//alternate

// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//         if(root==NULL){
//             return 0;
//         }
//         int lh=maxDepth(root->left);
//         int rh=maxDepth(root->right);
        
//         return 1+max(lh,rh);
//     }
// };



// //Q. check if trees are identical
// void solve(node* p,node* q,bool& ans){
//     if(p==NULL && q==NULL){return;}
//    if(p==NULL || q==NULL || p->val!=q->val){ans=false;
//    return;}
//    solve(p->left,q->left,ans);
//    solve(p->right,q->right,ans);

// }

//     bool isSameTree(node* p, node* q) {
//         bool ans=true;
//         solve(p,q,ans);
//         return ans;
//     }




// //Q.SUM TREE
// void subtreeSum(node *root,int& sum){
// if(root==NULL){return;}

// subtreeSum(root->left,sum);
// sum+=root->data;
// subtreeSum(root->right,sum);
// }

// void solve(node *root,bool& ans){
// if(root==NULL || (root->right==NULL && root->left==NULL)){return;}

// solve(root->left,ans);
// solve(root->right,ans);
// int sum1=0;
// int sum2=0;
// subtreeSum(root->left,sum1);
// subtreeSum(root->right,sum2);
// if(root->data!=sum1+sum2){ans=false;
// return;}
// }
// bool isSumTree(node* root) {
// bool ans=true;
// solve(root,ans);
// return ans;
// }




//Q. Diameter of a binary tree
// int height(node* root,int& diameter){
//     if(!node){
//         return 0;
//     }
//     int lh=height(node->left,diameter);
//     int rh=height(node->right,diameter);
//     diameter=max(diameter,lh+rh);
//     return 1+max(lh,rh);
// }
// int diameterOfBinaryTree(node* root) {
//     int diameter=0;
//     height(root,diameter);
//     return diameter;
// }



// //Q. check balanced tree
// int maxDepth(node* root) {
// if(root==NULL){
//     return 0;
// }
// int depth=0;
// queue<node*> q;
// q.push(root);
// q.push(NULL);
// while(!q.empty()){
//     node* temp=q.front();
//     q.pop();
//     if(temp==NULL){
//         depth++;
//         if(!q.empty())
//         q.push(NULL);
//     }
//     else{
//         if(temp->left){
//             q.push(temp->left);
//         }
//         if(temp->right){
//             q.push(temp->right);
//         }
//     }
// }
// return depth;}
// void solve(node* root,bool& ans){
//     if(root==NULL){
//         return;
//     }
    
//     solve(root->left,ans);
//     solve(root->right,ans);
//     int h1=maxDepth(root->left);
//     int h2=maxDepth(root->right);
//     if(h1-h2>1 || h2-h1>1){
//         ans=false;
//         return;
//     }
// }
// bool isBalanced(node* root) {
//     bool ans=true;
//     solve(root,ans);
//     return ans;
// }




//Q.ZIG-ZAG
// vector<vector<int>> zigzagLevelOrder(node* root) {
//     vector<vector<int>> ans={};
//     int pointer=1;
//       if(root==NULL){return ans;}
//      vector<int> a;
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//         node* temp=q.front();
//         q.pop();
//         if(temp==NULL){
//             pointer++;
//             if(pointer%2!=0){
//                reverse(a);
//             }
//             ans.push_back(a);
//             a.clear();
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//       else{
//         a.push_back(temp->val);
//         if(temp->left){
//             q.push(temp->left);
//         }
//         if(temp->right){
//             q.push(temp->right);
//         }
//       }
//     }
//     return ans;
// }


// //ALTERNATE CODE
// vector<vector<int>> ans={};
// if(root==NULL){
//     return ans;
// }
// bool leftToright=true;
// queue<node*> q;
// q.push(root);
// while(!q.empty()){
//   int size=q.size();
//   vector<int> v(size);
//   for(int i=0;i<size;i++){
//     node* temp=q.front();
//     q.pop();
//     int index=leftToright?i:size-1-i;
//     v[index]=temp->val;
//     if(temp->left){
//         q.push(temp->left);
//     }
//      if(temp->right){
//         q.push(temp->right);
//     }
//   }
//   ans.push_back(v);
//   leftToright=!leftToright;
// }

// return ans;





// //Q. boudary traversal
// void traverseleft(node* root,vector<int>& ans){
//     if(root==NULL || (root->left==NULL and root->right==NULL)){
//         return;
//     }
//     ans.push_back(root->data);
//     if(root->left){
//         traverseleft(root->left,ans);
        
//     }
//     else{
//         traverseleft(root->right,ans);
//     }
// }

// void traverseleaf(node* root,vector<int>& ans){
//     if(root==NULL){return;}
//     if(root->left==NULL and root->right==NULL){
//         ans.push_back(root->data);
//         return;
//     }
//     traverseleaf(root->left,ans);
//       traverseleaf(root->right,ans);
// }

// void traverseright(node* root,vector<int>& ans){
//     if(root==NULL || (root->left==NULL and root->right==NULL)){
//         return;
//     }
//     if(root->right){
//         traverseright(root->right,ans);
//     }
//     else{
//         traverseright(root->left,ans);
//     }
//     ans.push_back(root->data);
// }
// public:
// vector<int> boundaryTraversal(node *root) {
//   vector<int> ans;
//   if(root==NULL){
//       return ans;
//   }
//   ans.push_back(root->data);
//   traverseleft(root->left,ans);
  
//   traverseleaf(root->left,ans);
//   traverseleaf(root->right,ans);
  
//   traverseright(root->right,ans);
//   return ans;
// }




// //Q. Vertical order trvaersal
// vector<vector<int>> verticalTraversal(TreeNode* root) {
//     vector<vector<int>> ans;
//     map<int, map<int, multiset<int>>> nodes; // {hd -> {lvl -> {values}}}
//     queue<pair<TreeNode*, pair<int, int>>> q; // {node, {hd, lvl}}
    
//     if (root == NULL) return ans;
    
//     q.push({root, {0, 0}});
    
//     while (!q.empty()) {
//         auto temp = q.front();
//         q.pop();
        
//         TreeNode* frontNode = temp.first;
//         int hd = temp.second.first;  // Horizontal Distance
//         int lvl = temp.second.second; // Level
        
//         nodes[hd][lvl].insert(frontNode->val); // Store in multiset (auto sorted)
        
//         if (frontNode->left)
//             q.push({frontNode->left, {hd - 1, lvl + 1}});
//         if (frontNode->right)
//             q.push({frontNode->right, {hd + 1, lvl + 1}});
//     }
    
//     // Convert map to ans (sorted automatically by hd and lvl)
//     for (auto i : nodes) {  // Iterate over horizontal distances
//         vector<int> col;
//         for (auto j : i.second) {  // Iterate over levels
//             col.insert(col.end(), j.second.begin(), j.second.end()); // Insert sorted values
//         }
//         ans.push_back(col);
//     }
    
//     return ans;
// }


//Q.top view
//  vector<int> topView(Node *root) {
//         vector<int> ans;
//         if(root==NULL)
//         return ans;
        
//         map<int,int> nodes;
//         queue<pair<Node*,int>> q;
//         q.push(make_pair(root,0));
        
//         while(!q.empty()){
//             pair<Node*,int> temp=q.front();
//             q.pop();
            
//             Node* frontNode=temp.first;
//             int hd=temp.second;
            
//             if(!nodes[hd]){
//                 nodes[hd]=frontNode->data;
//             }
            
//             if(frontNode->left){
//                 q.push(make_pair(frontNode->left,hd-1));
//             }
//              if(frontNode->right){
//                 q.push(make_pair(frontNode->right,hd+1));
//             }
//         }
//         for(auto i:nodes){
//             ans.push_back(i.second);
//         }
        
//         return ans;
//     }


// //Q. bottom view
// vector<int> bottomView(Node *root) {
//         vector<int> ans;
//         if(root==NULL)
//         return ans;
        
//         map<int,int> nodes;
//         queue<pair<Node*,int>> q;
//         q.push(make_pair(root,0));
        
//         while(!q.empty()){
//             pair<Node*,int> temp=q.front();
//             q.pop();
            
//             Node* front=temp.first;
//             int hd=temp.second;
            
//             nodes[hd]=front->data;
            
//             if(front->left){
//                 q.push(make_pair(front->left,hd-1));
//             }
//             if(front->right){
//                 q.push(make_pair(front->right,hd+1));
//             }
//         }
        
//         for(auto i:nodes){
//             ans.push_back(i.second);
//         }
//         return ans;
        
//     }


// //Q.left view
// vector<int> leftView(Node *root) {
//         vector<int> ans;
//         if(root==NULL)
//         return ans;
        
//         map<int,int> nodes;
//         queue<pair<Node*,int>> q;
//         q.push(make_pair(root,0));
        
//         while(!q.empty()){
//             pair<Node*,int> temp=q.front();
//             q.pop();
            
//             Node* frontNode=temp.first;
//             int lvl=temp.second;
            
//             if(!nodes[lvl])
//             nodes[lvl]=frontNode->data;
            
//             if(frontNode->left)
//             q.push(make_pair(frontNode->left,lvl+1));
            
//             if(frontNode->right)
//             q.push(make_pair(frontNode->right,lvl+1));
//         }
        
//         for(auto i:nodes){
//             ans.push_back(i.second);
//         }
//         return ans;
//     }


// //Q. sum of nodes in longest path
// void solve(Node* root,pair<int,int>& ans,pair<int,int> &temp){
//         if(root==NULL){
//             if(ans.second<temp.second){
//                 ans.first=temp.first;
//                 ans.second=temp.second;
//             }
//             if(ans.second==temp.second){
//                 ans.first=max(ans.first,temp.first);
//             }
//             return;
//         }
//         temp.first+=root->data;
//         temp.second+=1;
//         solve(root->left,ans,temp);
//         solve(root->right,ans,temp);
//         temp.first-=root->data;
//         temp.second-=1;
//     }
//   public:
//     int sumOfLongRootToLeafPath(Node *root) {
//         pair<int,int> ans(0,0);
//         pair<int,int> temp(0,-1);
//         solve(root,ans,temp);
//         return ans.first;
//     }


// //Q. LCA of tree
//  TreeNode* solve(TreeNode* root, TreeNode* p, TreeNode* q){
//         if(root==NULL){
//             return NULL;
//         }
//         if(root==p){
//             return p;
//         }
//         if(root==q){
//             return q;
//         }

//         TreeNode* left=solve(root->left,p,q);
//         TreeNode* right=solve(root->right,p,q);

//         if(left==NULL && right==NULL)
//         return NULL;

//         else if(left==NULL && right!=NULL)
//         return right;

//         else if(left!=NULL && right==NULL)
//         return left;

//        else
//         return root;
//     }
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root==NULL)
//         return NULL;

//         TreeNode* ans=solve(root,p,q);
//         return ans;
//     }


//Q. k sum paths
// void solve(TreeNode* root,int& ans,vector<int> path,int k){
//         if(root==NULL)
//         return;

//         path.push_back(root->val);
//         solve(root->left,ans,path,k);
//         solve(root->right,ans,path,k);

//         long long int sum=0;
//         for(int i=path.size()-1;i>=0;i--){
//             sum+=path[i];
//             if(sum==k){
//                 ans++;
//             }
//         }
//         path.pop_back();
//     }
// public:
//     int pathSum(TreeNode* root, int targetSum) {
//         vector<int> path;
//         int ans=0;
//         solve(root,ans,path,targetSum);
//         return ans;
//     }


// //Q. kth ancestor of a tree
//  void solve(Node* root,int& ans,int& cnt,int k,int node,bool &state){
//         if(root==NULL)
//         return;
//         if(root->data==node){
//             state=true;
//             return;
//         }
//         if(state==false){
//             solve(root->left,ans,cnt,k,node,state);
//             if(state==false)
//             solve(root->right,ans,cnt,k,node,state);
//         }
        
//         if(state==true){
//             cnt++;
//             if(cnt==k)
//             ans=root->data;
//         }
        
//     }
//   public:
//     int kthAncestor(Node *root, int k, int node) {
//         int ans=-1;
//         int cnt=0;
//         bool state=false;
//         solve(root,ans,cnt,k,node,state);
//         return ans;
//     }


// //Q. max sum of non adjacent nodes [d.p. on tree]
// int solve(Node* root,unordered_map<Node*,int>& dp){
//         if(root==NULL)
//         return 0;
        
//         if(root->left==NULL && root->right==NULL){
//             return root->data;
//         }
        
//         if(dp[root]){
//             return dp[root];
//         }
        
//         int firstSum=root->data;
//         if(root->left) firstSum+=solve(root->left->left,dp);
//         if(root->left) firstSum+=solve(root->left->right,dp);
//         if(root->right) firstSum+=solve(root->right->left,dp);
//         if(root->right) firstSum+=solve(root->right->right,dp);
        
//         int secondSum=0;
//         if(root->left)
//         {
//             secondSum=root->left->data;
//             if(root->right) secondSum+=solve(root->right,dp);
//             if(root->left->left) secondSum+=solve(root->left->left->left,dp);
//             if(root->left->left) secondSum+=solve(root->left->left->right,dp);
//             if(root->left->right) secondSum+=solve(root->left->right->left,dp);
//             if(root->left->right)secondSum+=solve(root->left->right->right,dp);
//         }
        
//         int thirdSum=0;
//           if(root->right)
//         {
//              thirdSum=root->right->data;
//             if(root->left) thirdSum+=solve(root->left,dp);
//             if(root->right->left) thirdSum+=solve(root->right->left->left,dp);
//             if(root->right->left) thirdSum+=solve(root->right->left->right,dp);
//             if(root->right->right) thirdSum+=solve(root->right->right->left,dp);
//             if(root->right->right) thirdSum+=solve(root->right->right->right,dp);
//         }
        
//         return dp[root]=max(firstSum,max(secondSum,thirdSum));
//     }
//   public:
//     int getMaxSum(Node *root) {
//        unordered_map<Node*,int> dp;
//         return solve(root,dp);
//     }

//Q. construct a tree using preOrder and inorder
// int findPosition(vector<int> inorder,int element){
//     for(int i=0;i<inorder.size();i++){
//         if(inorder[i]==element){
//             return i;
//         }
//     }
//     return -1;
// }
// node* solve(vector<int> preorder, vector<int> inorder,int& preorderIndex,int s,int e){
//     if(preorderIndex>=preorder.size() || s>e){
//         return NULL;
//     }

//     int element=preorder[preorderIndex++];
//     node* temp=new node(element);
//     int position=findPosition(inorder,element);
//     temp->left=solve(preorder,inorder,preorderIndex,s,position-1);
//      temp->right=solve(preorder,inorder,preorderIndex,position+1,e);

// return temp;
// }
// node* buildTree(vector<int>& preorder, vector<int>& inorder) {
//     int preorderIndex=0;
//    node* ans=solve(preorder,inorder,preorderIndex,0,inorder.size()-1);
//     return ans;
// }





// //Q. construct a tree using inorder and postorder traversal
// int findposition(vector<int> inorder,int element){
//         for(int i=0;i<inorder.size();i++){
//             if(inorder[i]==element){
//                 return i;
//             }
//         }
//         return -1;
//     }
//     TreeNode* solve(vector<int> inorder, vector<int> postorder,int &index,int n,int inorderStart,int inorderEnd){
//         if(index<0 or inorderStart>inorderEnd){
//             return NULL;
//         }
//         int element=postorder[index--];
//         int position=findposition(inorder,element);
//         TreeNode* root=new TreeNode(element);

//         root->right=solve(inorder,postorder,index,n,position+1,inorderEnd);
//         root->left=solve(inorder,postorder,index,n,inorderStart,position-1);

//         return root;
//     }
// public:
//     TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//         int index=postorder.size()-1;
//         int n=inorder.size();
//         TreeNode* ans=solve(inorder,postorder,index,n,0,n-1);
//         return ans;
//     }




// //Q. burn tree
//   Node* returnTarget(Node* root,int target){
//         if(root==NULL)
//         return NULL;
        
//         if(root->data==target)
//         return root;
//         Node* left=returnTarget(root->left,target);
//         Node* right=returnTarget(root->right,target);
        
//         if(left==NULL && right==NULL)
//         return NULL;
        
//         else if(left==NULL && right!=NULL)
//         return right;
        
//         else if(left!=NULL && right==NULL)
//         return left;
        
//     }
//     void mapping(Node*root,map<Node*,Node*>& childToparent){
//         if(root==NULL or (root->left==NULL && root->right==NULL)) return;
        
//         childToparent[root->left]=root;
//         childToparent[root->right]=root;
        
//         mapping(root->left,childToparent);
//         mapping(root->right,childToparent);
//     }
//   public:
//     int minTime(Node* root, int target) {
//         if(root==NULL or (root->left==NULL && root->right==NULL)) return 0;
        
//         queue<Node*> q;
//         map<Node*,Node*> childToparent;
//         mapping(root,childToparent);
//         map<Node*,bool> burnt;
//         int time=0;
//         Node* targetNode=returnTarget(root,target);
//         q.push(targetNode);
//         burnt[targetNode]=true;
        
//         while(!q.empty()){
//            int size=q.size();
//            bool flag=false;
//            for(int i=1;i<=size;i++){
//                Node* front=q.front();
//                q.pop();
               
//              if(front->left && !burnt[front->left]){
//                 q.push(front->left);
//                 burnt[front->left]=true;
//                 flag=true;
//             }
//             if(front->right && !burnt[front->right]){
//                 q.push(front->right);
//                 burnt[front->right]=true;
//                 flag=true;
//             }
//             if(childToparent[front] && !burnt[childToparent[front]]){
//                 q.push(childToparent[front]);
//                 burnt[childToparent[front]]=true;
//                 flag=true;
//             }
//            }
//            if(flag)
//            time++;
//         }
        
//         return time;
//     }



//Q. Morris traversal
//  vector<int> inorderTraversal(TreeNode* root) {
//        vector<int> ans;
//        TreeNode* curr=root;
//        while(curr!=NULL){
//         if(!curr->left){
//             ans.push_back(curr->val);
//             curr=curr->right;
//         }
//         else{
//             TreeNode* pred=curr->left;
//             while(pred->right && pred->right!=curr){
//                 pred=pred->right;
//             }
//             if(pred->right==NULL){
//                 pred->right=curr;
//                 curr=curr->left;
//             }
//            else{
//                 pred->right=NULL;
//                 ans.push_back(curr->val);
//                 curr=curr->right;
//             }
//         }
//        } 

//        return ans;
//     }


// //Q. flatten a tree into linked list
// void flatten(TreeNode* root) {
//         TreeNode* curr=root;
//         while(curr!=NULL){
//             if(curr->left){
//                 TreeNode* pred=curr->left;
//                 while(pred->right){
//                     pred=pred->right;
//                 }
//                 pred->right=curr->right;
//                 curr->right=curr->left;
//                 curr->left=NULL;
//             }
//             curr=curr->right;
//         }
// }


// //Q. diagonal trav
// void solve( map<int,vector<int>> &nodes,Node* root,int hd,int lvl){
//         if(root==NULL) return;
        
//         solve(nodes,root->left,hd-1,lvl+1);
//         nodes[lvl-hd].push_back(root->data);
//         solve(nodes,root->right,hd+1,lvl+1);
        
//     }
//   public:
//     vector<int> diagonal(Node *root) {
//        map<int,vector<int>> nodes;
//         int hd=0,lvl=0;
//         solve(nodes,root,hd,lvl);
       
//        vector<int> ans;
       
//        for(auto i:nodes){
//            for(auto j:i.second){
//                ans.push_back(j);
//            }
//        }
       
//        return ans;
        
//     }


// //Q. check if all leaf nodes are at same lvl
//  int height(Node* root){
//         if(root==NULL) return 0;
        
//         int lh=height(root->left);
//         int rh=height(root->right);
        
//         return 1+max(lh,rh);
//     }
//     bool solve(Node* root,int lvl,int h){
//         if(root==NULL) return true;
//         if(root->left==NULL && root->right==NULL){
//             if(lvl==h) return true;
//             else return false;
//         }
        
//         bool left=solve(root->left,lvl+1,h);
//         bool right=solve(root->right,lvl+1,h);
        
//         if(left==false or right==false) return false;
//         else return true;
//     }
//   public:
//     bool check(Node *root) {
//         if(root==NULL) return true;
//       int h=height(root);
//       return solve(root,1,h);
//     }