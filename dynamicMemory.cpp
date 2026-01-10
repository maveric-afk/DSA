#include<iostream>
#include<stdlib.h>
using namespace std;

int getSum(int* arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=i[arr];
    }
    return sum;
}
int main(){
//               dynamic memory allocation of array

// int n;
// cin>>n;
// int* arr=new int[n];
// for(int i=0;i<n;i++){
//     cin>>*(arr+i);
// }
// int ans=getSum(arr,n);

// cout<<"answer is: "<<ans<<endl;
// for(int i=0;i<n;i++){
//     cout<<(arr+i)<<endl;
// }



//          dynamic memory allocation of jagged array

//creation
// int**jaggedArr=new int*[3];
// for(int i=0;i<3;i++){
//     jaggedArr[i]=new int[i+2];
// }
// //taking input
// for(int i=0;i<3;i++){
//     for(int j=0;j<i+2;j++){
//         cin>>jaggedArr[i][j];
//     }
// }
// //printing
// for(int i=0;i<3;i++){
//     for(int j=0;j<i+2;j++){
//         cout<<jaggedArr[i][j];
//     }cout<<endl;
// }
// //clearing memory
// for(int i=0;i<3;i++){
//     delete [] jaggedArr[i];
// }
// delete [] jaggedArr;


//          dynamic memory allocation of 2D array


// int row,col;
// cin>>row>>col;
// //creation

// int** arr=new int*[row];
// for(int i=0;i<col;i++){
//     arr[i] = new int[col];
// }

// //taking input
// for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//         cin>>arr[i][j];
//     }
// }

// //printing
// for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//        cout<<arr[i][j]<<" ";
//     }
// }

// //clearing memory
// for(int i=0;i<row;i++){
//     delete [] arr[i];
// }
// delete []arr;


}