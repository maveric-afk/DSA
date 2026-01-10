#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
#include<list>
using namespace std;
class graph{
public:
unordered_map<int,list<int>> adj;

void addEdge(int u,int v,bool direction){
    //direction=0-->undirected graph
     //direction=1-->directed graph

     adj[u].push_back(v); 

        if(direction==0){
            adj[v].push_back(u);
        }
}

void printAdjlist(){
    for(auto i:adj){
        cout<<i.first<<"->";
        for(auto j:i.second){
            cout<<j<<", ";
        }
        cout<<endl;
    }
}
};

vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    
    vector<int> ans[n];
   for(int i=0;i<m;i++){
  int u=edges[i][0];
  int v=edges[i][1];
  ans[u].push_back(v);
  ans[v].push_back(u);
      }
  
      vector<vector<int>> Adj(n);
      for(int i=0;i<n;i++){
          Adj[i].push_back(i);
          for(int j=0;j<ans[i].size();j++){
              Adj[i].push_back(ans[i][j]);
          }
      }
  
  return Adj;
  }

  vector<int> bfsOfGraph(vector<vector<int>> &adj) {
    vector<int> ans;
    unordered_map<int,bool> visited;
    for(int i=0;i<adj.size();i++){
        visited[i]=false;
    }
    queue<int> q;
    q.push(0);
    visited[0]=true;
    while(!q.empty()){
        int front=q.front();
        ans.push_back(front);
        q.pop();
        for(int i=0;i<adj[front].size();i++){
            int neighbour=adj[front][i];
            if(!visited[neighbour]){
                q.push(neighbour);
                 visited[neighbour]=true;
            }
        }
    }
    
    for(auto i:visited){
        if(i.second==false){
            ans.push_back(i.first);
        }
    }
    return ans;
}


void dfs(vector<int>& ans,vector<vector<int>> adj,int front, unordered_map<int ,bool>& visited){
    ans.push_back(front);
    visited[front]=true;
   for(int i=0;i<adj[front].size();i++){
       int neighbour=adj[front][i];
       if(!visited[neighbour]){
           dfs(ans,adj,neighbour,visited);
       }
   }
}

// Function to return a list containing the DFS traversal of the graph.
vector<int> dfsOfGraph(vector<vector<int>>& adj) {
  vector<int> ans;
  unordered_map<int ,bool> visited;
  for(int i=0;i<adj.size();i++){
      visited[i]=false;
  }
 dfs(ans,adj,0,visited);
 for(auto i:visited){
     if(i.second==false){
         ans.push_back(i.first);
         i.second=false;
     }
 }
 return ans;
  
}
int main(){
int n;
cout<<"Enter the number of nodes: ";
cin>>n;
int m;
cout<<"Enter the number of edges: ";
cin>>m;

graph g;

for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    g.addEdge(u,v,0);
}
g.printAdjlist();




//cyclic detection using BFS

// int isCyclicBFS(int src,unordered_map<int,bool>& visited, unordered_map<int,list<int>> adj){
//     unordered_map<int,int> parent;
    
//     parent[src]=-1;
//     visited[src]=1;
//     queue<int> q;
//     q.push(src);
//     while(!q.empty()){
//         int front=q.front();
//         q.pop();
//         for(auto neighbour:adj[front]){
//             if(visited[neighbour]==true && neighbour!=parent[front]){
//                 return 1;
//             }
//             else if(!visited[neighbour]){
//                 q.push(neighbour);
//                 visited[neighbour]=true;
//                 parent[neighbour]=front;
//             }
//         }
//     }
//     return 0;
//     }

// bool isCyclicDFS(int Parent,int node, unordered_map<int,list<int>> adj, unordered_map<int,bool>& visited,unordered_map<int,int>& parent){

//     visited[node]=true;
//     parent[node]=Parent;
//     for(auto neighbour:adj[node]){
//             if(!visited[neighbour]){
//             bool cycledetection= isCyclicDFS(node,neighbour,adj,visited,parent);
//             if(cycledetection==1){
//                 return true;
//             }
//             }
//             else if(visited[neighbour]==true && neighbour!=parent[node]){
//                 return true;
//             }
//     }
//     return false;
// }


