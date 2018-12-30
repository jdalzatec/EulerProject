def factorial(number):

	if number == 0:
		return 1
	return number*factorial(number-1)

def main():

	system_size = 20
	paths = int(factorial(2*system_size)/(factorial(system_size)**2))
	print (paths)

if __name__ == '__main__':
	main()
