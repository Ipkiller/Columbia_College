stations=["main","metro","waterfront","Central","nanimo"]
print("true")
i=0
while i<len(stations):
    if i !=5:
        print(stations[i])
        i+=1
    if i==5:
        i=(i-1)*-1
        if i<0:
                i*=-1
                print(stations[i])
