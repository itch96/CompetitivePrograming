T = int(input())
while T > 0 :
  T -= 1
  N = int(input())
  A = list(map(int, input().split(' ')))
  output = ''
  for i in range(0, N - 1) :
    count = 1
    sign = 0
    if A[i] < 0 :
      sign = 0
    else :
      sign = 1
    for j in range(i + 1, N) :
      if A[j] < 0 :
        if sign == 1 :
          count += 1
        else :
          break
        sign = 0
      elif A[j] > 0 :
        if sign == 0 :
          count += 1 
        else :
          break
        sign = 1
    output += str(count) + ' '
    # print(count)
  print(output + '1')
  # print(1)
