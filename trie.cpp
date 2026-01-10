#include<iostream>
using namespace std;

class TrieNode{
public:
char data;
TrieNode* children[26];
int childCount;
 bool isTerminal;

 TrieNode(char ch){
    data=ch;
    for(int i=0;i<26;i++){
        children[i]=NULL;
    }
    childCount=0;
    isTerminal=false;
 }
};

class Trie{
    public:
TrieNode* root;

Trie(){
    root=new TrieNode('\0');
}
void insertUtil(TrieNode* root,string word){
    //base case
    if(word.length()==0){
        root->isTerminal=true;
        return;
    }

    //assumption word will be in CAPS
    int index=word[0]-'A';
    TrieNode* child;

    //present
    if(root->children[index]!=NULL){
        child=root->children[index];
    }
    else{
        //absent
        child=new TrieNode(word[0]);
        root->children[index]=child;
        root->childCount++;
    }

    //RECURSION
    insertUtil(child,word.substr(1));
}

void insertWord(string word){
insertUtil(root,word);
}


bool searchUtil(TrieNode* root,string word){
//base case
if(word.length()==0){
    return root->isTerminal;
}
int index=word[0]-'A';
TrieNode* child;
if(root->children[index]!=NULL){
    child=root->children[index];
}
else{
    return false;
}
//recursion
return searchUtil(child,word.substr(1));
}


bool search(string word){
return searchUtil(root,word);
}

void removeUtil(string word,TrieNode* root){
    if(word.length()==0){
        root->isTerminal=false;
        return;
    }
    TrieNode* child;
    int index=word[0]-'A';
    if(root->children[index]!=NULL){
        child=root->children[index];
    }
    else{
        cout<<"This word is not present"<<endl;
        return;
    }
    removeUtil(word.substr(1),child);
}
void remove(string word){
    removeUtil(word,root);
}



void lcp(string word,string& ans){
    for(int i=0;i<word.length();i++){
        char ch=word[i];
        if(root->childCount==1){
            ans+=ch;
            int index=ch-'a';
            root=root->children[index];

        }

        else if(root->isTerminal){
            break;
        }
        else{
            break;
        }
    }
}
};
int main(){
Trie* t=new Trie();
t->insertWord("CHIRAG");
t->insertWord("TIME");
t->insertWord("BHOPAL");
cout<<"Present or not: "<<t->search("CHIRAG")<<endl;
cout<<"Present or not: "<<t->search("TIM")<<endl;
t->remove("CHIRAG");
cout<<"Present or not: "<<t->search("CHIRAG")<<endl;




//Q.Longest Common Prefix 

// string longestCommonPrefix(vector<string> &arr, int n)
// {
// Trie* t=new Trie('\0');
// for(int i=0;i<n;i++){
//     t->insertWord(arr[i]);
// }

// string first=arr[0];
// string ans="";

// t->lcp(first,ans);
// return ans;
// }




// //Q implement a phone directory
// void printSuggestions(vector<string>& temp,string prefix,TrieNode* curr){
//     if(curr->isTerminal){
//         temp.push_back(prefix);
//     }
//     for(char ch='a';ch<='z';ch++){
//         int index=ch-'a';
//         TrieNode* next=curr->children[index];
//         if(next!=NULL){
//             prefix+=ch;
//             printSuggestions(temp,prefix,next);
//             prefix.pop_back();
//         }
//     }
    
// }

// vector<vector<string>> getSuggestions(string str){
//     vector<vector<string>> ans;
//     TrieNode* prev=root;
//     string prefix="";
//     for(int i=0;i<str.size();i++){
//         char last=str[i];
//         prefix=prefix+last;
//         TrieNode* curr=prev->children[last-'a'];
//         if(curr==NULL){
//             break;
//         }
        
//                 vector<string> temp;
//                 printSuggestions(temp,prefix,curr);
//                 ans.push_back(temp);
//                 temp.clear();
//                 prev=curr; 
//     }
//     return ans;
// }
}