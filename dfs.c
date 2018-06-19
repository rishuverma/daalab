#include<stdio.h>
int visited[10],G[10][10],n;
void dfs(int i){
	printf("\n%d",i);
	visited[i]=1;
	int j;
		for(j=0;j<n;j++){
			if(!visited[j]&&G[i][j]==1)
				dfs(j);
		}
}
int main(){
	int i,j,k;
	printf("enter the size ");
	scanf("%d",&n);
	for(k=0;k<n;k++)
		visited[k]=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&G[i][j]);
	
		}
	
		//for(k=0;k<n;k++)
		//	printf("%d ",visited[k]);
	}
		dfs(0);
}