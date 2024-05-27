def sort(object):
    if len(object)<=1:
        return
    for i in range(1,len(object)):
        element=object[i]
        left_element_index=i-1
        while element<object[left_element_index] and left_element_index>=0:
            object[left_element_index+1]=object[left_element_index]
            object[left_element_index]=element
            left_element_index -=1
    return object
x=[2,1,3,0,6,5]
# print(sort(x))
y=x.sorted(x)
print(x)

