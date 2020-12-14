def main ():
    n = int(input())
    names = {}
    for _ in range (n):
        new_name = input()

        if new_name in names.keys():
            out_name = new_name + str(names[new_name])
            names[new_name] += 1
            print(out_name)

        else:
            new_pair = {new_name : 1}
            names.update(new_pair)
            print("OK")


main()