if __name__ in "__main__":
    fullName = input('Input your name: ')
    firstName,middleName,lastName = fullName.split()
    print("{}. {}. {}".format(firstName[0].upper(), middleName[0].upper(), lastName[0].upper()))
