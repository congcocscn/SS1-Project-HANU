import time
if __name__ in "__main__":

    convertDate = {'01': 'January', '02': 'February', '03': 'March', '04': 'April', '05': 'May', '06': 'Jun',
                   '07': 'July', '08': 'August', '09': 'September', '10': 'October', '11': 'November', '12': 'December'}
    check = True
    while(check):
        dateFull = input("Input date in form mm/dd/yyyy: ")
        try:
            time.strptime(dateFull, '%m/%d/%Y')
            month, date, year = dateFull.split('/')
            print("{} {}, {}".format(convertDate[month], date, year))
            check = False
        except ValueError:
            print("Incorrect Format. Please input again!\n")
            check = True