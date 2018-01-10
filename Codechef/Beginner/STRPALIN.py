T = int(input())
while T > 0 :
  T -= 1
  A = input()
  B = input()

  flag = False
  for a in A :
    if a in B :
      flag = True
      break
  
  if flag == True :
    print("Yes")
  else :
    print("No")