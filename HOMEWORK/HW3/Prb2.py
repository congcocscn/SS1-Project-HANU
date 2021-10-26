def bubbleSort(arr, ascending):
    arrLength = len(arr)
    for i in range(arrLength-1):
        for j in range(arrLength-i-1):
            if ascending:
                #sorting by ascending order
                if arr[j] > arr[j+1]:
                    temp = arr[j]           #
                    arr[j] = arr[j+1]       #Swap if the element is greater than the next element
                    arr[j+1] = temp         #
            else:
                #sorting by descending order
                if arr[j] < arr[j+1]:
                    temp = arr[j]           #
                    arr[j] = arr[j+1]       #Swap if the element is smaller than the next element
                    arr[j+1] = temp         #
    return arr

if __name__ in "__main__":

    s = input("Enter number of array(seperate by a space): ")
    arr = list(map(int, s.split()))
    type = input("Do you want to arrange array in ascending or descending order: ")

    if type.strip().lower() == "ascending":
        ascending = True
    else:
        ascending = False
    print("Sorted array(" + type + "): ", bubbleSort(arr, ascending))