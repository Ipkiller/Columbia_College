# An empty inventory
inventory={}
#Functions of different usage to add,and remove the items and to display the inventory data

def add():
    try:
        collector=(input("Enter item name: ")).lower()
        quantity=int(input("Enter quantity: "))
        if collector in inventory.keys():
            inventory[collector]+=quantity
            menu()
            return f"{collector.capitalize()} ({quantity}) has been added in the Inventory"
        else:
            inventory.update({collector:quantity})
            menu()
            return f"{collector.capitalize()} ({quantity}) has been added in the Inventory"

    except:
        return "Invaild input\nPlease Enter the item and and its quantity "

def remove():
    try:
        collector=(input("Enter item name: ")).lower()
        quantity=int(input("Enter quantity: "))
        if collector in inventory.keys():
            inventory[collector]-=quantity
            if inventory[collector]<=0:
                inventory.pop(collector)
            menu()
            return f"{collector.capitalize()} ({quantity}) has been removed from the Inventory"
        else:
            menu()
            return f"{collector.capitalize()} does not exist in the Inventory"

    except:
        return "Invaild input\nPlease Enter the item and and its quantity "

def display():
    top=":  Item Name  :  Quantity  :\n"
    for keys in inventory.keys():
        top+=f":  {keys.capitalize()}{" "*(11-len(keys))}:"+f"  {inventory[keys]}{" "*(8-len(str(inventory[keys])))}  :\n"
    return top
# User menu interface
def menu():
    print("\nWelcome to the Inventory managment System!\n")
    print("1. Use '1' to Add an item")
    print("2. Use '2' to Remove an item")
    print("3. Use '3' to Display current inventory")
    print("4. Use '4' to Exit\n")

menu()
while True:
    collector=input("Enter your choice: ")

    if collector=="1":
        print(add())

    elif collector=="2":
        print(remove())

    elif collector=="3":
        print(display())

    elif collector=="4":
        print("You have been Exit the program")
        break

    else:
        print("invaild input")