#include <iostream> // function calling itself
#include <vector>
using namespace std;
//  void print(int n){
// cout<<n<<endl;
// if(n>1)          // Q. print n to 1
// print(n-1);
//  }

// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }

// void print(int t,int n){
//     if(t<=n)
//     cout<<t<<endl;
//     print(t+1,n);           // Q. print 1 to n using extra parameter
// }
// int main(){
//     int n;
//     cin>>n;
//  print(1,n);
// }

// important**
// Q. print n to 1 without using extra parameter

//  void print(int n){
//  if(n>1)        //base case
// print(n-1);     //call  // things get reversed if we split call & work
// cout<<n<<endl;  //work
//  }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }

// void sum(int n){
// int S=0;
// if(n==0) return;
// S=S+n;               // Q. print sum 1 to n(parameterised)
// sum(n-1);
// cout<<S;
//  }

// int main(){
//     int n;
//     cin>>n;
//     int S=0;
//     sum(n);
// }

// int sum(int n){
// if(n==1) return 1;                 // Q. print sum 1 to n(return type)
// return n + sum(n-1);
//  }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n);
// }

// int factorial(int n){       // factorial using recuraion
// if(n==1) return 1;
// else if(n==0) return 1;     // as we have used return type
// else return n*factorial(n-1);   // so now the func ended and it will go to negative
//  }
// int main(){
//     int n;
//     cin>>n;
//     cout<<factorial(n);
// }

// int power(int a,int b){
//  if(b==0) return 1;
// return a*power(a,b-1);          // power of a raised to b

//  }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<power(a,b);
// }

// nth term of fibonacci sequence

// int fibonacci(int n){
// if(n==1 || n==2) return 1;      // multiple calls
// return fibonacci(n-1) + fibonacci(n-2);
//  }
// int main(){
// int n;
//  cin>>n;
//     cout<<fibonacci(n);
// }

// Q. Count Ways To Reach The N-th Stairs
//  int countways(int n){
//  if(n<0){return 0;}
//  if(n==0){return 1;}
//  return countways(n-1)+countways(n-2);
//  }
//  int main(){
//    int n;
//    cin>>n;
//    cout<<countways(n);
//  }

// void say(string arr[],int n){
//  if(n==0){
//     return ;
//  }
//  say(arr,n/10);
//  int num=n%10;
// cout<<arr[num]<<"  ";
// }
// int main(){
//     //Q. say digits
//     int n;
//     cin>>n;
//     string arr[10]={"zero", "one", "two","three","four","five","six","seven","eight","nine"};
//     say(arr,n);
// }

// bool isSorted(int *arr,int size){
// if(size==0 or size==1){
//     return true;
// }
// if(arr[0]>arr[1]){
//     return false;
// }
// isSorted(arr+1,size-1);
// }

// int main(){
//     //check if an array is sorted
//  int arr[5]={2,4,7,8,9};
//  cout<<isSorted(arr,5);

// }

// int Sum(int* arr,int size,int sum){
//     if(size==0){
//         return 0;
//     }
//     if(size==1){
//         return sum;
//     }
//     sum=sum + (*(arr+1));
//     Sum(arr+1,size-1,sum);
// }
// int main(){
//     //  sum of array elements
//     int arr[10]={1,2,3,4,5,6,7,8,9,-1};
//     int size=10;
//      int sum=*arr;
//     cout<<Sum(arr,size,sum);
// }

// bool Search(int* arr,int key,int size){
// if(size==0)return false;
// if(arr[0]==key)return true;
// Search(arr+1,key,size-1);
// }
// int main(){
//     //  linear search
//     int arr[5]={2,6,4,7,8};
//     int key=88;
//    cout << Search(arr,key,5);
// }

// bool Search(int* arr,int k,int s,int e){
// if(s>e) {return false;}
// int mid=s+(e-s)/2;
// if(arr[mid]==k) {return true;}

