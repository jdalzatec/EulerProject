def main():
	limit = 100
	numbers = list()

	for i in range(2, limit + 1): 
		for j in range(2, limit + 1):
			numbers.append(i**j)

	distinct = list()		
	for number in numbers:
		if number not in distinct:
			distinct.append(number)

	print (len(distinct))

if __name__ == '__main__':
	main()