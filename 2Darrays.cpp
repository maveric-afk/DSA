#include<iostream>
#include<vector>
#include<array>
using namespace std;
//int main(){   
    // int arr[3][4];
    //row wise input
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    //col wise input
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }    
    //print
    //  for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

//   int nums[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++)
//         cout<<nums[i][j]<<" ";
//         cout<<endl;
//     }
//     cout<<"Enter the key: ";
//     int key;
//     cin>>key;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(nums[i][j]==key){
//                 cout<<"key is there";
//                 break;
//             }
//         }
//     }

//You can pass a 2D array to a function by specifying the number of 
//columns (or the second dimension size) in the parameter list
//}


//Largest row sum
// void largestRowsum(int arr[][3],int rows){
//  int sum;
//  int Lsum=0;
//  int row;
// for(int i=0;i<rows;i++){
//      sum=0;
//     for(int j=0;j<3;j++){
//         sum+=arr[i][j];
//     }
//     if(sum>Lsum){
//         row=i+1;
//         Lsum=sum;
//     }
// }
// cout<<Lsum<<" which is in "<<row<<"th row";
// }
// //col wise sum
// void colwiseSum(int arr[][3],int rows){
// int sum;
// cout<<"column wise sum of matrix: ";
// for(int i=0;i<3;i++){
//    sum=0;
//     for(int j=0;j<rows;j++){
//         sum+=arr[j][i];
//     }
//     cout<<sum<<" ";
// }
// cout<<endl;
// }
// //row wise sum
// void rowwiseSum(int arr[][3],int rows){
//     int sum;
//     cout<<"row wise sum of matrix: ";
// for(int i=0;i<rows;i++){
//      sum=0;
//     for(int j=0;j<3;j++){
//         sum+=arr[i][j];
//     }
//     cout<<sum<<" ";
// }
// cout<<endl;
// }
// int main(){
// int arr[5][3];
// for(int i=0;i<5;i++){
//     for(int j=0;j<3;j++){
//         cin>>arr[i][j];
//     }
// }
// for(int i=0;i<5;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<"  ";
//     }
//     cout<<endl;
// }
// rowwiseSum(arr,5);
// colwiseSum(arr,5);
// cout<<"largest row sum is: ";
// largestRowsum(arr,5);
// }




int main(){
    //Q* print like a wave
    // int arr[3][3]={5,1,2,4,3,7,8,9,6};
    // for(int i=0;i<3;i++){
    //     if(i%2==0){
    //         for(int j=0;j<3;j++){
    //             cout<<arr[j][i]<<" ";
    //         }
    //     }
    //     else{
    //         for(int j=2;j>=0;j--){
    //             cout<<arr[j][i]<<" ";
    //         }
    //     }
    // }
    // return 0;

//Q.rotate image[leetcode]
//     int arr[4][4]={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<"   ";
//         }
//         cout<<endl<<endl;
//     }
    
//     for(int i=0;i<=3;i++){
//         for(int j=3;j>=0;j--){
//             cout<<arr[j][i]<<"   ";
//         }
//         cout<<endl<<endl;
//     }
// }


//in-place rotate image
//  void rotate(vector<vector<int>>& matrix) {
//        for(int i=0;i<matrix.size();i++){
//         for(int j=0;j<matrix[0].size();j++){
//             if(j>i){
//                     swap(matrix[i][j],matrix[j][i]);
//             }
//         }
//        }
//        for(int i=0;i<matrix.size();i++){
//         reverse(matrix[i].begin(),matrix[i].end());
//        }
//  }



//                       <---binary search in a matrix--> 
//Q. search a 2D matrix(matrix is sorted row wise)[leetcode]

// bool searchMatrix(vector<vector<int>>& matrix, int target) {   
//         for(int i=0;i<matrix.size();i++){
//               int s=0;
//              int e=matrix[i].size()-1;
//              int mid=s+(e-s)/2;
//               while(s<=e){
//                  if(matrix[i][mid]==target){return true;}
//                  else if(target>matrix[i][mid]){s=mid+1;}
//                  else{e=mid-1;}
//                mid=s+(e-s)/2;
//           }          
//    }
//    return false;}
// int main(){
//   vector<vector<int>> arr;
//   vector<int> row1;
//   row1.push_back(1);
//   row1.push_back(2);
//   row1.push_back(3);
//    vector<int> row2;
//   row1.push_back(4);
//   row1.push_back(5);
//   row1.push_back(6);
//    vector<int> row3;
//   row1.push_back(7);
//   row1.push_back(8);
//   row1.push_back(9);
//   arr.push_back(row1);
//   arr.push_back(row2);
//   arr.push_back(row3);
//   int key;
//   cin>>key;
//   if(searchMatrix(arr,key)==1) cout<<"key is there";
//   else cout<<"key is not there";
// }


//*****Q. search a 2D matrix(matrix is sorted both row wise and col wise)[leetcode]
// bool searchMatrix(int matrix[][5], int target,int rows) { 
//     int rowIndex=0;
//     int colIndex=4;
//   while(colIndex>=0 && rowIndex<rows){
//     if(matrix[rowIndex][colIndex]==target){return true;}
//     else if(matrix[rowIndex][colIndex]<target){rowIndex++;}
//     else{colIndex--;}
//   } 
//   return false;     
// }
// int main(){
// int arr[5][5]={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
// int key;
// cin>>key;
//   if(searchMatrix(arr,key,5)==1) cout<<"key is there";
//   else cout<<"key is not there";
// }


// spiral matrix
// int main(){
//   int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//   vector<int> print;
//   int sRow=0;
//   int sCol=0;
//   int eRow=2;
//   int eCol=2;
//   while(sRow<=eRow && sCol<=eCol){
//     for(int j=sCol;j<=eCol;j++){
//         print.push_back(arr[sRow][j]);
//     }
//     sRow++;
//     for(int i=sRow;i<=eRow;i++){
//         print.push_back(arr[i][eCol]);
//     }
//     eCol--;
//     if(sRow<=eRow)
//     {for(int j=eCol;j>=sCol;j--){
//         print.push_back(arr[eRow][j]);
//     }}
//     eRow--;
//     if(sCol<=eCol)
//     {for(int i=eRow;i>=sRow;i--){
//         print.push_back(arr[i][sCol]);
        
//     }}
//     sCol++;
//   }

//   for(int i=0;i<print.size();i++){
//     cout<<print[i]<<" ";
//   }
  
// }