// if(arr[mid>k]){
//     Search(arr,k,s,mid-1);
// }
// if(arr[mid<k]){
//     Search(arr,k,mid+1,e);
// }
// }
// int main(){
//              //binary search
// int arr[6]={1,2,4,6,8,9};
// int key=3;
// cout<<Search(arr,key,0,5);
// }

// reverse the string

// void reverse(string s,int i,int size){
// if(i>size-1-i){
//    cout<<s;
//    return;
// }
// swap(s[i],s[size-1-i]);
// reverse(s,i+1,s.size());

// }
// int main(){
//     string s="chirag";
//     reverse(s,0,s.size());
// }

// check palindrome

// bool checkPalindrome(string arr,int size,int i){
//   if(i>size-1-i){return true;}
//   if((arr[i])!=(arr[size-1-i])) return false;
//   if((arr[i])==(arr[size-1-i])){
//      return checkPalindrome(arr,size,i+1);}
// }
// int main(){
//     string s;
//     getline(cin,s);

//     cout<<checkPalindrome(s,s.size(),0);
// }

// //  FAST EXPO
// int fastExpo(int a,int b,int ans){
//    if(b==0) return ans ;
//    if(b&1){
//     ans=ans*a;
//     b-=1;
//    }
//    return fastExpo(a*a,b/2,ans);
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans=1;
//    cout<< fastExpo(a,b,ans);

// }

// BUBBLE SORT USING RECURSION

// void bubble(int* arr,int size){
// if(size==0 || size==1){return ;}
// int i=0;
// while(i<size-1){
// if(arr[i]>arr[i+1]){
//     swap(arr[i],arr[i+1]);
// }
// i++;
// }
//  bubble(arr,size-1);
// }
// int main(){
//     int arr[7]={45,67,69,11,12,0,21};
//    bubble(arr,7);
//    for(int i=0;i<7;i++){
//     cout<<arr[i]<<"  ";
//    }
// }

// insertion SORT USING RECURSION
// void insertionSort(int* nums,int size,int i){
//     if(i==size){for(int j=0;j<size;j++){
//         cout<<nums[j]<<" ";
//     }return;}
//     int store=nums[i];
//     int j=i-1;
//     while(j>=0 && store<nums[j]){
//         nums[j+1]=nums[j];
//         j--;
//     }
//     nums[j+1]=store;
//     return insertionSort(nums,size,i+1);

// }
// int main(){
//     int nums[6]={9,8,7,1,2,3};
//     insertionSort(nums,6,1);
// }

// merge sort O(nlogn):- time complexity  O(n):-space complexity
//  void merge(int* arr,int s,int mid,int e){
//      vector<int> temp;
//      int i=s;int j=mid+1;
//      while(i<=mid && j<=e){
//          if(arr[i]<=arr[j]){
//              temp.push_back(arr[i]);
//              i++;
//          }
//          else{
//              temp.push_back(arr[j]);
//              j++;
//          }
//      }
//      while(i<=mid){
//          temp.push_back(arr[i]);
//      }
//      while(j<=e){
//          temp.push_back(arr[j]);
//      }
//      for(int idx=0;idx<temp.size();idx++){
//          arr[idx+s]=temp[idx];
//      }

// }
// void mergeSort(int* arr,int s,int e){
//     if(s<e){
//     int mid=s+(e-s)/2;

