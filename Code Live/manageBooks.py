import numpy as np
import linecache as lc

file_path = "recommender/ratings-small.txt"


# get all data from file -> append to dict
def getData():
    username = []
    book_list = []
    rating = []
    f = open(file_path, "r")
    user_num, book_num, rating_num = 1, 2, 3
    for s in f:
        user = lc.getline(file_path, user_num).strip()
        data = lc.getline(file_path, book_num).strip()
        rate = lc.getline(file_path, rating_num).strip()
        if user == '':
            break
        username.append(user)
        book_list.append(data)
        rating.append(rate)
        user_num+=3
        book_num+=3
        rating_num+=3
    f.close()
    dict_infor = {"username": username, "bookname": book_list, "rating": rating}
    return dict_infor




def details():
    num = 0
    detail = {}
    rating_point = []
    ratin_dict = {}
    user = getData()["username"]
    user_set = list(set(user))
    book = getData()["bookname"]
    book_set = list(set(book))
    rating = getData()["rating"]


    return detail


def recommend():

    return 0

def avgrages():
    for i in set(getData()["bookname"]):
        print(i)
        print("\n")

def menuDisplay():
    print("Welcome to the CSC110 Book Recommender.")
    print("Type the word in the left column to do the action on the right.")
    print("recommend : recommend books for a particular user")
    print("averages  : output the average ratings of all books in the system")
    print("quit      : exit the program")
    s = input("next task? ")
    return s
if __name__ == '__main__':

    menuDisplay()