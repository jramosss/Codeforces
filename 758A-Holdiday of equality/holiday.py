def main ():
    n = int(input())
    citizens = []
    for _ in range (n):
        citizens.append(int(input()))
    
    richest_one = max(citizens)
    spent = 0

    for c in citizens:
        spent += richest_one - c
    
    print(spent)


main()