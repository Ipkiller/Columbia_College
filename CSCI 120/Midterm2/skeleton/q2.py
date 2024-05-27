#814994
def closest_fibonacci(target):
    """
    Find the Fibonacci number closest to the given target number that is smaller than the target number,
    using recursion.

    Parameters:
    - target (int): The target number.

    Returns:
    - int: The Fibonacci number closest to the target that is smaller than the target.
    """
    # WRITE YOUR CODE BELOW 

    
    def finder(n):
        if n<1:
            return 1
        return finder(n-1)+finder(n-2)
    for i in range(target):
        collector=finder(i)
        if collector>target:
            break
        pre=collector

    if (target-pre)<(collector-target):
        return pre
    


    # DONT WRITE ANYTHING BELOW THIS
    pass
   

def main():
   
    input_list = [10, 30] 

    # Display the output
    for target_number in input_list:
        closest_fib = closest_fibonacci(target_number)
        print(f"\nTarget Number: {target_number}")
        print(f"Closest Fibonacci Number (Smaller than target): {closest_fib}")


if __name__ == "__main__":
    main()
