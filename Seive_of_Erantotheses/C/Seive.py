i = 0
n = 60000
sieve = list(range(2, n+1))
root = int(n**(1/2))

while sieve[i] <= root:
    for j in sieve:
        if j <= sieve[i]:
            continue
        elif j % sieve[i] == 0:
            sieve.pop(sieve.index(j))
    i += 1

print(sieve)
