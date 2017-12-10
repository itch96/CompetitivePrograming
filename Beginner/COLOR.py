T = int(input())
while(T > 0):
  T -= 1
  N = int(input())
  S = list(input())

  dictionary = {}
  colors = []
  count = []

  for c in S:
    if c in dictionary:
      dictionary[c] = dictionary[c] + 1
    else:
      dictionary[c] = 1

  maximum = 0
  color = ''
  for c in dictionary:
    if dictionary[c] > maximum:
      maximum = dictionary[c]
      color = c

  value = 0
  for c in dictionary:
    if c != color:
      value += dictionary[c]
  print(value)