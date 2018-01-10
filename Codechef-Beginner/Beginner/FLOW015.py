import datetime
weekdays = ['monday', 'tuesday', 'wednesday', 'thursday', 'friday', 'saturday', 'sunday']

T = int(input())
while T > 0 :
  T -= 1
  year = int(input())
  print(weekdays[datetime.date(year, 1, 1).weekday()])