//     string cycleDetection (vector<vector<int>>& edges, int n, int m)
//     {
//       unordered_map<int,list<int>> adj;
//       for(int i=0;i<m;i++){
//           int u=edges[i][0];
//           int v=edges[i][1];
    
//           adj[u].push_back(v);
//           adj[v].push_back(u);
//       }
//      unordered_map<int,bool> visited;
//      for(int i=1;i<=n;i++){
//          visited[i]=false;
//      } 
//      for(int i=1;i<=n;i++){
//          if(!visited[i]){
//              int ans=isCyclicBFS(i,visited,adj);
//              if(ans==1){
//                  return "Yes";
//              }
//          }
//      }
//      return "No";
//     }



//Cycle detection in directed graphs

// bool checkCycle(int node,unordered_map<int,bool>& visited,unordered_map<int,bool>& dfsVisited,unordered_map<int,list<int>> adj){

//     visited[node]=true;
//     dfsVisited[node]=true;
//     for(auto neighbour:adj[node]){
//       if(!visited[neighbour]){
//         bool cycleDetected=checkCycle(neighbour,visited,dfsVisited,adj);
//         if(cycleDetected){
//           return true;
//         }
//       }
//       else if(visited[neighbour]==true && dfsVisited[neighbour]==true){
//         return true;
//       }
//     }
//     dfsVisited[node]=false;
//     return false;
//   }
  
//   int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
//     unordered_map<int,list<int>> adj;
//     for(int i=0;i<edges.size();i++){
//       int u=edges[i].first;
//       int v=edges[i].second;
//       adj[u].push_back(v);
//     }
//   unordered_map<int,bool> visited;
//   unordered_map<int,bool> dfsVisited;
//     for(int i=1;i<=n;i++){
//       if(!visited[i]){
//         bool cyclefound=checkCycle(i,visited,dfsVisited,adj);
//         if(cyclefound){
//           return 1;
//         }
//       }
//     }
//     return 0;
//   }




// //TOPOLOGICAL SORT[using dfs]
// void topoSORT(int node,stack<int>& s,vector<bool> &V, vector<vector<int>> adj){

//     V[node]=true;
//     for(auto neighbour:adj[node]){
//         if(!V[neighbour]){
//             topoSORT(neighbour,s,V,adj);
//         }
//     }
//     s.push(node);
//     return;
// }

// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
//     vector<vector<int>> adj;
//     for(int i=0;i<e;i++){
//         int u=edges[i][0];
//         int v=edges[i][1];

//         adj[u].push_back(v);
//     }

//    vector<bool> V(v);
//     stack<int> s;
//     vector<int> ans;
//     for(int i=0;i<v;i++){
//         if(!V[i]){
//             topoSORT(i,s,V,adj);
//         }
//     }
//     for(int i=1;!s.empty();i++){
//         ans.push_back(s.top());
//         s.pop();
//     }
//     return ans;
// }




//TOPOLOGICAL SORT{Kahn's algo.}
// vector<int> topologicalSort(vector<vector<int>>& adj) {
//     int v=adj.size();
//     vector<int> inDegree(v);
//    for(int i=0;i<v;i++){
//        for(int j=0;j<adj[i].size();j++){
//            int k=adj[i][j];
//            inDegree[k]++;
//        }
//    }
   
//    queue<int> q;
//    vector<int> ans;
//    for(int i=0;i<inDegree.size();i++){
//        if(inDegree[i]==0){
//            q.push(i);
//        }
//    }
   
//    while(!q.empty()){
//        int front=q.front();
//        q.pop();
//        ans.push_back(front);
//        for(auto i:adj[front]){
//            inDegree[i]--;
//            if(inDegree[i]==0){
//                q.push(i);
//            }
//        }
//    }
//    return ans;
// }









// //Q. shortest path using BFS
// vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
// 	unordered_map<int,list<int>> adj;
// 	for(int i=0;i<m;i++){
// 		int u=edges[i].first;
// 		int v=edges[i].second;
// 		adj[u].push_back(v);
// 		adj[v].push_back(u);
// 	}
// 	unordered_map<int,bool> visited;
// 	unordered_map<int,int> parent;
// 	queue<int> q;
// 	q.push(s);
// 	visited[s]=true;
// 	parent[s]=-1;
// 	while(!q.empty()){
// 		int front=q.front();
// 		q.pop();
// 		for(auto i:adj[front]){
// 			if(!visited[i]){
// 				q.push(i);
// 				parent[i]=front;
// 				visited[i]=true;
// 			}
// 		}
// 	}
// 	vector<int> ans;
// 	int currentNode=t;
// 	ans.push_back(currentNode);
// 	while(currentNode!=s){
// 		currentNode=parent[currentNode];
// 		ans.push_back(currentNode);
// 	}
// 	reverse(ans.begin(),ans.end());
// 	return ans;




