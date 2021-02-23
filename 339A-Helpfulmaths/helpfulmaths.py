def main ():
    inp = input()
    refined_inp = list(inp.replace('+',''))
    sorted_inp = sorted(refined_inp)
    res = ""
    j = 0
    for i in sorted_inp:
        if not j == sorted_inp.__len__()-1:
            res += str(i) + '+'
        else:
            res += str(i)
        j += 1


    print(res)


main()

