import string

def main ():
    word = input()
    lower = 0
    upper = 0
    for c in word:
        if c.islower():
            lower += 1
        else:
            upper += 1
    if lower < upper:
        word = word.upper()
    else:
        word = word.lower()

    print(word)


main()
