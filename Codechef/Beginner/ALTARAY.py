T = int(input())
while T > 0 :
  T -= 1
  N = int(input())
  A = list(map(int, input().split(' ')))
  output = [1] * N
  index = 0
  
  for i in range(N - 2, -1, -1) :
    if A[i] * A[i + 1] < 0  :
      # output.append(output[index] + 1)
      # index += 1
      output[i] = output[i + 1] + 1
    else :
      # output.append(1)
      # index += 1
      output[i] = 1

  # result = ''
  # for i in output :
  #   result += str(i) + ' '

  # print(result[len(result) - 2::-1])
  print(*output)
