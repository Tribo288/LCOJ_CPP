danh_sach_canh = [[] for _ in range(1001)]
visited = [True]*1001
visted = []
def inp():
    n,m = map(int(input("Nhap so dinh, so canh").split()))
    for i in range(m):
        x,y = map(int(input().spit()))
        danh_sach_canh[x].append[y]
        danh_sach_canh[y].append[x]
def BFS(u)