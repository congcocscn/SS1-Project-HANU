
print('Enter a string of number: ')
stringOfNumb = input()
total = 0
for i in range(len(stringOfNumb)):
    stringToIntConvert = int(stringOfNumb[i])  #convert string to int
    total += stringToIntConvert   #Find sum of the number
print(total)
