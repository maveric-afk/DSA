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

// for(int i=0;i<n-1;i+=2){
//    int temp=arr[i];
//    arr[i]=arr[i+1];
//    arr[i+1]=temp;
// }
// for(int i=0;i<=n-1;i++){
//     cout<<arr[i]<<" ";
// }

// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7,9};
//     int n=sizeof(arr)/4;
//     for(int i=0;i<=n-1;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     swapAlt(arr,n);
// }



// int main(){
//  //let's solve some good questions
//  // ***find unique

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
//   }

//ALTERNATE
   //  int arr[7]={7,3,5,2,3,5,7};
   //  int ans=arr[0];
   //  for(int i=1;i<7;i++){
   //    ans  =  ans^arr[i];
   //  }
   //  cout<<ans;




//Duplicate in array
// int slow=0,fast=0;
//         slow=nums[slow];
//         fast=nums[fast];
//         fast=nums[fast];
//         while(slow!=fast){
//         slow=nums[slow];
//         fast=nums[fast];
//         fast=nums[fast];
//         }

//         slow=0;
//         while(slow!=fast){
//             slow=nums[slow];
//         fast=nums[fast];
//         }

//         return slow;

//find all duplicate in an array 
// int n=nums.size();
//         vector<int> ans;
//         for(int i=0;i<n;i++){
//             int num=abs(nums[i]);
//             if(nums[num-1]<0){
//                 ans.push_back(num);
//             }
//             else{
//                 nums[num-1]*=(-1);
//             }
//         }

//         return ans;
//     }


//INTERSECTION OF TWO  ARRAYS
// unordered_map<int,pair<bool,bool>> map;
//         int n=nums1.size(),m=nums2.size();
//             for(int i=0;i<n;i++){
//                 map[nums1[i]]=make_pair(false,false);
//             }
//             for(int i=0;i<m;i++){
//                  map[nums2[i]]=make_pair(false,false);
//             }

       
//         for(int i=0;i<n;i++){
//             if(map[nums1[i]].first!=true)
//             map[nums1[i]].first=true;
//         }
//         for(int i=0;i<m;i++){
//             if(map[nums2[i]].second!=true)
//             map[nums2[i]].second=true;
//         }

//         vector<int> ans;
//         for(auto i:map){
//             if(i.second.first==true && i.second.second==true){
//                 ans.push_back(i.first);
//             }
//         }

//         return ans;

//* Unique number of occurence
// sort(arr.begin(),arr.end());
//         unordered_map<int,bool> countMap;
//         int cnt=1;
//         for(int i=0;i<arr.size();i++){
//             if(i==arr.size()-1){
//                 if(countMap[cnt]!=true)
//                 countMap[cnt]=true;
//                 else{
//                     return false;
//                 }
//             }
//             else if(arr[i+1]==arr[i]){
//                 cnt++;
//             }
//             else{
//                  if(countMap[cnt]!=true)
//                 {countMap[cnt]=true;
//                 cnt=1;}
//                 else{
//                     return false;
//                 }
//             }
//         }

//         return true;

//*pair sum

//  unordered_map<int,int> map;
//         vector<int> ans;
//         for(int i=0;i<nums.size();i++){
//             int num=nums[i];
//             int more=target-num;
//             if(map.find(more)!=map.end()){
//                 ans.push_back(map[more]);
//                 ans.push_back(i);
//                 break;
//             }
//             map[num]=i;
//         }

//         return ans;



// // 3Sum [leetcode]
vector<vector<int>> threeSum(vector<int>& nums) {
  sort(nums.begin(),nums.end());
  vector<vector<int>> ans;
  for(int i=0;i<nums.size();i++){
      vector<int> temp;
      if(i>0 && nums[i]==nums[i-1]){continue;}
      int j=i+1;
      int k=nums.size()-1;
      while(j<k){
          int sum=nums[i]+nums[j]+nums[k];
          if(sum<0){
              j++;
          }
          else if(sum>0){
              k--;
          }
          else{
              temp={nums[i],nums[j],nums[k]};
              ans.push_back(temp);
              j++;
              k--;
              while(j<k && nums[j]==nums[j-1])j++;
              while(j<k && nums[k]==nums[k+1])k--;
          }
      }
  }
  return ans;
}





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
// int i=0;
//         int j=i+1;
//         while(i<nums.size() && j<nums.size()){
//             if(nums[i]==0 && nums[j]!=0){
//                 swap(nums[i],nums[j]);
//                 i++;
//             }
//             else if(nums[i]==0 && nums[j]==0){
//                 j++;
//             }
//             else if(nums[i]!=0 && nums[j]==0){
//                 i++;
//             }
//             else{
//                 i++;
//                 j++;
//             }
//         }


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
// void rotate(vector<int>& nums, int k) {
//         int n=nums.size();
//         vector<int> temp(n);
//         for(int i=0;i<n;i++){
//             temp[(i+k)%n]=nums[i];
//         }

//         nums=temp;
        
//     }
//}


//Q. check if an array is sorted and rotated


//  int n=nums.size();
//         if(n==1) return true;
//         int i=1;
//         while(i<n and nums[i]>=nums[i-1]){
//             i++;
//         }
//         if(i==n) return true;
//         if(i==n-1 && nums[i]<=nums[0]) return true;
//         if(i==n-1 && nums[i]>nums[0]) return false;
        
//         i++;
//         while(i<n && nums[i]>=nums[i-1] && nums[i]<=nums[0]){
//             i++;
//         }

//         return i==n;

//Q. sum of two arrays

// vector<int> ans;
// 	int carry=0;
// 	int i=n-1,j=m-1;
// 	while(i>=0 && j>=0){
// 		int sum=carry+a[i]+b[j];
// 		if(sum>=10){
// 			ans.push_back(sum-10);
// 			carry=sum/10;
// 		}
// 		else{
// 			ans.push_back(sum);
// 			carry=0;
// 		}
// 		i--;
// 		j--;
// 	}
// 	while(i>=0){
// 		int sum=carry+a[i];
// 		if(sum>=10){
// 			ans.push_back(sum-10);
// 			carry=sum/10;
// 		}
// 		else{
// 			ans.push_back(sum);
// 			carry=0;
// 		}
// 		i--;
// 	}
// 	while(j>=0){
// 		int sum=carry+b[j];
// 		if(sum>=10){
// 			ans.push_back(sum-10);
// 			carry=sum/10;
// 		}
// 		else{
// 			ans.push_back(sum);
// 			carry=0;
// 		}
// 		j--;
// 	}

// 	if(carry==1){
// 		ans.push_back(1);
// 	}

// 	reverse(ans.begin(),ans.end());

// 	return ans;



// //Q. Candy
int candy(vector<int>& ratings) {
  int n = ratings.size();
  vector<int> candies(n, 1); // Give 1 candy to each child first

  // Left to right pass
  for(int i = 1; i < n; ++i) {
      if(ratings[i] > ratings[i - 1]) {
          candies[i] = candies[i - 1] + 1;
      }
  }

  // Right to left pass
  for(int i = n - 2; i >= 0; --i) {
      if(ratings[i] > ratings[i + 1]) {
          candies[i] = max(candies[i], candies[i + 1] + 1);
      }
  }

  // Sum up the total candies
  int total = 0;
  for(int c : candies) total += c;

  return total;
}