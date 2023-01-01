n = int(input())
while(n):
    s = input()
    ans = 0
    for c in s: #迭代s中的每個char
        ans += ord(c) #ord:char to int
    print(ans)
    n-=1
