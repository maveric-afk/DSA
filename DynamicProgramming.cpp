#include<iostream>
#include<vector>
using namespace std;

//TOP-DOWN

// int main(){
//     //Fibonacci
//     int solve(int n,vector<int> &dp){
//         if(n==0 or n==1){
//             return n;
//         }
//         if(dp[n]!=-1){
//             return dp[n];
//         }
//         dp[n]=solve(n-1,dp)+solve(n-2,dp);
//         return dp[n];
//     }

//     int fib(int n) {
//         vector<int> dp(n+1,-1);
//         return solve(n,dp);
//     }
// }



//BOTTOM-UP
// int fib(int n) {
//     vector<int> dp(n+1,-1);
//     dp[0]=0;
//     if(n!=0)
//     dp[1]=1;
//     for(int i=2;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }

//     return dp[n];
// }



//Space optimize
// int fib(int n) {
//     int prev2=0;
//     int prev1=1;
//     for(int i=2;i<=n;i++){
//         int curr=prev1 + prev2;
//         prev2=prev1;
//         prev1=curr;
//     }
//     if(n==0){
//         return 0;
//     }
//     return prev1;
// }




//Q. Min cost climbing stairs

// private:
// int solve(vector<int> &dp,vector<int>& cost,int n,int i){
//     if(i==n){
//         return cost[i];
//     }
//     if(i>n){
//         return 0;
//     }

//     if(dp[i]!=-1){
//         return dp[i];
//     }
//     dp[i]=cost[i]+min(solve(dp,cost,n,i+1),solve(dp,cost,n,i+2));
//     return dp[i];

// }
// public:
// int minCostClimbingStairs(vector<int>& cost) {
//             int n=cost.size();
//     vector<int> dp(n,-1);
//     return min(solve(dp,cost,n-1,0),solve(dp,cost,n-1,1));
// }




//Q. Frog jump
// int solve(int ind,vector<int> heights,vector<int>& dp){
//     if(ind==1){return 0;}
//     if(dp[ind]!=-1){
//         return dp[ind];
//     }
//     int left=solve(ind-1,heights,dp) + abs(heights[ind-1]-heights[ind-2]);
//     int right=INT_MAX;
//     if(ind>2){
//         right=solve(ind-2,heights,dp) + abs(heights[ind-1]-heights[ind-3]);
//     }

//     return dp[ind]=min(left,right);
// }
// int frogJump(int n, vector<int> &heights)
// {
//     vector<int> dp(n+1,-1);
//     return solve(n,heights,dp);
// }


// //Tabulation
// vector<int> dp(n+1,-1);
//     dp[1]=0;
//     for(int i=2;i<=n;i++){
//         int fs=dp[i-1]+abs(heights[i-1]-heights[i-2]);
//         int ss=INT_MAX;
//         if(i>2){
//             ss=dp[i-2]+abs(heights[i-1]-heights[i-3]);
//         }
//         dp[i]=min(fs,ss);
//     }
//     return dp[n];


// //space optimization
//  int prev1=0;
//     int prev2=0;
//     for(int i=2;i<=n;i++){
//         int fs=prev1+abs(heights[i-1]-heights[i-2]);
//         int ss=INT_MAX;
//         if(i>2)
//         ss=prev2+abs(heights[i-1]-heights[i-3]);

//         int curr=min(fs,ss);
//         prev2=prev1;
//         prev1=curr;
//     }
//     return prev1;



// //Q. frog jump with k dist.

// //memoization
//   int solve(int ind,vector<int> heights,int k,vector<int>& dp){
//         if(ind==0){
//             return 0;
//         }
//         if(dp[ind]!=-1){
//             return dp[ind];
//         }
//         int mini=INT_MAX;
//         for(int i=1;i<=k;i++){
//             if(ind-i>=0)
//             {int temp=solve(ind-i,heights,k,dp) + abs(heights[ind]-heights[ind-i]);
//             mini=min(mini,temp);}
//         }
//         return dp[ind]=mini;
//     }
//     int frogJump(vector<int>& heights, int k,vector<int>& dp) {
//         int n=heights.size();
//         return solve(n-1,heights,k,dp);
//     }
// int main() {
//    vector<int> heights={10, 5, 20, 0, 15};
//    int n=heights.size();
//    vector<int> dp(n+1,-1);
//    int k=2;
//    cout<<frogJump(heights,k,dp);
// }




//Q. House Robber 
//Memoization
// class Solution {
//     private:
//     int solve(int ind,vector<int> nums,vector<int>& dp){
//         if(ind==0){return nums[ind];}
//         if(ind<0) return 0;

//         if(dp[ind]!=-1) return dp[ind];
//         int pick=nums[ind]+solve(ind-2,nums,dp);
//         int notPick=0+solve(ind-1,nums,dp);

//         return dp[ind] = max(pick,notPick);
//     }
// public:
//     int rob(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> dp(n+1,-1);
//         return solve(n-1,nums,dp);
//     }
// };


//Tabulation
// int rob(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> dp(n,-1);
//         dp[0]=nums[0];
//         for(int i=1;i<n;i++){
//             int take=nums[i];
//             if(i>1)
//             take+=dp[i-2];

//             int notTake=0+dp[i-1];

//             dp[i]=max(take,notTake);
//         }

//         return dp[n-1];
//     }


//space optimization
//   int prev1=nums[0];
//        int prev2=0;
//        for(int i=1;i<n;i++){
//         int take=nums[i];
//         if(i>1)
//         take+=prev2;

//         int notTake=0+prev1;
//         int curr=max(take,notTake);

//         prev2=prev1;
//         prev1=curr;
//        }
//        return prev1;




// //Q. House Robbery ll
// class Solution {
//     private:
//     int solve(vector<int> nums){
//         int prev1=nums[0];
//         int prev2=0;
//         for(int i=1;i<nums.size();i++){
//             int take=nums[i];
//             if(i>1)
//             take+=prev2;

//             int notTake=0+prev1;
//             int curr=max(take,notTake);
//             prev2=prev1;
//             prev1=curr;
//         }
//         return prev1;
//     }
// public:
//     int rob(vector<int>& nums) {
//         if(nums.size()==1){
//             return solve(nums);
//         }
//         vector<int> temp1;
//         vector<int> temp2;

//         for(int i=0;i<nums.size();i++){
//             if(i!=0){
//                 temp1.push_back(nums[i]);
//             }
//             if(i!=nums.size()-1){
//                 temp2.push_back(nums[i]);
//             }
//         }

//         int a=solve(temp1);
//         int b=solve(temp2);

//         return max(a,b);
//     }
// };




