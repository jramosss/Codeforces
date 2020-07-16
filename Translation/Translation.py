import string

def main ():
    word = input()
    attempt = input()
    inverse = word[::-1]
    if attempt == inverse:
        print("YES")
    else:
        print("NO")


main()