//     mergeSort(arr,s,mid);
//     mergeSort(arr,mid+1,e);
//     merge(arr,s,mid,e);}
// }
// int main(){
//     int arr[8]={9,4,6,1,2,11,5,3};
//     mergeSort(arr,0,7);
//     for(int i=0;i<8;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// QUICK SORT O(nlogn) :-time complexity     O(n):- space complexity
//  int partition(int arr[],int s,int e){
//      int pivot=arr[s];
//      int count=0;
//      for(int i=s+1;i<=e;i++){
//          if(arr[i]<=pivot){count++;}
//      }
//      swap(arr[count+s],arr[s]);
//      int i=s,j=e;
//      while(i<count+s && j>count+s){
//          if(arr[i]>pivot && arr[j]<pivot){
//              swap(arr[i++],arr[j--]);
//          }
//          if(arr[i]>pivot && arr[j]>pivot){
//              j--;
//          }
//          if(arr[i]<pivot && arr[j]<pivot){
//              i++;
//          }
//      }
//      return s+count;
//  }
//  void quicksort(int* arr,int s,int e){
//  if(s>=e){return;}
//  int p=partition(arr,s,e);
//  quicksort(arr,s,p-1);
//  quicksort(arr,p+1,e);
//  }
//  int main(){
//      int arr[5]={2,4,1,6,9};
//      int n=5;
//      quicksort(arr,0,n-1);
//      for(int i=0;i<5;i++){
//          cout<<arr[i]<<" ";
//      }
//  }

// Q.permutations
//  void solve(string& str,vector<string>& ans,int index,int n){
//      //basecase
//      if(index>=n){
//          ans.push_back(str);
//          return;
//      }

//     for(int j=index;j<n;j++){
//         swap(str[index],str[j]);
//         solve(str,ans,index+1,n);
//         //backTrack
//          swap(str[index],str[j]);
//     }
// }

// vector<string> generatePermutations(string &str)
// {
// vector<string> ans;
// int index=0;
// int n=str.length();
// solve(str,ans,index,n);
// return ans;
// }

// //Q.rat in  a maze

// bool isSafe(int newX,int newY,vector<vector<bool>>& visited,vector < vector < int >>& arr,int n){
//     if((newX>=0 && newX<n) && ( newY>=0 && newY<n) && visited[newX][newY]==0 && arr[newX][newY]==1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// void solve(int x,int y,vector < vector < int >>& arr,int n,vector<vector<bool>>& visited,vector<string>& ans,string path){
// if(x==n-1 && y==n-1){
//     ans.push_back(path);
//     return;
// }
//  if(arr[0][0]==0){
//         return;
//     }

// //down
// if(isSafe(x+1,y,visited,arr,n)){
//     visited[x][y]=1;
//     solve(x+1,y,arr,n,visited,ans,path+'D');
//     visited[x][y]=0;
// }

// //left
// if(isSafe(x,y-1,visited,arr,n)){
//     visited[x][y]=1;
//     solve(x,y-1,arr,n,visited,ans,path+'L');
//     visited[x][y]=0;
// }

// //right
// if(isSafe(x,y+1,visited,arr,n)){
//     visited[x][y]=1;
//     solve(x,y+1,arr,n,visited,ans,path+'R');
//     visited[x][y]=0;
// }

// //up
// if(isSafe(x-1,y,visited,arr,n)){
//     visited[x][y]=1;
//     solve(x-1,y,arr,n,visited,ans,path+'U');
//     visited[x][y]=0;
// }
// }
// vector < string > searchMaze(vector < vector < int >> & arr, int n) {
//     vector<string> ans;
//     vector<vector<bool>> visited(n,vector<bool> (n,0));
//     string path="";
//     solve(0,0,arr,n,visited,ans,path);

//     return ans;
// }


// Q subsets
//   void solve(vector<vector<int>>& ans,vector<int> temp,int i,vector<int> nums){
//          if(i>=nums.size()){
//              ans.push_back(temp);
//              return;
//          }
//          solve(ans,temp,i+1,nums);
//          temp.push_back(nums[i]);
//          solve(ans,temp,i+1,nums);
//      }
//  vector<vector<int>> subsets(vector<int>& nums) {
//          vector<vector<int>> ans;
//          vector<int> temp;
//          int i=0;
//          solve(ans,temp,i,nums);
//          return ans;

//     }

// //Q. subsequences of a string
// void solve(vector<string>& ans,string str,string temp,int i){
// 	if(i>=str.length()){
// 		if(temp.length()>0)
// 		{ans.push_back(temp);}
// 		return;}
// 	solve(ans,str,temp,i+1);

