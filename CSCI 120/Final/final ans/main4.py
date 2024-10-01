# 814994
def create_and_save_product(products, search_category):
    """
    Function to add a list of products to the Product class ,
    Display all products sorted by price and 
    Print all data of the search category in sorted order

    Parameters:
    - products (list): A list of dictionaries representing products.
    - search_category (str): The category to search for.

    Returns:
    - None

    """
    # WRITE YOUR CODE HERE
    class Product:
        def __init__(self, name, category, price):
            self.name = name
            self.category = category
            self.price = price

        def display(self):
            print(
                f"Name: {self.name}, Category: {self.category}, Price: {self.price}")

    product_obj = []
    for product in products:
        product_obj.append(Product(
            product["name"], product["category"], product["price"]))

    lenght = len(product_obj)
    for index in range(lenght):
        min_index = index
        for j in range(index+1, lenght):
            if product_obj[j].price < product_obj[min_index].price:
                min_index = j
        value = product_obj[index]
        product_obj[index] = product_obj[min_index]
        product_obj[min_index] = value
    product_obj=sorted(product_obj,lambda product: product.price)

    print("All Products Sorted by Price:")
    for product in product_obj:
        product.display()

    print(f"\nProducts in category '{search_category}' Sorted by Price:")
    for product in product_obj:
        if product.category == search_category:
            product.display()

    # DO NOT CHANGE ANYTHING BELOW THIS


def main():
    # Dummy data for products
    products = [
        {"name": "Laptop", "category": "Electronics", "price": 999.99},
        {"name": "Smartphone", "category": "Electronics", "price": 699.99},
        {"name": "Shirt", "category": "Clothing", "price": 29.99},
        {"name": "Jeans", "category": "Clothing", "price": 39.99}
    ]

    # Search category
    search_category = "Clothing"

    # Call the function to create and save products and display data
    create_and_save_product(products, search_category)


if __name__ == "__main__":
    main()
