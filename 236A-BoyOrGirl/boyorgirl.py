def main():
    name = input()
    arr = []
    for c in name:
        if not arr.__contains__(c):
            arr.append(c)
    if len(arr) % 2 == 0:
        print("CHAT WITH HER!")
    else:
        print("IGNORE HIM!")


main()