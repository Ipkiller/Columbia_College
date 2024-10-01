d = [['+', ' ', ' ', ' '], [' ', ' ', ' ', ' '],
     [' ', ' ', ' ', ' '], [' ', ' ', ' ', ' ']]
x = 1
y = -1
k = 0
while True:
    for i in range(len(d)):
        for j in range(len(d[0])):
            print(d[i][j], end="")
        print()
    print("Menu: ", end="")
    menu = input().lower()
    if menu == "exit" or k == len(d)-1:
        break
    menu = input()
    v = d[k][k]
    d[k][k] = ' '
    k += 1
    d[k][k] = v
