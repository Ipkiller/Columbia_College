d={'Granville':[1100,1110,1120,1130,1140],\
'Surrey Central':[1100,1120,1140]}
for i in range(1100,1150,10):
    print('Current time is ', i,end=" ")
    print('The train arrived at |',end=" ")
    for j in d.keys():
        if i in d[j]:
            print(j + ' |',end=" ")
    print()