from decimal import Decimal #decimal比float更精準
r = Decimal(input())
n = Decimal(input())
p = Decimal(input())

#等比級數除去第一項
ans = (((1+r)**(n+1)-1) / r * p - p)
print(int(ans))
