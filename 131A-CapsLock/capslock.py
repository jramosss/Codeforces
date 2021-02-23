def main ():
    word = input()            
    if word[0].lower():
        print(word)
        return
    else:
        first = True
        res = ""
        for c in word:
            if first:
                res += word[0].upper()
                first = False
            else:
                res += c.lower()
    
    print(res)


main()