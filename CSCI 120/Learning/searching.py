# def binary_search(v,b):
#     i=0
#     j=len(b)-1
#     while i<=j:
#         mid=(i+j)//2
#         if b[mid]<v:
#             i=mid+i
#         elif b[mid]>v:
#             j=mid-1
#         else:
#             return mid
#     return -1 # not found

# b=list(i for i in range(100))
# v=98

# print(binary_search(v,b))

# def binary_search(v, b):
#     i = 0
#     j = len(b) - 1
#     while i <= j:
#         mid = (i + j) // 2
#         if b[mid] < v:
#             i = mid + 1
#         elif b[mid] > v:
#             j = mid - 1
#         else:
#             return mid
#     return -1 # not found

# b = list(i for i in range(100))
# v = 79

# index = binary_search(v, b)
# print(index)


# def binary_search(v, b, low=0, high=None):
#     if high is None:
#         high = len(b) - 1

#     if low > high:
#         return -1 # not found
    
#     mid = (low + high) // 2
#     if b[mid] < v:
#         return binary_search(v, b, mid + 1, high)
#     elif b[mid] > v:
#         return binary_search(v, b, low, mid - 1)
#     else:
#         return mid

b = list(i for i in range(100))
v = 120

# index = binary_search(v, b)
# print(index)

def recursion(v,b,left=0, right=None):
    if right is None:
        right=len(b)-1

    if left<=right:
        mid=(left+right)//2
        if b[mid] < v:
           return recursion(v,b,left=mid+1)
        elif b[mid] > v:
           return recursion(v,b,left,right=mid-1)
        else:
            return mid
    
    return -1

index=recursion(v,b)
print(index)