// //DIJKSTRA's ALGO>
//using priority queue

// vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {  
//     unordered_map<int,list<pair<int,int>>> adj;
//     for(int i=0;i<edges;i++){
//         int u=vec[i][0];
//         int v=vec[i][1];
//         int w=vec[i][2];

//         adj[u].push_back({v,w});
//         adj[v].push_back({u,w});
//     }
//     vector<int> dist(vertices,1e9);
//     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//     dist[source]=0;
//     pq.push({0,0});
//     while(!pq.empty()){
//         int node=pq.top().second;
//         int dis=pq.top().first;
//         pq.pop();
//         for(auto neighbour:adj[node]){
//             int edgeNode=neighbour.first;
//             int edgwt=neighbour.second;
//             if(dis+edgwt<dist[edgeNode]){
//                 dist[edgeNode]=edgwt+dis;
//                 pq.push({dist[edgeNode],edgeNode});
//             }
//         }
//     }
//     return dist;
// }


// //using set
//  vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
//         unordered_map<int,list<pair<int,int>>> adj;
//         for(int i=0;i<edges.size();i++){
//             int u=edges[i][0];
//             int v=edges[i][1];
//             int w=edges[i][2];
//             adj[u].push_back(make_pair(v,w));
//             adj[v].push_back(make_pair(u,w));
//         }
        
//         vector<int> dist(V,INT_MAX);
//         dist[src]=0;
        
//         set<pair<int,int>> st;
//         st.insert(make_pair(0,src));
//         while(!st.empty()){
//             auto top=*(st.begin());
//             st.erase(top);
            
//             int distance=top.first;
//             int node=top.second;
//             for(auto neighbour:adj[node]){
//                 if(distance+neighbour.second<dist[neighbour.first]){
//                     dist[neighbour.first]=distance+neighbour.second;
//                     st.insert(make_pair(dist[neighbour.first],neighbour.first));
//                 }
//             }
//         }
//         return dist;
//     }




// // shortest path in DAG
// void dfs(int node,stack<int> &s,unordered_map<int,list<pair<int,int>>> &adj, vector<bool> &visited){
//     visited[node]=true;
//     for(auto i:adj[node]){
//         if(!visited[i.first]){
//             dfs(i.first,s,adj,visited);
//         }
//     }
//     s.push(node);
//     return;
// }

// vector<int> shortestPathInDAG(int n, int m, vector<vector<int>> &edges)
// {
//     unordered_map<int,list<pair<int,int>>> adj;
//     for(int i=0;i<m;i++){
//         int u=edges[i][0];
//         int v=edges[i][1];
//         int w=edges[i][2];
//         adj[u].push_back({v,w});
//     }

//     stack<int> s;
//     vector<bool> visited(n,false);
//     dfs(0,s,adj,visited);

//     vector<int> dist(n,1e9);
//     dist[0]=0;
//     while(!s.empty()){
//         int front=s.top();
//         int dis=dist[front];
//         s.pop();
//         for(auto neighbour:adj[front]){
//             int edgeWt=neighbour.second;
//             int edgeNode=neighbour.first;
//             if(edgeWt+dis<dist[edgeNode]){
//                 dist[edgeNode]=edgeWt+dis;
//             }
//         }
//     }

//    for(int i=0;i<dist.size();i++){
//        if(dist[i]==1e9){
//            dist[i]=-1;
//        }
//    }
//     return dist;
// }



// //Q. prim's algo[mst]
//  int spanningTree(int V, vector<vector<int>>& edges) {
//         unordered_map<int,list<pair<int,int>>> adj;
//         for(int i=0;i<edges.size();i++){
//             int u=edges[i][0];
//             int v=edges[i][1];
//             int wt=edges[i][2];
            
//             adj[u].push_back({v,wt});
//             adj[v].push_back({u,wt});
//         }
        
