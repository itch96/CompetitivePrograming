T = int(input())
while T > 0 :
  T -= 1
  N = int(input())
  A = list(map(int, input().split(' ')))

  count = N
  i = 0
  while i < N - 1 :
    temp = 1
    while i < N - 1 and A[i] <= A[i + 1] :
      i += 1
      temp += 1
    i += 1
    count += (temp * (temp - 1) / 2)
  print(int(count))