# T = int(input())
# while T > 0 :
#   T -= 1
#   S = list(input())

#   i = 0
#   count = 0
#   letter = []
#   while i < (len(S) - 2) :
#     if S[i] == S[i + 2] and S[i] not in letter :
#       letter.append(S[i])
#       count += 1
#     i += 1
  
#   if count == 2 :
#     print("YES")
#   else :
#     print("NO")


t = int(input())
for i in range(t):
	s1 = input()
	l = list(s1)
	s = set(l)
	if(len(s)!=2):
		print("NO")
		continue
	l1 = list(s)
	a = l1[0]
	b = l1[1]
	s=""
	s3=""
	for j in range(len(l)):
		if(j%2==0):
			s+=a
		else:
			s+=b
		if(j%2==0):
			s3+=b
		else:
			s3+=a
	if(s1==s or s1 ==s3):
		print("YES")
	else:
		print("NO")