//         vector<int> key(V,INT_MAX);
//         vector<bool> mst(V,false);
//         vector<int> parent(V);
        
//         key[0]=0;
//         parent[0]=-1;
//         for(int i=0;i<V;i++){
            
//             int mini=INT_MAX;
//             int u;
//             for(int j=0;j<V;j++){
//                 if(!mst[j] && key[j]<mini){
//                     u=j;
//                     mini=key[j];
//                 }
//             }
//             mst[u]=true;
            
//             for(auto neighbour:adj[u]){
//                 if(!mst[neighbour.first] && neighbour.second<key[neighbour.first]){
//                     key[neighbour.first]=neighbour.second;
//                     parent[neighbour.first]=u;
//                 }
//             }
//         }
        
//         int ans=0;
//         for(int i=0;i<key.size();i++){
//             ans+=key[i];
//         }
        
//         return ans;
//     }


//Kruskal's algorithm[MST]
// bool cmp(vector<int> &a,vector<int> &b){
//     return a[2]<b[2];
//   }
  
  
//   void makeSet( vector<int> &parent,vector<int> &rank,int n){
//   for(int i=0;i<n;i++){
//     parent[i]=i;
//   }
//   }
  
//   int findparent(vector<int> &parent,int node){
//     if(parent[node]==node){
//       return node;
//     }
//     return parent[node]=findparent(parent,parent[node]);
//   }
  
//   void unionset(int u,int v, vector<int> &parent,vector<int> &rank){
  
//   u=findparent(parent,u);
//   v=findparent(parent,v);
//   if(rank[u]<rank[v]){
//     parent[u]=v;
//   }
//   else if(rank[v]<rank[u]){
//     parent[v]=u;
//   }
//   else{
//     parent[v]=u;
//     rank[u]++;
//   }
//   }
  
  
//   int minimumSpanningTree(vector<vector<int>>& edges, int n)
//   {
//     sort(edges.begin(),edges.end(),cmp);
//    vector<int> parent(n);
//    vector<int> rank(n,0);
  
//    makeSet(parent,rank,n);
//   int mstwt=0;
//    for(int i=0;i<edges.size();i++){
//      int u=findparent(parent,edges[i][0]);
//      int v=findparent(parent,edges[i][1]);
//     int wt=edges[i][2];
  
//   if(u!=v){
//     mstwt+=wt;
//     unionset(u,v,parent,rank);
//   }
//    }
  
//    return mstwt;
//   }





// //Bridges [tarjan's algo]

// void dfs(int node,vector<bool> &visited,vector<int> &time,int &timer, vector<int> &lowTime,unordered_map<int,list<int>> &adj,vector<int> &parent,vector<vector<int>> &result){
//     visited[node]=true;
//     time[node]=timer;
//     lowTime[node]=timer;
//     timer++;
//     for(auto nbr:adj[node]){
//         if(nbr==parent[node])continue;
//         if(!visited[nbr]){
//             parent[nbr]=node;
//             dfs(nbr,visited,time,timer,lowTime,adj,parent,result);
//             lowTime[node]=min(lowTime[node],lowTime[nbr]);

//             if(lowTime[nbr]>time[node]){
//                 vector<int> ans;
//                 ans.push_back(node);
//                 ans.push_back(nbr);
//                 result.push_back(ans);
//             }

//         }

//         else{
//             lowTime[node]=min(lowTime[node],lowTime[nbr]);
//         }
//     }
// }

// vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
//     unordered_map<int,list<int>> adj;
//     for(int i=0;i<e;i++){
//         int u=edges[i][0];
//         int v=edges[i][1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     int timer=0;
//     vector<bool> visited(v);
//     vector<int> parent(v,-1);
//     vector<int> time(v,-1);
//     vector<int> lowTime(v,-1);

//     vector<vector<int>> result;
//     for(int i=0;i<v;i++){
//         if(!visited[i]){
//             dfs(i,visited,time,timer,lowTime,adj,parent,result);
//         }
//     }

//     return result;
// }



// //Q. flood fill algo.
//  bool colorable(int sr,int sc,vector<vector<int>>& image,int originalColor,int color){
//         int n=image.size();
//         int m=image[0].size();
//         if((sr>=0 && sr<n) && (sc>=0 && sc<m) && (image[sr][sc]==originalColor) && (image[sr][sc]!=color)){
//             return true;
//         }
//         else return false;
//     }
// public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         int originalColor=image[sr][sc];
        
