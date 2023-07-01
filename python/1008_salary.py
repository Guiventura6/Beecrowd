# autor: Guiventura6
# data: 18/02/2022
# Modified: 26/06/2023
# Problema: Salary

number = int(input())
worked_hours = int(input())
amount_per_hour = float(input())

salary = worked_hours * amount_per_hour

print('NUMBER = {}'.format(number))
print('SALARY = U$ {:.2f}'.format(salary))
