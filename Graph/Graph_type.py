n=int(input("Nhập số đỉnh của ma trận"))
mt=[]
print("Nhập ma trận kề của các đỉnh")
#Nhap ma tran
for x in range(n):
    for y in range(n):
        cot=[int(i) for i in input().split()]
        mt.append(cot)
#in ma tran ke
    for row in mt:
        for col in row:
            print(col,end=" ")
    print()
