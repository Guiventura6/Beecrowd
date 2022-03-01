''' 
    Autor: Guiventura6;
    Data: 01/03/2022;
    Problema: Sphere;
    Resume: Program that calculates and shows the volume of a sphere 
    being provided the value of its radius    
'''

def volume(radius):
    pi = 3.14159
    return (4.0/3.0) * pi * radius ** 3.0

radius = int(input())

print('VOLUME = {:.3f}'.format(volume(radius)))
