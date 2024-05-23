n = int(input())
ms = 10**30
for k in range(1, n + 1):
    r = n % k
    m = n // k
    m1 = (n + k - 1) // k
    s = 0
    for i in range(m):
        s += k * (n - k * i) - (r + 1) * r // 2 * (m1 - i) - (k - r - 1) * (k - r) // 2 * (m - i) - r * (m1 - i) * (k - r - 1)
    s += r * (r + 1) // 2
    if (ms > s):
        ms = s
        ans = k
print(ans)
