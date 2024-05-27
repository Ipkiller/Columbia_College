
b = [3,5,1,4,2]
i = 0
n = len(b)

def swap(b,low,high):
    element = b[high]
    b[high] = b[low]
    b[low] = element

# while i < n:
#     j = i
#     while j > 0:
#         if b[j-1] > b[j]:
#             element = b[j-1]
#             b[j-1] = b[j]
#             b[j] = element
#         j = j-1
#     i += 1

while i<n:
    j =b.index(min(b[i:]))
    swap(b,i,j)
    i+=1
print(b)



# def merge_sort(arr):
#     if len(arr) <= 1:
#         return arr

#     mid = len(arr) // 2
#     left = arr[:mid]
#     right = arr[mid:]

#     left = merge_sort(left)
#     right = merge_sort(right)

#     return merge(left, right)


# def merge(left, right):
#     result = []
#     i = j = 0

#     while i < len(left) and j < len(right):
#         if left[i] < right[j]:
#             result.append(left[i])
#             i += 1
#         else:
#             result.append(right[j])
#             j += 1

#     result.extend(left[i:])
#     result.extend(right[j:])

#     return result
