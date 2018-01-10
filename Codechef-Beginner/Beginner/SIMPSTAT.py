T = int(input())
while T > 0 :
  T -= 1
  N, K = list(map(int, input().split(' ')))
  A = list(map(int, input().split(' ')))

  A.sort()
  myList = []
  i = 0
  while i < N :
    if i >= K and i < (N - K) :
      myList.append(A[i])
    i += 1
  
  sum = 0
  for ele in myList :
    sum += ele
  
  print("%.6f" % (sum / len(myList)))
  