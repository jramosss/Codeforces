def main ():
    n = int(input())
    word = input()
    letters = {None}
    for c in word:
        letters.add(c)
    if letters.__len__() >= 26:
        print("YES")
    else: 
        print("NO")


main()