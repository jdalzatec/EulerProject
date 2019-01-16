def isLeap(year):
    if (year % 100 == 0) and not (year % 400 == 0):
        return False
    if year % 4 == 0:
        return True
    return False

daysPerMonth = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
yearDays = []
weekDays = []

years = range(1900, 2001)

for year in years:
    if isLeap(year):
        daysPerMonth[1] = 29

    for d in daysPerMonth:
        yearDays += list(range(1, d + 1))

    daysPerMonth[1] = 28

for i in range(len(yearDays)):
    weekDays.append(i % 7 + 1)

count = 0
for i, day in enumerate(yearDays[365:]):
    if day == 1 and weekDays[i + 365] == 7:
        count += 1
print(count)

# time 0.038 s