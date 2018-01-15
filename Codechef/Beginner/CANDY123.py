T = int(input())
while T > 0 :
  T -= 1
  A, B = map(int, input().split(' '))

  Limak = 0
  Bob = 0
  count = 0
  while True :
    count += 1
    Limak += count
    if Limak > A :
      print("Bob")
      break
    count += 1
    Bob += count
    if Bob > B :
      print("Limak")
      break