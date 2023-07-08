'''
    Autor: Guiventura6
    Date: 08/07/2023
    Modified: ()
    Problem: Salary Increase
    Resume: Program that calculate a salary increase to employees.
'''


def increase_percentual(salary):
    if salary > 0 and salary <= 400.0:
        increase = 0.15
    elif salary <= 800.0:
        increase = 0.12
    elif salary <= 1200.0:
        increase = 0.10
    elif salary <= 2000.0:
        increase = 0.07
    else:
        increase = 0.04
    return increase


salary = float(input())
increase = increase_percentual(salary)
money_earned = salary * increase
new_salary = salary + money_earned


print("Novo salario: %.2f" % new_salary)
print("Reajuste ganho: %.2f" % money_earned)
print("Em percentual: %.0f %%" % (increase * 100))
