#include <iostream>
#include<queue>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size++;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
            cout << endl;
        }
    }


    void deletefromHeap(){
        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return;
        }
        arr[1]=arr[size];
        size--;

        //take root node to its correct position
        int i=1;
        while(i<size){
            int leftIndex=2*i;
            int rightIndex=2*i+1;

            if(leftIndex<size && arr[i]<arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i=leftIndex;
            }
            else if(rightIndex<size && arr[i]<arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }
            else{
                return;
            }
        }
    }
};


void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<=n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<=n && arr[largest]<arr[right]){
        largest=right;
    }

    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}




void heapSort(int* arr,int n){
    int size=n;
    while(size>1){
        //swap
        swap(arr[size],arr[1]);
        size--;
        heapify(arr,size,1);
    }
}
int main()
{
    // heap h;
    // h.insert(50);
    // h.insert(55);
    // h.insert(53);
    // h.insert(52);
    // h.insert(54);
    // h.print();
    // h.deletefromHeap();
    // h.print();

    // int arr[6]={-1,54,53,55,52,50};
    // int n=5;
    // for(int i=n/2;i>0;i--){
    //     heapify(arr,n,i);
    // }
    // cout<<"printing the array now"<<endl;
    // for(int i=1;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }



//     //Heap sort
// int nums[6]={-1,3,5,8,6,9};
// for(int i=2;i>=1;i--){
//     heapify(nums,5,i);
// }
// heapSort(nums,5);
//     for(int i=1;i<6;i++){
//         cout<<nums[i]<<" ";
//     }

//     cout<<endl;
//     cout<<"Using priority queue "<<endl;
//     //max-heap
//     priority_queue<int> pq;
//     pq.push(4);
//     pq.push(2);
//     pq.push(5);
//     pq.push(3);
//     cout<<"element at top : "<<pq.top()<<endl;
//     pq.pop();
//     cout<<"element at top : "<<pq.top()<<endl;
//     cout<<"size is: "<<pq.size()<<endl;


//     //min-heap
//     priority_queue<int,vector<int>,greater<int>> minheap;
//     minheap.push(4);
//     minheap.push(2);
//     minheap.push(5);
//     minheap.push(3);
//     cout<<"element at top : "<<minheap.top()<<endl;
//     minheap.pop();
//     cout<<"element at top : "<<minheap.top()<<endl;
//     cout<<"size is: "<<minheap.size()<<endl;



//Q. kth smallest element in an array
// int kthSmallest(vector<int> &arr, int k) {
//     priority_queue<int> heap;
//     for(int i=0;i<k;i++){
//         heap.push(arr[i]);
//     }
//     for(int i=k;i<arr.size();i++){
//         if(arr[i]<heap.top()){
//             heap.pop();
//             heap.push(arr[i]);
//         }
//     }
    
//     return heap.top();



//Q. kth largest element in array
// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         priority_queue<int,vector<int>,greater<int>> minheap;
//         for(int i=0;i<k;i++){
//             minheap.push(nums[i]);
//         }

//         for(int i=k;i<nums.size();i++){
//             if(nums[i]>minheap.top()){
//                 minheap.pop();
//                 minheap.push(nums[i]);
//             }
//         }

//         int ans=minheap.top();
//         return ans;
//     }



//Q. check completeness of a binary tree

// bool checkNULL(vector<TreeNode*> v,int i){
//     for(int j=i;j<v.size();j++){
//         if(v[j]!=NULL){
//             return false;
//         }
//     }
//     return true;
// }
// bool isCompleteTree(TreeNode* root) {
//    vector<TreeNode*> v;
//    bool flag;
//    v.push_back(root);
//    int i=0;
//    while(i<v.size()){
//     TreeNode* temp=v[i];
//     i++;
//     if(temp==NULL){
//         flag=checkNULL(v,i);
//         break;
//     }
//     v.push_back(temp->left);
//     v.push_back(temp->right);
//    }
//    return flag;
// }




// //Q. is binary tree heap
// bool checkNULL(vector<Node*> v,int i){
//     for(int j=i;j<v.size();j++){
//         if(v[j]!=NULL){
//             return false;
//         }
//     }
//     return true;
// }

// bool completeness(struct Node* root){
//     vector<Node*> v;
//    bool flag;
//    v.push_back(root);
//    int i=0;
//    while(i<v.size()){
//     Node* temp=v[i];
//     i++;
//     if(temp==NULL){
//         flag=checkNULL(v,i);
//         break;
//     }

//     v.push_back(temp->left);
//     v.push_back(temp->right);
//    }

//    return flag;
// }

// bool maxHeap(struct Node* root){
// if(root->left==NULL and root->right==NULL){
//     return true;
// }
// if(root->right==NULL){
// return (root->data > root->left->data);
// }

// else{
//     bool left=maxHeap(root->left);
//     bool right=maxHeap(root->right);
    
//     return (left && right && root->data>root->left->data && root->data > root->right->data);
// }

// }
// bool isHeap(struct Node* tree) {
//      vector<Node*> v;
    
//         if(completeness(tree) && maxHeap(tree)){
//             return true;
//         }
        
//         else{
//             return false;
//         }
// }





//Q. merge two binary heaps

// void heapify(vector<int>& v,int i){
//     int temp=i;
//     int left=2*i+1;
//     int right=2*i+2;
//     if(left<v.size() && v[left]>v[temp]){
//         temp=left;
//     }
//     if(right<v.size() && v[right]>v[temp]){
//         temp=right;
//     }
//     if(i!=temp){
//         swap(v[i],v[temp]);
//         heapify(v,temp);
//     }
// }
// vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
//     for(int i=0;i<b.size();i++){
//         a.push_back(b[i]);
//     }
    
//     for(int i=n+m/2 ;i>=0;i--){
//         heapify(a,i);
//     }
    
//     return a;
// }




//Q. minimum cost of ropes
// int minCost(vector<int>& arr) {
//     int ans=0;
//     priority_queue<int,vector<int>,greater<int>> pq;
//     for(int i=0;i<arr.size();i++){
//         pq.push(arr[i]);
//     }
//     while(pq.size()>1){
//         int first=pq.top();
//         pq.pop();
//         int second=pq.top();
//         pq.pop();
//         int sum=first+second;
//         ans+=sum;
//         pq.push(sum);
//     }
    
//     return ans;
// }



// //Q. BST to minheap
// void solve(BinaryTreeNode* root,vector<int>& inorder){
// 	if(root==NULL) return;

// 	solve(root->left,inorder);
// 	inorder.push_back(root->data);
// 	solve(root->right,inorder);
// }
// void preorder(BinaryTreeNode* root,vector<int> inorder,int& ind){
// 	if(root==NULL or ind>=inorder.size()) return;

// 	root->data=inorder[ind++];
// 	preorder(root->left,inorder,ind);
// 	preorder(root->right,inorder,ind);
// }
// BinaryTreeNode* convertBST(BinaryTreeNode* root)
// {
// 	vector<int> inorder;
// 	solve(root,inorder);
// 	int index=0;
// 	preorder(root,inorder,index);
// 	return root;
// }



//Q.Kth largest subarray sum
// int getKthLargest(vector<int> &arr, int k)
// {
// 	vector<int> sum;
// 	int tempSum=0;
// 	for(int i=0;i<arr.size();i++){
// 		tempSum=0;
// 		for(int j=i;j<arr.size();j++){
// 			tempSum+=arr[j];
// 			sum.push_back(tempSum);
// 		}
// 	}

// 	sort(sum.begin(),sum.end());
// 	return sum[sum.size()-k];
// }


//More optimised
// int getKthLargest(vector<int> &arr, int k)
// {priority_queue<int,vector<int>,greater<int>> pq;
// int n=arr.size();
// int sum=0;
// for(int i=0;i<n;i++){
// 	sum=0;
// 	for(int j=i;j<n;j++){
// 		sum+=arr[j];
// 		if(pq.size()<k){
// 			pq.push(sum);
// 		}
// 		else{
// 			if(sum>pq.top()){
// 				pq.pop();
// 				pq.push(sum);
// 			}
// 		}
// 	}
// }

// return pq.top();
// }




//Q. Merge k sorted arrays
// class node{
//   public:
//   int data;
//   int i;
//   int j;
//   node(int data,int row,int col){
//       this->data=data;
//       this->i=row;
//       this->j=col;
//   }
// };

// class compare{
//     public:
//     bool operator()(node* a,node* b){
//         return a->data > b->data;
//     }
// };
//     vector<int> mergeKArrays(vector<vector<int>> arr, int K)
//     {
//         priority_queue<node*,vector<node*>,compare> q;
        
//         for(int i=0;i<K;i++){
//             node* temp=new node(arr[i][0],i,0);
//             q.push(temp);
//         }
//         vector<int> ans;
//         while(q.size()>0){
//             node* temp=q.top();
//             ans.push_back(temp->data);
//             q.pop();
//             int i=temp->i;
//             int j=temp->j;
//             if(j+1<arr[0].size()){
//                 node* next=new node(arr[i][j+1],i,j+1);
//                 q.push(next);
//             }
//         }
//         return ans;
//     }





//Q. merge k sorted lists
// ListNode* mergeKLists(vector<ListNode*>& lists) {
//     priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>> pq;
//     for(int i=0;i<lists.size();i++){
//         if(lists[i]){
//             pq.push(make_pair(lists[i]->val,lists[i]));
//         }
//     }
//     ListNode* dummyNode=new ListNode(-1);
//     ListNode* temp=dummyNode;
//     while(pq.size()>0){
//         pair<int,ListNode*> p=pq.top();
//         pq.pop();
//         if(p.second->next){
//             pq.push(make_pair(p.second->next->val,p.second->next));
//         }
//         temp->next=p.second;
//         temp=temp->next;
//     }

//     return dummyNode->next;
// }




// //Q. smallest range in k lists
// class node{
//     public:
//     int data;
//     int row;
//     int col;
//     node(int data,int row,int col){
//         this->data=data;
//         this->row=row;
//         this->col=col;
//     }
//     };
//     class compare{
//     public:
//     bool operator()(node* a,node* b){
//         return a->data > b->data;
//     }
//     };
//     int kSorted(vector<vector<int>> &a, int k, int n) {
//             priority_queue<node*,vector<node*>,compare> pq;
//     int mini=INT_MAX,maxi=INT_MIN;
//             for(int i=0;i<k;i++){
//                 int element=a[i][0];
//                 mini=min(mini,element);
//                 maxi=max(maxi,element);
//                 node* temp=new node(element,i,0);
//                 pq.push(temp);
//             }
//             int start=mini,end=maxi;
//             while(!pq.empty()){
//                 node* temp=pq.top();
//                 pq.pop();
//                 mini=temp->data;
//                 if(maxi-mini < end-start){
//                     start=mini;
//                     end=maxi;
//                 }
//                 if(temp->col+1<n){
//                     maxi=max(maxi,a[temp->row][temp->col+1]);
//                     pq.push(new node(a[temp->row][temp->col+1],temp->row,temp->col+1));
//                 }
//                 else{
//                     break;
//                 }
//             }
//             return end-start+1;
//     }






// //Q. Median in a stream
// int signum(int a,int b){
// 	if(a==b)return 0;
// 	else if(a>b)return 1;
// 	else return -1;
// }

// void callmedian(int element,priority_queue<int>& maxHeap,
// 	priority_queue<int,vector<int>,greater<int>>& minHeap,int& median){
// 		switch(signum(maxHeap.size(),minHeap.size())){
// 			case 0:
// 			if(element>median){
// 				minHeap.push(element);
// 				median=minHeap.top();
// 			}
// 			else{
// 				maxHeap.push(element);
// 				median=maxHeap.top();
// 			}
// 			break;
// 			case 1:
// 			if(element>median){
// 				minHeap.push(element);
// 				median=(minHeap.top()+maxHeap.top())/2;
// 			}
// 			else{
// 				minHeap.push(maxHeap.top());
// 				maxHeap.pop();
// 				maxHeap.push(element);
// 				median=(minHeap.top()+maxHeap.top())/2;
// 			}
// 			break;
// 			case -1:
// 			if(element>median){
// 				maxHeap.push(minHeap.top());
// 				minHeap.pop();
// 				minHeap.push(element);
// 				median=(minHeap.top()+maxHeap.top())/2;
// 			}
// 			else{
// 				maxHeap.push(element);
// 				median=(minHeap.top()+maxHeap.top())/2;
// 			}
// 			break;
// 		}
// 	}
// vector<int> findMedian(vector<int> &arr, int n){
// 	vector<int> ans;
// 	priority_queue<int> maxHeap;
// 	priority_queue<int,vector<int>,greater<int>> minHeap;
// 	int median=0;
// 	for(int i=0;i<n;i++){
// 		callmedian(arr[i],maxHeap,minHeap,median);
// 		ans.push_back(median);
// 	}
// 	return ans; 
// }



// //Q. Convert minHeap to maxHeap
//     void heapify(vector<int> &arr,int N,int i){
//         int ele=i;
//         int leftChild=2*i+1;
//         int rightChild=2*i+2;
        
//         if(leftChild<N && arr[ele]<arr[leftChild]){
//             ele=leftChild;
//         }
//         if(rightChild<N && arr[ele]<arr[rightChild]){
//             ele=rightChild;
//         }
        
//         if(ele!=i){
//             swap(arr[ele],arr[i]);
//             heapify(arr,N,ele);
//         }
//     }
//   public:
//     void convertMinToMaxHeap(vector<int> &arr, int N) {
//         for(int i=N/2-1;i>=0;i--){
//             heapify(arr,N,i);
//         }
//     }



// //Q. kth smallest in a matrix
// class node{
// public:
// int row;
// int col;
// int val;
// public:
// node(int i,int j,int d){
//     this->row=i;
//     this->col=j;
//     this->val=d;
// }
// };

// class cmp{
// public:
// bool operator()(node* a,node* b){
//     return a->val>b->val;
// }
// };

// class Solution {
// public:
//     int kthSmallest(vector<vector<int>>& matrix, int k) {
//         priority_queue<node*,vector<node*>,cmp> minheap;
//         int n=matrix.size();

//         for(int i=0;i<n;i++){
//             node* temp=new node(i,0,matrix[i][0]);
//             minheap.push(temp);
//         }

//         int cnt=0;
//         int ans;
//         while(!minheap.empty()){
//             node* top=minheap.top();
//             minheap.pop();
//             cnt++;
//             int i=top->row;
//             int j=top->col;
//             int val=top->val;
//             if(cnt==k){
//                 ans=val;
//                 break;
//             }
//             if(j+1<n){
//                 node* temp=new node(i,j+1,matrix[i][j+1]);
//                 minheap.push(temp);
//             }
//         }

//         return ans;
//     }
// };
}