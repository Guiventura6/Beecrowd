'''
    Autor: Guiventura6
    Data: 02/03/2022
    Modified: 27/06/2023
    Problema: Area
    Resume: Program that reads three floating point values and calculate the
    area of the triangle, circle, trapezium, square and rectangle
'''
from typing import Final
PI: Final[float] = 3.14159

numbers = input()
# Converting string to tupla of values float
numbers = tuple(map(float, numbers.split()))

a, b, c = numbers  # Unpacking
area_triangle = a * c / 2.0
area_circle = PI * c * c
area_trapezium = (a + b) * c / 2.0
area_square = b * b
area_rectangle = a * b

print('TRIANGULO: {:.3f}'.format(area_triangle))
print('CIRCULO: {:.3f}'.format(area_circle))
print('TRAPEZIO: {:.3f}'.format(area_trapezium))
print('QUADRADO: {:.3f}'.format(area_square))
print('RETANGULO: {:.3f}'.format(area_rectangle))
