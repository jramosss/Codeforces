def main():
    num1 = int(input())
    num2 = int(input())
    num3 = int(input())
    res = max(num1*(num2+num3), num1*num2*num3, (num1+num2)*num3, num1+num2+num3)
    print(res)


main()