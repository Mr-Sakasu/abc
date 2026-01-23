import math
from math import cos, sin, radians
from collections import defaultdict

N, M = map(int, input().split())
lines = [tuple(map(int, input().split())) for _ in range(M)]


pos = [None] * N
theta = 360 / N
for i in range(N):
    phi = theta * i + 90  
    x = cos(radians(phi))
    y = sin(radians(phi))
    pos[i] = (x, y)

slope = defaultdict(int)
ans = 0
cnt = 0

for a, b in lines:
    a -= 1
    b -= 1
    x1, y1 = pos[a]
    x2, y2 = pos[b]
    if (x1, y1) > (x2, y2):
        x1, y1, x2, y2 = x2, y2, x1, y1
    dx = x2 - x1
    dy = y2 - y1
    alpha = math.atan2(dy, dx)
    alpha = round(alpha * 1e6) 
    slope[alpha] += 1
    ans += cnt - slope[alpha] + 1
    cnt += 1

print(ans)
