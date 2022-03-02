''' 
    Autor: Guiventura6;
    Data: 02/03/2022;
    Problema: Area;
    Resume: Program that reads three floating point values and calculate the area of 
    the triangle, circle, trapezium, square and rectangle
'''
numbers = ''
area_triangle = 0.0
area_circle = 0.0
area_trapezium = 0.0
area_square = 0.0
area_rectangle = 0.0
pi = 3.14159

numbers = input()
numbers = tuple(map(float, numbers.split())) #Converting string to tupla of values float

a, b, c = numbers #Unpacking
area_triangle = a * c / 2.0
area_circle = pi * c * c
area_trapezium = (a + b) * c / 2.0
area_square = b * b
area_rectangle = a * b

print('TRIANGULO: {:.3f}'.format(area_triangle))
print('CIRCULO: {:.3f}'.format(area_circle))
print('TRAPEZIO: {:.3f}'.format(area_trapezium))
print('QUADRADO: {:.3f}'.format(area_square))
print('RETANGULO: {:.3f}'.format(area_rectangle))




