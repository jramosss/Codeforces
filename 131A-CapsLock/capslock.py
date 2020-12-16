def caps (word : str):
    first = True
    for c in word:
        if first:
            first = False
        else:
            if c.islower():
                return False
    return True


def correct (word : str):
    first = True
    word[0] = word[0].upper()
    for c in word:
        if first:
            first = False
        else:
            c = c.lower()
    print(word)
    return word


def main ():
    word : str = str(input())
    word = correct(word) if caps(word) else word
    print(word)
    

main()