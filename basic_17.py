
s = input().lower().split(' ')

record = []

for i in range(len(s)):
    if(s[i] not in record):
        s[i].replace('\r', '') #\r踢掉
        record.append(s[i])
        if(i):
            print(' ', end='')
        print(s[i], end='')

print()
 