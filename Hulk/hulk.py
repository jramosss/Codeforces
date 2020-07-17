
#Doesnt work

def main ():
    num = input()
    word1 = "I hate it"
    word2 = "I love it"
    first = True
    second = False
    for i in range (1,num):
        if first:
            res = word1
            first = False
            second = True
        elif second:
            res = word1.replace("it","that") + word2
        else:
            pass
    print(res)
            
