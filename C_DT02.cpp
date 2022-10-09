/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int Prim(vector<vector<int>> &graph){
    int num = graph.size();
    
    vector<int> dis(num, 1e5);
    dis[0] = 0;
    
    vector<bool> visit(num, false);
    
    for(int i=0;i<num;i++){
        int start = -1, min = 1e5;
        for(int j=0;j<num;j++){
            if(!visit[j] && dis[j] < min){
                start = j;
                min = dis[j];
            }
        }
        
        visit[start] = true;
        
        for(int end=0;end<num;end++){
            if(!visit[end]&& graph[start][end] < dis[end]){
                dis[end] = graph[start][end];
            }
        }
    }
    
    int sum = 0;
    for(int i=0;i<num;i++){
        sum += dis[i];
    }
    
    return sum;
}

int main(){
    int num;
    cin >> num;
    num++;
    vector<vector<int>> graph(num ,vector<int>(num, 1e5));
    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            cin >> graph[i][j];
        }
    }
    
    int sum = 0;
    sum = Prim(graph);
    cout << sum << endl;
    return 0;
}

