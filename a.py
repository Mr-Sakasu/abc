from itertools import accumulate
import bisect
from bisect import bisect_left
from re import sub

k = int(input())
s = input().strip()
t = input().strip()


def calc_score (u: str) : 
    score = 0
    mp = {}
    mp = {i: 0 for i in range (0,10)}
    for i in range(len(u)) : 
        mp[int(u[i])] += 1
    for i in range(1,10) : 
        score += i * (10 ** mp[i])
    return score

ans = 0
cur_num_mp_s = {}
cur_num_mp_t = {}
for i in range(1, 10) : 
    cur_num_mp_s[i] = 0
    cur_num_mp_t[i] = 0
for i in range(len(s)-1) : 
    cur_num_mp_s[int(s[i])] += 1
    cur_num_mp_t[int(t[i])] += 1
# print(cur_num_mp_s, cur_num_mp_t)
cnt = 0
for i in range (1, 10) : 
    if k - cur_num_mp_s[i] <= 0 : continue
    s = s[:4] + str(i)
    cur_num_mp_s[i] += 1
    a = calc_score(s)
    # print(f"ok_i = {i}")
    for j in range(1, 10) : 
        if k - cur_num_mp_t[j] - cur_num_mp_s[j] <= 0 : continue
        # print(f"ok_j = {j}")
        cur_num_mp_t[j] += 1
        t = t[:4] + str(j)
        b = calc_score(t)
        if (a > b) :
            print(f"wins: {i, j}") 
            ans+=1
        cur_num_mp_t[j] -= 1
    cur_num_mp_s[i] -= 1

print(ans / (9*k-8) / (9*k-9))
