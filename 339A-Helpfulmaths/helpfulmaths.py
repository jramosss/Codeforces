def find_max(s):
    max = -999999
    for c in s:
        if c == '+':
            continue
        if c > max:
            max = c
    return max


def is_sorted (s):
    for i in range(0,s.__len__()):
        if c == '+':
            continue
        elif s[i] < s[i+1]:
            return False
    return True


def main ():
    s = input()
    maxx = -99999
    sarr = []
    while not is_sorted(s):
        find_max(s)
        sarr.append(max)
