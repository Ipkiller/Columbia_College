b=[[1,0,0,1],[1,0,0,1],[1,0,0,1],[1,0,0,1]]
c=[]
for i in range(len(b)):
    row=[]
    for j in range(len(b[0])):
        row.append(b[j][i])
    c.append(row)
print(c)
#print
# for i in range(len(b)):
#     for j in range(len(b[0])):
#         print(b[i][j])