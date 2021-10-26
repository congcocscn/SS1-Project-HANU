
def getCorrectAnswers():
    with open('correct_answers.txt') as file:
        # read answers from correct_answers's file, ignore enter character
        answers = file.read().splitlines()
    return answers

def getStudentsAnswers():
    with open('student_answers.txt') as file:
        #read answers from student_answers's file, ignore enter character
        answers = file.read().splitlines()
    return answers

if __name__ in "__main__":

    #convert to set to compare the answers
    correcAns = set(getCorrectAnswers())
    studentAns = set(getStudentsAnswers())

    #set of true answers
    trueAns = correcAns.intersection(studentAns)
    #set of wrong answers
    wrongAns = studentAns.difference(correcAns)

    if len(trueAns) >= 15:
        print(":)) Congrat!!! You passed this exam.")
    else:
        print(":(( Sorry! failed this exam.")

    print("You answered {} questions correctly and incorrectly {} questions".format(len(trueAns), 20 - len(trueAns)))

    #print the list wrong answers
    print("Here are your wrong answers:")
    for i in wrongAns:
        print(i, end = '\t')