//         queue<pair<int,int>> q;
//         image[sr][sc]=color;
//         q.push({sr,sc});
//         while(!q.empty()){
//             pair<int,int> front=q.front();
//             q.pop();
//             int row=front.first;
//             int col=front.second;
//             if(colorable(row+1,col,image,originalColor,color)){
//                 q.push({row+1,col});
//                 image[row+1][col]=color;
//             }
//              if(colorable(row-1,col,image,originalColor,color)){
//                 q.push({row-1,col});
//                 image[row-1][col]=color;
//             }
//              if(colorable(row,col+1,image,originalColor,color)){
//                 q.push({row,col+1});
//                 image[row][col+1]=color;
//             }
//              if(colorable(row,col-1,image,originalColor,color)){
//                 q.push({row,col-1});
//                 image[row][col-1]=color;
//             }
//         }

//         return image;
//     }



// //Q. critical connections in a network
// void dfs(vector<vector<int>> &ans, vector<int> &discovery,vector<int> &earliest,vector<int> &parent,
//      vector<bool> &visited,unordered_map<int,list<int>> &adj,int node,int timer){

//         visited[node]=true;
//         discovery[node]=timer;
//         earliest[node]=timer++;

//         for(auto neighbour:adj[node]){
//             if(neighbour==parent[node]) continue;
//             if(!visited[neighbour]){
//                 parent[neighbour]=node;
//                 dfs(ans,discovery,earliest,parent,visited,adj,neighbour,timer);
//                 earliest[node]=min(earliest[node],earliest[neighbour]);

//                 if(earliest[neighbour]>discovery[node]){
//                     vector<int> temp;
//                     temp.push_back(neighbour);
//                     temp.push_back(node);
//                     ans.push_back(temp);
//                 }
//             }
           
//             else{
//               earliest[node]=min(earliest[node],discovery[neighbour]);
//             }

//         }
//      }
// public:
//     vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
//         unordered_map<int,list<int>> adj;
//         for(int i=0;i<connections.size();i++){
//             int u=connections[i][0];
//             int v=connections[i][1];
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }

//         vector<int> discovery(n,-1);
//          vector<int> earliest(n,-1);
//           vector<int> parent(n,-1);
//            vector<bool> visited(n,false);

//            int timer=0;

//            vector<vector<int>> ans;
//            for(int i=0;i<n;i++){
//             if(!visited[i]){
//                 dfs(ans,discovery,earliest,parent,visited,adj,i,timer);
//             }
//            }

//         return ans;
//     }



// //Q. strongly connected components[kosaraju algo.]

// void dfs(int node,unordered_map<int,list<int>> &transpose,vector<bool> &visited){
// 	visited[node]=true;

// 	for(auto nbr:transpose[node]){
// 		if(!visited[nbr])
// 		{dfs(nbr,transpose,visited);}
// 	}
// }

// void topoSort(stack<int> &st,int node,unordered_map<int,list<int>> &adj,vector<bool> &visited){
// 	visited[node]=true;

// 	for(auto nbr:adj[node]){
// 		if(!visited[nbr]){
// 			topoSort(st,nbr,adj,visited);
// 		}
// 	}

// 	st.push(node);
// }

// int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
// {

// 	unordered_map<int,list<int>> adj;
// 	for(int i=0;i<edges.size();i++){
// 		int u=edges[i][0];
// 		int v=edges[i][1];
// 		adj[u].push_back(v);
// 	}

// 	vector<bool> visited(v,false);
// 	stack<int> st;
// 	for(int i=0;i<v;i++){
// 		if(!visited[i])
// 		topoSort(st,i,adj,visited);
// 	}

// 	unordered_map<int,list<int>> transpose;
// 	for(int i=0;i<visited.size();i++){
// 		visited[i]=false;
// 	}
// 	for(int i=0;i<v;i++){
// 		for(auto nbr:adj[i]){
// 			transpose[nbr].push_back(i);
// 		}
// 	}

// 	int componentsCount=0;
// 	while(!st.empty()){
// 		int top=st.top();
// 		st.pop();

// 		if(!visited[top]){
			
// 			dfs(top,transpose,visited);
// 			componentsCount++;
// 		}
// 	}

