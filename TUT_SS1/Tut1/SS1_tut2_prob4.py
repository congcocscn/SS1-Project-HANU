def morse(code):
    s = input('Enter string: ').lower()  #input string and convert it to lowercase
    print('The morse code is: ', end='')
    for i in s:
        print(code[i], end=' ')   # define the key and print respectively the value inline seperate by the space

if __name__ in "__main__":
    code = { ' ': ' ', ',': '--..--', '.': '.-.-.-','?':'..--..','0':'-----','1':'.----','2':'..---','3':'...--','4':'....-','5':'.....','6':'-....','7':'--...','8':'---..','9':'----.','a':'.-','b':'-...','c':'-.-.','d':'-..','e':'.','f':'..-.','g':'--.','h':'....','i':'..','j':'.---','k':'-.-','l':'.-..','m':'--','n':'--','o':'---','p':'.--.','q':'--.-','r':'.-.','s':'...','t':'-','u':'..-','v':'...-','w':'.--','x':'-..-','y':'-.-','z':'--..'}
    morse(code)