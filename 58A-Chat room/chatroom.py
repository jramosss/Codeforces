def main():
    word = input("Word: ")
    word2 = "hello"
    pas = 0
    j = 0
    for i in range (1,word.__len__()):
        if word[i] == word2[j]:
            j += 1
            pas += 1

        if pas == 5:
            break

    if pas == 5:
        print("YES")
        
    else:
        print("NO")


main()