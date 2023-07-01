'''
    Autor: Guiventura6
    Data: 01/03/2022
    Modified: 26/06/2023
    Problema: Salary with Bonus
    Resume: Program that reads data from a seller and calculates your salary
            with bonus.
'''


def calculate_bonus(sales):
    '''Receives total sales and calculates 15% bonus.
    Parameters:
        sales (float): seller's total sales

    Returns:
        bonus (float): total bonus receivable
    '''
    return sales * 0.15


seller_name = input()
salary = float(input())
total_sales = float(input())

total_salary = salary + calculate_bonus(total_sales)

print('TOTAL = R$ {:.2f}'.format(total_salary))
