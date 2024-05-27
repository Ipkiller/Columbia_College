stations=["Central","Gateway","Scottroad","Columbia","New West","22nd Street","Edmonds"]
time=2
i=0
k=((len(stations)*time)/2)-1
k=int(k)
print(k)
while i<((len(stations)*time)):
  if i<((len(stations)*time)/2):
    print("Next Station is"+" "+stations[i])
    i+=1
  elif i>=((len(stations)*time)/2):
    print("Next Station is"+" "+stations[k])
    k-=1
    i+=1
