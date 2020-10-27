s = str(input())
slist = []

for i in range(len(s)):
    slist.append(s[i:])
slist = sorted(slist)

for i in range(len(s)):
    print(slist[i])
