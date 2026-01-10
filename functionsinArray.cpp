#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
// void printArray(int arr[],int n){
//     for(int i=0;i<=n-1;i++){
//         cout<<arr[i]<<endl;
//     }
// }

// int main(){
//     int arr[]={3,65,2,6,76,43,22,21};
//     int n=sizeof(arr)/4;
//     printArray(arr,n);
// }

// void print(double arr[],int n){
//     for(int i=0;i<=n-1;i++){
//         cout<<arr[i]<<endl;
//     }
// }
// int main(){
//     double arr[5]={1.23,6.44,7.78,5.90,3.33};
//     print(arr,5);
// }

// void update(int arr[],int n){
// arr[1]=5;
// for(int i=0;i<=2;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// //                                address of the element is given to other function from main function that's why value is changed
// }
// int main(){
//    int arr[3]={1,2,3};
   
//    update(arr,3);

//    for(int i=0;i<=2;i++){
//     cout<<arr[i]<<" ";
// }

// }

//Q. swap alternate indices

// void swapAlt(int arr[],int n){

// for(int i=0;i<n;i+=2){
//    int temp=arr[i];
//    arr[i]=arr[i+1];
//    arr[i+1]=temp;
// }
// for(int i=0;i<=n-1;i++){
//     cout<<arr[i]<<" ";
// }

// }
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int n=sizeof(arr)/4;
//     for(int i=0;i<=n-1;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     swapAlt(arr,7);
// }



//int main(){
 //let's solve some good questions
 // ***find unique

// int arr[7]={2,3,1,6,3,6,2};
//     for(int i=0;i<7;i++){
//         int count=0;
//         for(int j=0;j<7;j++){
//             if(arr[j]==arr[i])
//             count++;
//         }
//         if(count==1){
//             cout<<"Unique element is: "<<arr[i]<<endl;
//             break;
//         }
//     }

//ALTERNATE
   //  int arr[7]={7,3,5,2,3,5,7};
   //  int ans=arr[0];
   //  for(int i=1;i<7;i++){
   //    ans  =  ans^arr[i];
   //  }
   //  cout<<ans;



//Duplicate in array
  // int arr[7]={6,3,1,5,4,3,2};
  //   int ans=0;
  //   for(int i=0;i<7;i++){
  //       for(int j=i+1;j<7;j++){
  //           if(arr[j]==arr[i])
  //           {ans=arr[i];
  //           break;}
  //       }
  //   }
  //  cout<<"Duplicate is: "<<ans;  


//find all duplicate in an array [leetcode]
//:-solved on leetcode already


//INTERSECTION OF TWO SORTED ARRAYS
//optimisation 1
// int arr1[6]={1,2,2,2,3,4};
// int arr2[4]={2,2,3,3};
// vector<int> ans;
// for(int i=0;i<6;i++){
//   for(int j=0;j<4;j++){
//     if(arr1[i]<arr2[j]){
//       break;
//     }
//     if(arr2[j]==arr1[i]){
//       ans.push_back(arr1[i]);
//       arr2[j]=-2;
//       break;
//     }
//   }
// }

//optimisation 2
// int arr1[6]={1,2,2,2,3,4};
// int arr2[4]={2,2,3,3};
// vector<int> ans;
// int i=0,j=0;
// while(i<6 && j<4){
//   if(arr1[i]<arr2[j]){
//     i++;
//   }
//   else if(arr1[i]==arr2[j]){
//     ans.push_back(arr1[i]);
//     i++;j++;
//   }
//   else{
//     j++;
//   }
// }

//* Unique number of occurence
//  int arr[6]={1,2,2,1,1,3};
//      int count1=0;;
//  int count2=0;
//  bool flag=true;
//  for(int i=0;i<6;i++){
//       count2=count1;
//       count1=0;
//      for(int j=0;j<6;j++){
//          if(arr[i]==arr[i-1]){
//              break;
//          }
//          if(arr[j]==arr[i]){
//              count1++;
//          }
//      }
//     if((arr[i]!=arr[i-1]) && (count1==count2)){
//         flag=false;
//     }
//  }
//  if(flag==false) cout<<"No unique occurences";
//  else cout<<"unique occurences";