// 	return componentsCount;

// }





// //Q. bellman ford algo.
//   vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
//         vector<int> dist(V,1e8);
//         dist[src]=0;
        
//         for(int i=1;i<V;i++){
//             for(int j=0;j<edges.size();j++){
//                 int u=edges[j][0];
//                 int v=edges[j][1];
//                 int w=edges[j][2];
//                 if(dist[u]!=1e8 && dist[u]+w<dist[v]){
//                     dist[v]=dist[u]+w;
//                 }
//             }
//         }
        
//         bool flag=false;
//         for(int j=0;j<edges.size();j++){
//                 int u=edges[j][0];
//                 int v=edges[j][1];
//                 int w=edges[j][2];
//                 if(dist[u]!=1e8 && dist[u]+w<dist[v]){
//                     dist[v]=dist[u]+w;
//                     flag=true;
//                 }
//             }
            
//             vector<int> temp(1,-1);
            
//             if(flag) return temp;
            
//             return dist;
        
//     }



// //Q. min steps by night
//  bool isSafe(int x,int y,int n){
//         if((x>=0 && x<n) && (y>=0 && y<n)) return true;
//         return false;
//     }
//   public:
//     int minStepToReachTarget(vector<int>& knightPos, vector<int>& targetPos, int n) {
//         queue<pair<int,int>> q;
//         vector<vector<bool>> visited(n, vector<bool>(n,false));
//         vector<vector<pair<int,int>>> parent(n,vector<pair<int,int>>(n));
        
//         int srcX=knightPos[0]-1;
//         int srcY=knightPos[1]-1;
//         q.push({srcX,srcY});
//         visited[srcX][srcY]=true;
//         parent[srcX][srcY]=make_pair(-1,-1);
        
//         int destX=targetPos[0]-1;
//         int destY=targetPos[1]-1;
        
//         while(!q.empty()){
//             pair<int,int> front=q.front();
//             q.pop();
//             int X=front.first;
//             int Y=front.second;
            
//             if(X==destX && Y==destY) break;
            
//             if(isSafe(X-1,Y+2,n) && !visited[X-1][Y+2]){
//                 q.push({X-1,Y+2});
//                 parent[X-1][Y+2]={X,Y};
//                 visited[X-1][Y+2]=true;
//             }
//                if(isSafe(X-1,Y-2,n) && !visited[X-1][Y-2]){
//                 q.push({X-1,Y-2});
//                 parent[X-1][Y-2]={X,Y};
//                 visited[X-1][Y-2]=true;
//             }
//                if(isSafe(X+1,Y+2,n) && !visited[X+1][Y+2]){
//                 q.push({X+1,Y+2});
//                 parent[X+1][Y+2]={X,Y};
//                 visited[X+1][Y+2]=true;
//             }
//                if(isSafe(X+1,Y-2,n) && !visited[X+1][Y-2]){
//                 q.push({X+1,Y-2});
//                 parent[X+1][Y-2]={X,Y};
//                 visited[X+1][Y-2]=true;
//             }
//                if(isSafe(X-2,Y+1,n) && !visited[X-2][Y+1]){
//                 q.push({X-2,Y+1});
//                 parent[X-2][Y+1]={X,Y};
//                 visited[X-2][Y+1]=true;
//             }
//               if(isSafe(X-2,Y-1,n) && !visited[X-2][Y-1]){
//                 q.push({X-2,Y-1});
//                 parent[X-2][Y-1]={X,Y};
//                 visited[X-2][Y-1]=true;
//             }
//               if(isSafe(X+2,Y+1,n) && !visited[X+2][Y+1]){
//                 q.push({X+2,Y+1});
//                 parent[X+2][Y+1]={X,Y};
//                 visited[X+2][Y+1]=true;
//             }
//               if(isSafe(X+2,Y-1,n) && !visited[X+2][Y-1]){
//                 q.push({X+2,Y-1});
//                 parent[X+2][Y-1]={X,Y};
//                 visited[X+2][Y-1]=true;
//             }
            
//         }
        
//         int steps=0;
     
        
//         while(1){
//             if(destX==srcX && destY==srcY) break;
            
//             pair<int,int> p=parent[destX][destY];
//             destX=p.first;
//             destY=p.second;
//             steps++;
//         }
//         return steps;
        
//     }
}

