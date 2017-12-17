T = int(input())
while T > 0 :
  T -= 1
  D = input()
  
  hashmap = {}
  for n in D :
    if n in hashmap :
      hashmap[n] += 1
    else :
      hashmap[n] = 1
  
  flag = False
  for n in hashmap :
    if hashmap[n] == 1 :
      flag = True
      break
  
  if flag == True :
    print("Yes")
  else :
    print("No")  