//*pair sum

// int arr[5]={1,2,3,4,5};
// int target;
// cin>>target;
// for(int i=0;i<5;i++){
//    for(int j=i+1;j<5;j++){
//       if(arr[i]+arr[j]==target){
//          if(arr[i]<=arr[j])
//       {cout<<"["<<arr[i]<<" "<<arr[j]<<"]"<<endl;}
//       else {cout<<"["<<arr[j]<<" "<<arr[i]<<"]"<<endl;}}
//    }
// }



// // 3Sum [leetcode]
// vector<vector<int>> threeSum(vector<int>& nums) {
//   sort(nums.begin(),nums.end());
//   vector<vector<int>> ans;
//   for(int i=0;i<nums.size();i++){
//       vector<int> temp;
//       if(i>0 && nums[i]==nums[i-1]){continue;}
//       int j=i+1;
//       int k=nums.size()-1;
//       while(j<k){
//           int sum=nums[i]+nums[j]+nums[k];
//           if(sum<0){
//               j++;
//           }
//           else if(sum>0){
//               k--;
//           }
//           else{
//               temp={nums[i],nums[j],nums[k]};
//               ans.push_back(temp);
//               j++;
//               k--;
//               while(j<k && nums[j]==nums[j-1])j++;
//               while(j<k && nums[k]==nums[k+1])k--;
//           }
//       }
//   }
//   return ans;
// }





// Sort 0 1
// {two pointer approach}

// int arr[]={1,0,0,1,1,0,1};
//  int n=sizeof(arr)/4;
//  int left=0,right=n-1;

//  for(int i=0;left<right;i++){
// if(arr[left]==0 && arr[right]==1 && left<right) left++;right--;
// if(arr[left]==0 && arr[right]==0 && left<right) left++;
// if(arr[left]==1 && arr[right]==1 && left<right) right--;
// if(arr[left]==1 && arr[right]==0 && left<right) {int temp=arr[left];
// arr[left]=arr[right];
// arr[right]=temp; left++;right--;}
//  }

// for(int i=0;i<n;i++){{
//    cout<<arr[i]<<" ";
// }}

//*Sort 0 1 2
// int arr[]={0 ,1, 2, 1, 2, 1, 2};
// int n=sizeof(arr)/4;
// int count0=0,count1=0,count2=0;
// for(int i=0;i<n;i++){
//    if(arr[i]==0) {count0++;}
//    if(arr[i]==1) {count1++;}
//    if(arr[i]==2) {count2++;}
// }
// for(int i=0;i<count0;i++){
//    arr[i]=0;
// }
// for(int i=count0;i<count0+count1;i++){
//    arr[i]=1;
// }
// for(int i=count0+count1;i<count0+count1+count2;i++){
//    arr[i]=2;}
// for(int i=0;i<n;i++){ 
//    cout<<arr[i]<<" "; 
// }

//}

//*reverse the array after mth index

// vector<int> reverse(vector<int> v,int m){
//   int n=v.size();
// for(int i=m+1;i<=n-1;i++){
//        if((m+n+1)%2!=0 && i<=(m+n+1)/2) swap(v[i],v[(m+n+1)-1-i]);
//        if((m+n+1)%2==0 && i<=(m+n+1)/2-1) swap(v[i],v[(m+n+1)-1-i]);
//    } 
//    return v;
// }
// int main(){
// vector<int> v;
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(4);
// v.push_back(5);
// v.push_back(6);

// int m;
// cin>>m;
// vector<int> ans=reverse(v,m);
// for(int i=0;i<ans.size();i++){
//   cout<<ans[i]<<" ";
// }
// }


