#include<iostream>
#include<vector>
using namespace std;

// int search(int arr[],int size,int key){
// int start=0;
// int end=size-1;
// int mid=start + (end-start)/2;

// for(int i=1;start<=end;i++){
//     if(arr[mid]==key) return mid;
//     if(key>arr[mid]) start=mid+1;
//     else end=mid-1;
//     mid=start + (end-start)/2;
// }
// return -1;



// }
// int main(){
// int arr[6]={5,8,11,13,15,22};
// int key;
// cin>>key;
// cout<<"The index of "<<key<<" is : ";
// cout<<search(arr,6,key);

// }


// let's solve some questions
//***Q. first and last position of an element

// int lastOcc(int arr[],int n,int k){
// int s=0;
// int e=n-1;
// int m=s+(e-s)/2;
// int ans=-1;
// for(int i=1;i>0;i++){
//     if(arr[m]==k && s<=e) {ans=m;
//     s=m+1;}
//     if(k<arr[m] && s<=e) 
//     {e=m-1;}
//     if(k>arr[m] && s<=e) 
//    { s=m+1;}
// m=s+(e-s)/2;
// }
// return ans;
// }

// int firstOcc(int arr[],int n,int k){

// int s=0;
// int e=n-1;
// int m=s+(e-s)/2;
// int ans=-1;
// for(int i=1;i>0;i++){
//     if(arr[m]==k && s<=e) {ans=m;
//     e=m-1;}
//     if(k<arr[m] && s<=e) 
//     {e=m-1;}
//     if(k>arr[m] && s<=e) 
//    { s=m+1;}
// m=s+(e-s)/2;
// }
// return ans;
// }

// int main(){

//     int arr[9]={1,2,3,3,3,3,3,3,5};

// cout<<"first occurence of 3 is at the index : "<<firstOcc(arr,9,3)<<endl;
// cout<<"last occurence of 3 is at the index : "<<lastOcc(arr,9,3)<<endl;
// }

//using linear search
// int main(){
//     // int arr[8]={1,1,0,0,2,2,2,2};
//     // int k=2;
//     // int first=-1;
//     // int last=-1;
//     // for(int i=0;i<8;i++){
//     //     if(arr[i]==k) { first=i;
//     //     break;}
//     // }
//     // for(int i=7;i>=0;i--){
//     //     if(arr[i]==k) { last=i;
//     //     break;}
//     // }
//     // cout<<first<<"  "<<last;
// }


//*peak index in a mountain array

// int peakElement(int arr[],int size){
//     int ans=arr[0];
//     for(int i=1;i<size;i++){
//         if(arr[i]>ans) ans=arr[i];
//         if(arr[i]<ans) ans=ans;
//     }
//     return ans;
// }
// int main(){
//     int arr[5]={1,4,2,1,0};
//    cout<<"peak value of the mountain array is : "<<peakElement(arr,5);
// }

//alternative[binary search]

// int main(){
//    int arr[4]={1,4,6,5};
//    int s=0;
//    int e=3;
//    int m=(s+e)/2;
//    while(s<e){
//     if(arr[m]<arr[m+1])
//     s=m+1;
//     if(arr[m]>arr[m+1])
//     e=m;        // end !=m-1 bcz when arr[m]>arr[m+1] so 
//                 //arr[m] can also be peak value so when doing 
//                 //end==m-1 end will come before the peak that we don't want to do
//  m=(s+e)/2;
//    }
//    cout<<arr[m];

// }


//Q.pivot in an array[leetcode]  
// for(int i=0;i<nums.size();i++){
//             int sumleft=0;
//             int sumright=0;
//             for(int j=0;j<i;j++){
//                 sumleft+=nums[j];
//             }
//             for(int k=i+1;k<nums.size();k++){
//                 sumright+=nums[k];
//             }
//             if(sumleft==sumright){
//                 return i;
//             }
//         }
//         return -1;



//find pivot[minimum] in sorted rotated array

