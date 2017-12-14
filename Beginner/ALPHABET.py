S = list(input())
N = int(input())
while N > 0 :
  N -= 1
  W = list(input())
  
  flag = True
  for w in W :
    if w not in S :
      flag = False
      break
  
  if flag == True :
    print("Yes")
  else :
    print("No")
