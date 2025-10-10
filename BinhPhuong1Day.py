lst= [2,4,3,6,7];
def avg(lst):
    for i in range(len(lst)):
        lst[i] = lst[i]**2;
    return lst;

#Cach 1 de nhap 1 list tu input:
lst=list(map(int, input().split()))
#Cach 2:
lst= [int(i) for i in input().split()]

avg(lst) #goi ham de tinh danh sach moi

print(*lst) # in toan bo danh sach ko co dau phay (Chi ap dung voi mang 1 chieu)


