def main ():
    n = int(input())
    count = 0
    while (n > 0):
        word = input()
        if word == "Tetrahedron":
            count += 4
        elif word == "Cube":
            count += 6
        elif word == "Octahedron":
            count += 8
        elif word == "Dodecahedron":
            count += 12
        else:
            count += 20
        n -= 1

    print(count)


main()