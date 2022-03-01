''' 
    Autor: Guiventura6;
    Data: 01/03/2022;
    Problema: Simple Calculate;
    Resume: Program that reads data from two products. Calculates and shows the amount
    to be paid.
'''
def calculate_amount(product):
    product = tuple(map(float, product.split()))# converting string to tuple
    code, units, price = product # unpacking 
    return units * price

product1 = input()
product2 = input()

amount = calculate_amount(product1) + calculate_amount(product2)

print('VALOR A PAGAR: R$ {:.2f}'.format(amount))

