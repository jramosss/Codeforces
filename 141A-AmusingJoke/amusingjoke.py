def main ():
    name1 = input()
    name2 = input()
    name3 = input()
    l = []

    for c in name1:
        l.append(c)
    
    for c in name2:
        l.append(c)
    
    for c in name3:
        if l.__contains__(c):
            l.remove(c)
        else:
            print("NO")
            return -1

    print("YES")
    

main()