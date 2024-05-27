import sys

def calculate_net_profit(buying_price, selling_price):
    net_profit = 0

    num_items = 1000
    
    total_selling_price = selling_price * num_items
    
    restocking_price = selling_price + 2 
    restocking_cost = restocking_price * num_items
    
    net_profit = total_selling_price - restocking_cost
    if net_profit<0:
        net_profit=str(net_profit)+"\nLoss"

    #Don't write anything below this line, store the calculated net profit in variable net_profit
    print(f"{net_profit}")

if __name__ == "__main__":
    # Check if there are exactly two command line arguments
    if len(sys.argv) != 3:
        print("Usage: python program.py <buying_price> <selling_price>")
    else:
        buying_price_arg = int(sys.argv[1])
        selling_price_arg = int(sys.argv[2])
        calculate_net_profit(buying_price_arg, selling_price_arg)
