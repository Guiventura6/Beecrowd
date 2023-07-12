'''
    Autor: Guiventura6
    Date: 12/07/2023
    Modified: ()
    Problem: Taxes
    Resume: Program that print the due value that this person must pay of
    taxes, according to the table
'''

salary = float(input())

if salary < 2000.00:
    print("Isento")
else:
    if salary <= 3000.00:
        totalTax = (salary - 2000.00) * 0.08
    elif salary <= 4500.00:
        totalTax = (salary - 3000.00) * 0.18 + 1000.00 * 0.08
    else:
        totalTax = (salary - 4500.00) * 0.28 + 1500.00 * 0.18 + 1000.00 * 0.08

    print("R$ %.2f" % totalTax)
