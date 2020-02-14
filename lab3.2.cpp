#include<iostream>
#include<cstring>
using namespace std;
int array[100][100];
int sum = 0;
bool visited[100];
int round =0;

void dfs(int start , int end, int k){
    visited[start] = true;

    if(start == end){
        if(round==k){
            sum++;
        }
    }else{
        for(int i=0;i<100;i++){
            if(array[start][i] == 1 && visited[i] == false){
                round++;
                dfs(i,end,k);
            }
        }
    }
    round--;
    visited[start] = false;

}


int main(){
    int n,e,x,y;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        cin>>x>>y;
        array[x][y] = 1;
    }
    memset(visited,false,sizeof(visited));
    int start,end,k;
    cin>>start>>end>>k;
    dfs(start,end,k);
    cout<<sum;
}