// int main(){
//     int arr[]={4,5,6,1,2,2,3};
//     int n=sizeof(arr)/4;
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]>arr[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
// cout<<"pivot element is: "<<arr[s];
// }


//Q.search in rotated sorted array
// int search(vector<int>& arr, int n, int k)
// {
//      int s=0;
//        int e=arr.size()-1;
//        int mid=s+(e-s)/2;
//        while(s<e){
//         if(arr[mid]>arr[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//        } 
//          int pivot=s;
//          e=arr.size()-1;
//         mid=s+(e-s)/2;
//         while(s<=e){
//             if(arr[mid]==k){
//                 return mid;
//             }
//             else if(arr[mid]>k){
//                 e=mid-1;
//             }
//             else{
//                 s=mid+1;
//             }
//              mid=s+(e-s)/2;
//         }
//         e=pivot-1;
//         s=0;
//         mid=s+(e-s)/2;
//         while(s<=e){
//             if(arr[mid]==k){
//                 return mid;
//             }
//             else if(arr[mid]>k){
//                 e=mid-1;
//             }
//             else{
//                 s=mid+1;
//             }
//              mid=s+(e-s)/2;
//         }
// return -1;
// }
// int main(){
//     vector<int> arr;
//     arr.push_back(12);
//       arr.push_back(15);
//         arr.push_back(18);
//           arr.push_back(2);
//             arr.push_back(4);
//     cout<<search(arr,5,2);
// }


//Q. sqrt using b.s.[square root of n will lie between 0 to n, this is called our search space]
// int Sqrt(int x){
// long long s=0;
// long long e=x;
// int ans=0;
// long long mid=s+(e-s)/2;
// while(s<=e){
//     if(mid*mid==x){
//         return mid;
//     }
//     else if(mid*mid>x){
//         e=mid-1;
//     }
//     else{
//          ans=mid;
//         s=mid+1;
//     }
//     mid=s+(e-s)/2;
// }
// return ans;
// }
// double decimal(int x,int precision,double n){
//     double factor=1;
// for(double i=0;i<precision;i++){
//     factor/=10;
//     for(double j=n;j*j<=x;j+=factor){
//         n=j;
//     }
// }
// return n;
// }
// int main(){
// int x;
// cin>>x;
// int precision;
// cin>>precision;
// int sol=Sqrt(x);
// cout<<"Square root is: "<<decimal(x,precision,sol);
// }


//**Q.book allocation problem
// bool isValid(int* arr,int mid,int m,int size){
// int pagesum=0;
// int student=1;
// int i=0;
// while(student<=m && i<size){
//     if(arr[i]>mid){return false;}
//    if((pagesum+arr[i])<=mid){pagesum+=arr[i];
//     i++;}
//    else{student++;
//    pagesum=0;}
// }
// if(student>m)return false;
// else return true;
// }
// int main(){
//     int arr[]={25,35,60,10,50};
//     int n=sizeof(arr)/4;
//     int sum=0;
//     int finalans=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     int s=0;
//     int e=sum;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         if(isValid(arr,mid,3,4)){
//             finalans=mid;
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     cout<<finalans;
// }



//Q.painter's partition problem
// bool isValid(int* arr,int mid,int k,int n){
//     int painter=1;
//     int boardLen=0;
//     int i=0;
//     while(i<n && painter<=k){
//         if(arr[i]>mid){return false;}
//         if(boardLen+arr[i]<=mid){
//             boardLen+=arr[i];
//             i++;
//         }
//         else{
//             painter++;
//             boardLen=0;
//         }
//     }
//     if(painter>k){return false;}
//     else{return true;}
// }
// int main(){
//     int arr[]={2, 1, 5, 6, 2, 3};
//     int n=sizeof(arr)/4;
//     int sum=0;
//     int finalans=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     int s=0;
//     int e=sum;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         if(isValid(arr,mid,2,n)){
//             finalans=mid;
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     cout<<finalans;
// }



//Agressive cows
int mod(int x){
    if(x>=0){
        return x;
    }
    else{
        return (-1)*x;
    }
}
bool isValid(int arr[],int c,int n,int mid){
int cowcount=1;
int i=0;
int poleDist=0;
int last=arr[i];
while(cowcount<=c && i<n){
    int adjdist=mod(arr[i+1]-arr[i]);
    if(poleDist+adjdist>=mid){
        cowcount++;
        last=arr[i];
        poleDist=0;
    }
    else{
        poleDist+=adjdist;
        i++;
    }
}
if(cowcount>c ){return false;}
else{return true;}
}
int maxinarray(int* arr,int n){
    int Max=arr[0];
    for(int i=0;i<n;i++){
        Max=max(arr[i],Max);
    }
    return Max;
}
int main(){
    int arr[]={4,2,1,3,6};
    int n=sizeof(arr)/4;
    int c=2;
    int s=0;
    int finalans=0;
    int e=maxinarray(arr,n);
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isValid(arr,c,n,mid)){
            finalans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
cout<<finalans;
}