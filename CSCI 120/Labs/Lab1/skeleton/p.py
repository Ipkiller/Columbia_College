import sys

def calculate_salary_and_bonus(category, hours_worked):
    if category not in {'A', 'M', 'E'}:
        print("Invalid employee category. Please use 'A', 'M', or 'E'.")
        return

    if not hours_worked.isdigit():
        print("Invalid hours worked. Please provide a valid number.")
        return
    hours_worked = int(hours_worked)
    total_salary = 0
    #Write your code here
    if category=='A':
        salary=25
        rate=5
        bonus=100
        if hours_worked==40:
            total_salary = 40*salary
        elif hours_worked>=41 and hours_worked<=60:
            total_salary=(salary+rate)*hours_worked+bonus
    elif category=='M':
        salary=40
        rate=10
        bonus=150
        if hours_worked==40:
            total_salary = 40*salary
        elif hours_worked>=41 and hours_worked<=60:
            total_salary=(salary+rate)*hours_worked+bonus
    if category=='E':
        salary=75
        rate=25
        bonus=250
        if hours_worked==40:
            total_salary = 40*salary
        elif hours_worked>=41 and hours_worked<=60:
            total_salary=(salary+rate)*hours_worked+bonus

    #Don't write anything below this line, store the calculated total salary in variable total_salary
    print(f"{total_salary}")

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python script.py <employee_category> <hours_worked>")
    else:
        category = sys.argv[1].upper()
        hours_worked = sys.argv[2]
        calculate_salary_and_bonus(category, hours_worked)