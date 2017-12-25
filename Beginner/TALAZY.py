import math;

T = int(input())
while T > 0 :
  T -= 1
  N, B, M = list(map(int, input().split(' ')))

  result = 0
  while N > 0 :
    # solve half of the problems with M time unit
    result += int(math.ceil(N / 2)) * M
    # take a break for B time unit
    result += B
    # now M will be twice its previous value
    M *= 2
    # the number of sums left
    N = int(math.floor(N / 2))

  print(result - B)