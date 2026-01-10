#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){

    //creation
    map<string,int> m;

    //insertion 1
    pair<string,int> p=make_pair("chirag",3);
    m.insert(p);

    //insertion 2
    pair<string,int> q("gupta",2);
    m.insert(q);

    //insertion 3
    m["mera"]=1;  
    m["mera"]=2;    //updation not creation


    //searching
    cout<<m["chirag"]<<endl;
    cout<<m.at("mera")<<endl;

    cout<<m.at("hi")<<endl;
    cout<<m["hi"]<<endl;

    //size
    cout<<m.size()<<endl;

    //to check presence
    cout<<m.count("chirag")<<endl;
    cout<<m.count("bro!!")<<endl;

    //erase
    m.erase("chirag");
    cout<<m.size()<<endl;


    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }


    //iterator
   map<string,int> :: iterator it=m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
    }



//     //Q. maximum frequency number
//     int maximumFrequency(vector<int> &arr, int n)
// {
//    unordered_map<int,int> m;
//    int maxFreq=0;
//    int ans=0;
//    for(int i=0;i<n;i++){
//        m[arr[i]]++;
//        maxFreq=max(maxFreq,m[arr[i]]);
//    }
//    for(int i=0;i<n;i++){
//        if(m[arr[i]]==maxFreq){
//            return arr[i];
//        }
//    }
    
// }




}