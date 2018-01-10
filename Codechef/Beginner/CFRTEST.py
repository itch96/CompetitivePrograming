T = int(input())
while T > 0 :
  T -= 1
  n = int(input())
  days = list(map(int, input().split(' ')))

  hashmap = {}
  for d in days :
    if d in hashmap :
      hashmap[d] += 1
    else :
      hashmap[d] = 1
      
  print(len(hashmap))