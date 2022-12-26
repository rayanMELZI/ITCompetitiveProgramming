x = input('give an integer: ')
if int(x) > int(0):
    str(x)
    x = x[::-1]
    print(x)
else:
    str(x)
    x = x[:0:-1]
    print('-' + x)