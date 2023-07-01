'''
    Autor: Guiventura6
    Data: 06/03/2022
    Modified: (30/06/2023,)
    Problema: Bhaskara's Formula
    Resume:Program that calculates roots of bhaskara's formula.
'''
import math


class Error(Exception):
    pass


class ImpossibleCalculateError(Error):
    def __init__(self, message):
        self.message = message


if __name__ == '__main__':
    try:
        a, b, c = map(float, input().split())
        delta = b ** 2.0 - 4 * a * c
        if a == 0 or delta < 0:
            raise ImpossibleCalculateError('Impossivel calcular')
    except ImpossibleCalculateError as ex:
        print(ex)
    else:
        r1 = (-b + math.sqrt(delta)) / (2 * a)
        r2 = (-b - math.sqrt(delta)) / (2 * a)
        print('R1 = {:.5f}'.format(r1))
        print('R2 = {:.5f}'.format(r2))
