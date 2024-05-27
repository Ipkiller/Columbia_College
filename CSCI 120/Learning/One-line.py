grade=int(input("Enter"))
        # print("yes") if n==1 else print("NO")
# print("A") if grade>90 else print("B") if grade>80 and grade<=90 else print("C") if grade<60 else print("no")
print(""+("A" if grade>90 else "B" if grade>80 and grade<=90 else "c" if grade<60 else ""))