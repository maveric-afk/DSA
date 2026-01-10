//1. array
// #include<iostream>
// #include<array>
// using namespace std;
// int main(){
//     array<int,4> nums={1,2,3,4};
//     int n=nums.size();
//     for(int i=0;i<n;i++){
//         cout<<nums[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"element at 2nd index : "<<nums.at(2)<<endl;
//     cout<<"empty or not : "<<nums.empty()<<endl;

//     cout<<"first element : "<<nums.front()<<endl;
//     cout<<"last element : "<<nums.back();
// }

//2.vector{dynamic array}

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     //size means number of elements 
//     //capacity means total space
//     cout<<"capacity of v : "<<v.capacity()<<endl;
//     v.push_back(2); //for adding an element from back
//     cout<<"capacity of v : "<<v.capacity()<<endl;
//     v.push_back(3);
//     cout<<"capacity of v : "<<v.capacity()<<endl;
//     v.push_back(5);
//     cout<<"capacity of v : "<<v.capacity()<<endl;
//     v.shrink_to_fit();
//  cout<<"capacity of v : "<<v.capacity()<<endl;
//     cout<<"size of v : "<<v.size()<<endl;

//     cout<<"element at 2nd index of v : "<<v.at(2)<<endl;
//     cout<<"front  of v : "<<v.front()<<endl;
//     cout<<"back of v : "<<v.back()<<endl;

// vector<int> V(v);   //copying elements of a vector into another vector
// for(int i:V){
//     cout<<i<<" ";
// }
// cout<<endl;
//     cout<<"before pop : ";
//     //printing the vector
//     for(int i:v){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// v.pop_back();
// cout<<"after pop : ";
//  for(int i:v){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// v.clear();
//    cout<<v.size();
 
//    v.push_back(5);
//     v.push_back(3);
//      v.push_back(1);
//      for(int i:v){
//         cout<<i<<" ";
//      }
//      cout<<endl;
// v.erase(v.begin(),v.end());
// for(int i:v){
//         cout<<i<<" ";
//      }
// vector<int> a[5,1];  //5 elements and all are 1
// for(int i:a){
//     cout<<i<<" ";
// }    
//}


// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
// vector<int> v;
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(5);
// v.push_back(10);
// cout<<binary_search(v.begin(),v.end(),7)<<endl;
// cout<<binary_search(v.begin(),v.end(),2)<<endl;   //bool value
// cout<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
// cout<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;
// //reverse
// string s="chirag";
// reverse(s.begin(),s.end());
// cout<<s<<endl;
// //rotate
// rotate(v.begin(),v.begin()+1,v.end());
// for(int i:v){
//     cout<<i<<" ";
// }
// cout<<endl;
// //*sort[introsort]
// sort(v.begin(),v.end());
// for(int i:v){
//     cout<<i<<" ";
// }

// }


//3.deque
// #include<iostream>
// #include<deque>
// using namespace std;
// int main(){
//     deque<int> d;
//     d.push_back(1);
//     d.push_front(2);
//     for(int i:d){
//         cout<<i<<endl;
//     }
//     d.pop_back();
// for(int i:d){
//         cout<<i<<endl;
//     }
//     d.pop_front();
//     d.push_back(4);
//     d.push_back(9);
//     cout<<d.at(1)<<endl;
//     cout<<d.front()<<endl;
//     cout<<d.back()<<endl;
//     cout<<d.empty()<<endl;  //bool value

//     d.erase(d.begin(),d.begin()+1);
//     cout<<d.size();
//     d.clear();
//     for(int i:d){
//         cout<<i<<endl;
//     }
//}

// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<int> l;
//     l.push_back(1);
//     l.push_front(3);
//     cout<<"siZe of the list : "<<l.size()<<endl;
//     list<int> s(5,100);
//     for(int i:s){
//         cout<<i<<" ";
//     }
//     l.pop_back();
//     l.push_front(1);
//     l.erase(l.begin());
//     for(int i:l){
//         cout<<i<<" ";
//     }
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
// stack<string> s;
// s.push("chirag");
// s.push("gupta");
// s.push("hi !");
// cout<<"top element : "<<s.top()<<endl;
// s.pop();
// cout<<"top element : "<<s.top()<<endl;
// cout<<s.size()<<endl;
// cout<<s.empty();
// }



// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     queue<string> q;
//     q.push("chirag");
//     q.push("gupta");
//     q.push("hi");
//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;
//     cout<<q.size()<<endl;
//     q.pop();
//     cout<<q.front()<<endl;
// }



