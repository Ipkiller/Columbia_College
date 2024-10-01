# s=[1,4,4,7,2,10,1,2,7,8]
# i=0
# while i<len(s):
#     element=s[i]
#     while s.count(element)==1:
#         s.remove(element)
#     i+=1

# print(s)
s=["Vancouver","Richmond","Burnaby","Surrey"]
for city in s:
    if 'o' in city:
        i= city.index('o')
        print(city[0:i]+city[i+1:])