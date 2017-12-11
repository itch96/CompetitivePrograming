T = int(input())
while(T > 0):
  T -= 1
  values = list(map(int, input().split(' ')))
  N = values[0]
  K = values[1]
  words = list(input().split(' '))
  phrase = []
  for i in range(0, K):
    for word in input().split(' '):
      phrase.append(word)


  output = ""
  for w in words:
    present = False
    if w in phrase:
      output += "YES "
    else:
      output += "NO "
  print(output.rstrip())