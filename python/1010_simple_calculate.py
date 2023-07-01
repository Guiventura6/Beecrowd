'''
    Autor: Guiventura6
    Data: 01/03/2022
    Modified: 26/06/2023
    Problema: Simple Calculate
    Resume: Program that reads data from two products. Calculates and shows
    the amount to be paid.
'''


class Product():
    def __init__(self, code, units, price):
        self.code = int(code)
        self.units = int(units)
        self.price = float(price)

    def calculate_amount(self):
        return self.units * self.price


# Enter product 1
code, units, price = input().split()
p1 = Product(code, units, price)
# Enter product 2
code, units, price = input().split()
p2 = Product(code, units, price)

total = p1.calculate_amount() + p2.calculate_amount()

print("VALOR A PAGAR: R$ %.2f" % total)
