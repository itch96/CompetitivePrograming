T = int(input())
while T > 0 :
  T -= 1
  S = list(input())

  chefScore = 0
  opponentScore = 0
  tieBreaker = False
  for s in S :
    if s == '1' and tieBreaker == False :
      chefScore += 1
    elif s == '0' and tieBreaker == False :
      opponentScore += 1
    elif s == '1' and tieBreaker == True :
      opponentScore = 0
      chefScore += 1
      if chefScore == 2 :
        print('WIN')
        break
    elif s == '0' and tieBreaker == True :
        chefScore = 0
        opponentScore += 1
        if opponentScore == 2 :
          print('LOSE')
          break

    if chefScore == 11 :
      print("WIN")
      break
    elif opponentScore == 11 :
      print("LOSE")
      break
    elif chefScore == 10 and opponentScore == 10 :
      chefScore = 0
      opponentScore = 0
      tieBreaker = True