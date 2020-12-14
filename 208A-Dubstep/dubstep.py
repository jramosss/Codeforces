def main ():
    word = input()
    l = []
    count = 0
    i = 0
    for c in word:
        l.append(c)
    
    while True:
        if (l[i] == 'W' and l[i+1] == 'U' and l[i+2] == 'B'):
            count += 1
            i += 3
        else:
            break


    word = word.replace("WUB",' ')
    print(word[count:word.__len__()])


#Runtime error
main()