// 	temp.push_back(str[i]);
// 	solve(ans,str,temp,i+1);
// }
// vector<string> subsequences(string str){

// 	vector<string> ans;
// 	string temp="";
// 	int i=0;
// 	solve(ans,str,temp,i);
// 	return ans;
// }

// Alternate methods[bit manipulation]
//  int main(){
//      vector<int> arr={1,2,3};
//      vector<vector<int>> ans;
//      int subset=1<<arr.size();
//      for(int i=0;i<subset;i++){
//          vector<int> temp;
//          for(int j=0;j<arr.size()-1;j++){
//              if(i&(1<<j)){temp.push_back(arr[j]);}
//          }
//          ans.push_back(temp);
//      }
//  }




// Q. N queens

// bool isSafe(vector<string> &board, int row, int n, int col)
// {
//     bool flag = true;
//     for (int j = 0; j < n; j++)
//     {
//         if (board[row][j] == 'Q')
//         {
//             flag = false;
//             break;
//         }
//     }

//     for (int j = 0; j < n; j++)
//     {
//         if (board[j][col] == 'Q')
//         {
//             flag = false;
//             break;
//         }
//     }

//     for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
//     {
//         if (board[i][j] == 'Q')
//         {
//             flag = false;
//             break;
//         }
//     }

//     for (int i = row, j = col; i >= 0 && j < n; i--, j++)
//     {
//         if (board[i][j] == 'Q')
//         {
//             flag = false;
//             break;
//         }
//     }

//     return flag;
// }
// void nQueens(vector<string> &board, vector<vector<string>> &ans, int row, int n)
// {
//     if (row == n)
//     {
//         ans.push_back(board);
//         return;
//     }
//     for (int j = 0; j < n; j++)
//     {
//         if (isSafe(board, row, n, j))
//         {
//             board[row][j] = 'Q';
//             nQueens(board, ans, row + 1, n);
//             board[row][j] = '.';
//         }
//     }
// }

// vector<vector<string>> solveNQueens(int n)
// {
//     vector<string> board(n, string(n, '.'));
//     vector<vector<string>> ans;

//     nQueens(board, ans, 0, n);
//     return ans;
// }




//Q. sudoku solver
// bool isSafe(vector<vector<char>>& board,int i,int j,char n){
//     bool flag=true;
//     for(int x=0;x<9;x++){
//         if(board[x][j]==n){
//            flag=false;
//            break;
//         }
//     }

//     for(int x=0;x<9;x++){
//         if(board[i][x]==n){
//             flag=false;
//             break;
//         }
//     }

