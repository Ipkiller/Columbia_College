# def sum_series(n):
#     if n<=0:
#         return n
#     p=sum_series(n-2)
#     p+=n
#     return p

# print(sum_series(6))

# def find_avegage(arr,n):
#     if n==1:
#         return arr[n-1]
#     return(find_avegage(arr,n-1)*(n-1)+arr[n-1])/n
# arr=[1,2,3,4,5]
# n=len(arr)
# print(find_avegage(arr,n))

# def find_product(x,y):
#     if y==1:
#         return x
#     return find_product(x,y-1)+x

# print(find_product(10,10))

def print_X(n):
    if n==1:
        return "x"
    return print_X(n-1)+"x"
