
adj = [[] for i in range(1001)] #mang luu cac dinh
visited = [False]*1001
def inp():
    n,m = map(int,input("Nhap so dinh va so canh: ").split());
    for i in range(m):
        x,y= map(int,input().split());
        adj[x].append(y);
        adj[y].append(x);
def dfs(u):
    print(u," ");
    visited[u] = True;
    for i in adj[u]:
        if visited[i] == False:
            dfs(i);
if __name__=="__main__":
    inp()
    dfs(1)