'''
    Autor: Guiventura6;
    Data: 06/03/2022;
    Problema: Bhaskara's Formula;
    Resume:Program that calculates roots of bhaskara's formula.
'''
import math

if __name__ == '__main__':

    a, b, c = map(float, input().split())

    delta = b ** 2.0 - 4 * a * c

    if a == 0 or delta < 0:
        print('Impossivel calcular')
    else:
        r1 = (-b + math.sqrt(delta)) / (2 * a)
        r2 = (-b - math.sqrt(delta)) / (2 * a)
        print('R1 = {:.5f}'.format(r1))
        print('R2 = {:.5f}'.format(r2))

