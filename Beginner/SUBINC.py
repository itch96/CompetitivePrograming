T = int(input())
while T > 0 :
  T -= 1
  N = int(input())
  A = list(map(int, input().split(' ')))

  count = N
  for i in range(0, N - 1) :
    j = i
    while j < N - 1 and A[j] <= A[j + 1] :
      count += 1
      j += 1
  
  print(count)