T = int(input())
while(T > 0):
  T -= 1
  N = int(input())
  A = list(map(int,input().split(' ')))
  B = list(map(int, input().split(' ')))

  count = 0
  start = 0
  for i in range(0,N):
    current = A[i]
    if((current - start) >= B[i]):
      count += 1
    start = current

  print(count)