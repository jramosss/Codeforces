def main ():
    n = int(input())
    word = input()
    alphabet = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','w','y','z']
    marked = []
    for c in word:
        aux = c.lower()
        if aux in alphabet:
            if aux not in marked:
                marked.append(aux)
        else:
            print(aux)
            print("NO")
            return

    if len(alphabet) <= len(marked):
        print("YES")
    else:
        print("NO")

main()