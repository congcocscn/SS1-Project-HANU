dividend = []
divisor = []
quotient = []
remainder = []
#--------------- Extended euclidean algorithm
p = [0,1]
#--------------- Find root
x0 =0
root = []

#find gcd(a,n)
def gcd(a,n):
    dividend.append(n)
    divisor.append(a)
    q = n//a
    r = n%a
    quotient.append(q)
    remainder.append(r)

    index = 1
    while(True):
        dividend.append(divisor[index-1])
        divisor.append(remainder[index-1])

        q = dividend[index] // divisor[index]
        r = dividend[index] % divisor[index]
        quotient.append(q)

        if r == 0:
            remainder.append(r)
            break
        else:
            remainder.append(r)
            index += 1

    return remainder[len(remainder)-2]

#find the value r in gcd(a,n) = n.s+a.r
def r(n):
    q = quotient
    for i in range(2, len(q)+1):
        x = (p[i-2] - p[i-1]*q[i-2])%n
        p.append(x)
    return p[i]

#find set the root of equation
def modulo(a,b,n):
    d = gcd(a,n)
    x0 = int(((r(n) * b) / d) % (n / d))
    root.append(x0)
    for i in range(1, d):
        x = int((x0 + i * n / d) % n)
        root.append(x)
        return root
    else:
        return "No root!"


#---------------------------------------------------
#---------------------------------------------------
#---------------------------------------------------


def decrypt(c, d, n):
    m = []
    for i in c:
        x = (i**d)%n
        m.append(x)
    return m



def main():

    c = []
    s = input("Enter the code of encrypt message (each code seperate by a space): ")
    c = list(map(int, s.strip().split()))
    rsa_p = int(input("Enter p: "))
    rsa_q = int(input("Enter q: "))
    rsa_e = int(input("Enter e: "))

    rsa_n = rsa_p * rsa_q
    rsa_z = (rsa_p - 1) * (rsa_q - 1)

    set_root = modulo(rsa_e, 1, rsa_z)
    if type(set_root) == 'str':
        print("Does not exsit d!")
    else:
        decrypt_arr = decrypt(c, root[0], rsa_n)
        print("The message is: ", end='')
        for i in decrypt_arr:
            print(chr(i), end='')


main()