//Q. move zeroes
//int main(){
//   int nums[]={9,0,8,0,6,5,4,0,0,1,0,2,3,0,0,0,11,12};
//   int n=sizeof(nums)/4;
//   int i=0;
//   while(i<=n-1){
//    if(nums[i]!=0){
//     i++;
//    }
//    if(nums[i]==0){
//     int j=i+1;
//     while(j<=n-1){
//       if(nums[j]!=0){swap(nums[i],nums[j]);break;}
//       if(nums[j]==0){j++;}
//     }i++;
//    }
//   }
// for(int i=0;i<n;i++){
//   cout<<nums[i]<<" ";
// }
//}


//Q. rotate array[leetcode]

// int main(){
  //yeh mera code hai lekin ye TLE maar gaya tha (＞﹏＜)
  // int nums[]={-1,-100,3,99};
  // int n=sizeof(nums)/4;
  // int k;
  // cin>>k;
  // for(int i=1;i<=k;i++){
  //   int temp=nums[n-1];
  //   int j=n-2;
  //   while(j>=0){
  //     nums[j+1]=nums[j];
  //     j--;
  //   }
  //   nums[j+1]=temp;
  // }
  // for(int i=0;i<n;i++){
  //   cout<<nums[i]<<" ";
  // }

//yeh hai sahi code
//   int nums[]={-1,-100,3,99};
//   int n=sizeof(nums)/4;
//   int temp[n];
//   int k;
//   cin>>k;
//   for(int i=0;i<n;i++){
//     temp[(i+k)%n]=nums[i];
//   }
//   for(int i=0;i<=n-1;i++){
//     nums[i]=temp[i];
//   }
// for(int i=0;i<n;i++){
//   cout<<nums[i]<<" ";
// }
//}


//Q. check if an array is sorted and rotated


// int main(){
// vector<int> v1;
// v1.push_back(3);
// v1.push_back(4);
// v1.push_back(5);
// v1.push_back(1);
// v1.push_back(2);
// vector<int> v2(v1);
// sort(v1.begin(),v1.end());
// vector<int> temp(v1.size());
// for(int i=0;i<=v1.size()-1;i++){
//   for(int j=0;j<v1.size();j++){
//  temp[(j+i)%v1.size()] = v2[j];
//   }
//   if(temp==v1){
//     cout<<true;
//     break;
//   }
// }

// }

//Q. sum of two arrays

// int main(){
//   int nums1[]={4,5,1};
//   int nums2[]={3,4,5};
//   int n=sizeof(nums1)/4;
//     int m=sizeof(nums2)/4;
//   int ans1=0;
//   int ans2=0;
//   for(int i=0;i<=2;i++){
//     ans1=nums1[2-i]*pow(10,i) + ans1;
//   }
//   for(int i=0;i<=2;i++){
//     ans2=nums2[2-i]*pow(10,i) + ans2;
//   }
//  int sum=ans1+ans2;
// vector<int> v;
// int count=0;
// for(int i=1;sum>0;i++){
//   v.push_back(sum%10);
//   count++;
//   sum/=10;
// }
// for(int i=count-1;i>=0;i--){
//   cout<<v[i]<<" ";
// }
// }



// //Q. Candy
// int candy(vector<int>& ratings) {
//   int n = ratings.size();
//   vector<int> candies(n, 1); // Give 1 candy to each child first

//   // Left to right pass
//   for(int i = 1; i < n; ++i) {
//       if(ratings[i] > ratings[i - 1]) {
//           candies[i] = candies[i - 1] + 1;
//       }
//   }

//   // Right to left pass
//   for(int i = n - 2; i >= 0; --i) {
//       if(ratings[i] > ratings[i + 1]) {
//           candies[i] = max(candies[i], candies[i + 1] + 1);
//       }
//   }

//   // Sum up the total candies
//   int total = 0;
//   for(int c : candies) total += c;

//   return total;
// }