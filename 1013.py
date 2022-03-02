''' 
    Autor: Guiventura6;
    Data: 02/03/2022;
    Problema: The Greatest;
    Resume: Program that reads three integer values and present the greatest
'''
numbers = ''

def the_greatest(numbers):
    the_greatest = 0
    for num in numbers:
        if num > the_greatest:
            the_greatest = num
    return the_greatest    

numbers = input().split()
numbers = tuple(map(int, numbers)) #Convert string to tuple

print('{} eh o maior'.format(the_greatest(numbers)))
