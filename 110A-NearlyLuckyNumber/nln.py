
def main ():
    lucky_numbers = [4,7]
    word = input()
    count = 0
    for c in word:
        if c == '4' or c == '7':
            count += 1

    if count in lucky_numbers:
        print("YES")
    else:
        print("NO")


main()