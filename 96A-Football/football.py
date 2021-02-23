def main ():
    word = input()
    z_counter = 0
    o_counter = 0
    for c in word:
        if o_counter == 7 or z_counter == 7:
            print("YES")
            return
        elif c == '1':
            o_counter += 1
            z_counter = 0
        else:
            z_counter += 1
            o_counter = 0
    
    if o_counter == 7 or z_counter == 7:
        print("YES")
    else:
        print("NO")


main()