//    for( int a=i-i%3;a<i-i%3+3;a++){
//     for(int b=j-j%3;b<j-j%3+3;b++){
//         if(board[a][b]==n){
//             flag=false;
//             break;
//         }
//     }
//    }
//    return flag;
// }
// bool solve(vector<vector<char>>& board){
//     int n=board.size();
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(board[i][j]=='.'){
//                 for(char val='1';val<='9';val++){
//                     if(isSafe(board,i,j,val)){
//                         board[i][j]=val;

//                         bool further=solve(board);
//                         if(further){
//                             return true;
//                         }
//                         else{
//                             board[i][j]='.';
//                         }
//                     }
//                 }
//                 return false;
//             }
//         }
//     }
//   return true;
// }
// void solveSudoku(vector<vector<char>>& board) {
//     solve(board);
// }





//Q.phone keypad
// void solve(vector<string> &ans,map<char,string> keys,string digits,int i,string& temp){
//     if(i==digits.size()){
//         ans.push_back(temp);
//         return;
//     }
// string str=keys[digits[i]];
//     for(int j=0;j<str.size();j++){
//         temp=temp+str[j];
//         solve(ans,keys,digits,i+1,temp);
//         temp.pop_back();
//     }
// }
// public:
//     vector<string> letterCombinations(string digits) {
//         vector<string> ans;
//         if(digits==""){
//             return ans;
//         }
//         map<char,string> keys;
//         keys['2']="abc";
//         keys['3']="def";
//         keys['4']="ghi";
//         keys['5']="jkl";
//         keys['6']="mno";
//         keys['7']="pqrs";
//         keys['8']="tuv";
//         keys['9']="wxyz";

//         string temp;
//         solve(ans,keys,digits,0,temp);
//         return ans;
//     }




//Q. josephus problem
// bool basecase(vector<int> &circle){
//     int cnt=0;
//     for(int i=0;i<circle.size();i++){
//         if(circle[i]!=-1){
//             cnt++;
//         }
//     }
//     if(cnt==1){return true;}
//     else  {return false;}
// }
// void solve(vector<int> &circle,int i,int count,int k){
// if(basecase(circle)){
// return;
// }

// int j=i;
// while(true){
// if(circle[j%circle.size()]!=-1)
// {count++;}
// if(count==k){
//     circle[j%circle.size()]=-1;
//     break;
// }
// j++;
// }
// solve(circle,j+1,0,k);

// }
// int findTheWinner(int n, int k) {
//     vector<int> circle(n);
//     for(int i=0;i<circle.size();i++){
//         circle[i]=i+1;
//     }
//     int ans;
//     solve(circle,0,0,k);
//     for(int i=0;i<circle.size();i++){
//         if(circle[i]!=-1){
//             ans= circle[i];
//             break;
//         }
//     }
//     return ans;}




// //Q. Knights tour
// bool isSafe(vector<vector<int>> &board,int i,int j,int n,int m){
//     if((i<0 or i>=n) or (j<0 or j>=m)){
//         return false;
//     }
//     if(board[i][j]!=-1){
//         return false;
//     }

//     return true;
// } 
// void solve(vector<vector<int>> &board,int n,int m,int num,int srcX,int srcY,bool& state){
//     if(num==n*m-1){
//         board[srcX][srcY]=num;
//         state=true;
//         return;
//     }

//     //1
//     if(isSafe(board,srcX-1,srcY+2,n,m)){
//         board[srcX][srcY]=num;
//         solve(board,n,m,num+1,srcX-1,srcY+2,state);
//     }

//      //2
//     if(isSafe(board,srcX+1,srcY+2,n,m)){
//          board[srcX][srcY]=num;
//         solve(board,n,m,num+1,srcX+1,srcY+2,state);
//     }

//      //3
//     if(isSafe(board,srcX-1,srcY-2,n,m)){
//          board[srcX][srcY]=num;
//         solve(board,n,m,num+1,srcX-1,srcY-2,state);
//     }

//      //4
//     if(isSafe(board,srcX+1,srcY-2,n,m)){
//          board[srcX][srcY]=num;
//         solve(board,n,m,num+1,srcX+1,srcY-2,state);
//     }

//      //5
//     if(isSafe(board,srcX-2,srcY+1,n,m)){
//          board[srcX][srcY]=num;
//         solve(board,n,m,num+1,srcX-2,srcY+1,state);
//     }

//      //6
//     if(isSafe(board,srcX+2,srcY+1,n,m)){
//          board[srcX][srcY]=num;
//         solve(board,n,m,num+1,srcX+2,srcY+1,state);
//     }

//      //7
//     if(isSafe(board,srcX-2,srcY-1,n,m)){
//          board[srcX][srcY]=num;
//         solve(board,n,m,num+1,srcX-2,srcY-1,state);
//     }

//      //8
//     if(isSafe(board,srcX+2,srcY-1,n,m)){
//          board[srcX][srcY]=num;
//         solve(board,n,m,num+1,srcX+2,srcY-1,state);
//     }

//     if(state==false)
//     board[srcX][srcY]=-1;
    
// }

// vector<vector<int>> knightTour(int n, int m) {
//    vector<vector<int>> board(n,vector<int>(m,-1));

//    int num=0;
//    int srcX=0;
//    int srcY=0;
//    bool state=false;
//    solve(board,n,m,num,srcX,srcY,state);

//    return board;
// }