#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;

//selection sort
//space complexity:-O(1)
//time complexity:- O(n^2)

// int main(){
// int arr[]={7,1,4,3,9};
// int n=sizeof(arr)/4;
// for(int i=0;i<n-1;i++){     //i<n-1 because last element will be sorted already.ALSO:- no problem if i<n
//         for(int j=i+1;j<n;j++)
//        { if(arr[j]<arr[i])
//         {int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;}}

// }  
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

// }




// bubble sort
//time complexity:-O(n^2)
//space complexity:-O(1)

// int main(){

//     int nums[]={7,4,1,6,22,12,16,11};
//     int n=sizeof(nums)/4;
//      for(int i=0;i<n-1;i++){
//      for(int j=1;j<=n-1-i;j++)
//       if(nums[j-1]>nums[j]){ swap(nums[j-1],nums[j]);}
//   }  
// cout<<"Sorted array : ";
//   for(int i=0;i<n;i++){
    
//     cout<<nums[i]<<" ";
//   }
// }

//optimized bubble sort


// int main(){
//     bool flag=false;
//     int nums[]={1,2,3,4};
//     int n=sizeof(nums)/4;
//      for(int i=0;i<n-1;i++){
//      for(int j=1;j<=n-1-i;j++)
//       {if(nums[j-1]>nums[j]){ swap(nums[j-1],nums[j]);
//       flag=true;}}
//         if(flag==false) {break;}
//   }  
  

// cout<<"Sorted array : ";
//   for(int i=0;i<n;i++){
    
//     cout<<nums[i]<<" ";
//   }
// }




// ** insertion sort
// space complexity:-O(1)
//time complexity:-O(n^2)

// int main(){
// int arr[]={7,1,3,6,5,9};
// int n=sizeof(arr)/4;
// int store=0;
// for(int i=1;i<n;i++){
//     store=arr[i];
//     int j=i-1;
//     while(j>=0 && store<arr[j]){
//         arr[j+1]=arr[j];
//         j--;
//     }
//     arr[j+1]=store;   
// }
// //printing
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
//}




//Q.merge two sorted arrays[do not return a new array,instead store in nums1]
//nums1 has length m+n but mergable elements are m. rest n are 0's

// void mergeSort(vector<int> nums1,vector<int> nums2){
// int n=nums2.size();
// int m=nums1.size()-n;
// for(int i=0;i<n;i++){
//     nums1[m+i]=nums2[i];
   
// }
// sort(nums1.begin(),nums1.end());
// for(int i=0;i<m+n;i++){
//     cout<<nums1[i]<<" ";
// }
// }
// int main(){
//     vector<int> nums1;
//     nums1.push_back(1);
//     nums1.push_back(2);
//     nums1.push_back(3);
//     nums1.push_back(0);
//     nums1.push_back(0);
//     nums1.push_back(0);
//     vector<int> nums2;
//     nums2.push_back(2);
//     nums2.push_back(5);
//     nums2.push_back(6);
    
//     mergeSort(nums1,nums2);
// }


//Quick sort

// int partition(vector<int> &arr,int s,int e){
//     int pivot=arr[e];
//     int cnt=0;
//     for(int i=s;i<=e;i++){
//         if(arr[i]<pivot){
//             cnt++;
//         }
//     }
//     swap(arr[e],arr[s+cnt]);
//     int i=s,j=e;
//     while(i<s+cnt && j>s+cnt){
//         if(arr[i]>=pivot && arr[j]<pivot){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//         else if(arr[i]<pivot && arr[j]<pivot){
//             i++;
//         }
//         else if(arr[i]>pivot && arr[j]>=pivot){
//             j--;
//         }
//         else{
//             i++;
//             j--;
//         }
//     }
//     return s+cnt;
// }
// void solve(vector<int> &arr,int s,int e){
//     if(s>=e){
//         return;
//     }
//     int pivot=partition(arr,s,e);
//     solve(arr,s,pivot-1);
//     solve(arr,pivot+1,e);
// }
// vector<int> quickSort(vector<int> arr)
// {
//     int n=arr.size();
//     solve(arr,0,n-1);
//     return arr;
// }


