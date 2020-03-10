def main():
    name = input("Name: ")
    arr = []
    for c in name:
        if not arr.__contains__(c):
            arr.append(c)
    if arr.__len__() % 2 == 0:
        print("CHAT WITH HER!")
    else:
        print("IGNORE HIM!")


main()