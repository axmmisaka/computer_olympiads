struct node{
	int x,step;
};
queue<node> q;
bool vis[N];
node starf;
starf.x=x;
starf.step=0;
void bfs(node starf)
{
	q,push(starf);
	while(!q.empty())
	{
		node tmp=q.front;
		q.pop();
	}
	/*
	0<=tmp.x+1<=10^7&&!vis[tmp.x+1]
	
}
