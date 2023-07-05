'''
    Autor: Guiventura6
    Date: 04/07/2023
    Modified: ()
    Problem: Multiples
    Resume: Program that read two interger values and verify if is multiples
'''


def is_multiple(a, b):
    if a % b == 0 or b % a == 0:
        print("Sao Multiplos")
    else:
        print("Nao sao Multiplos")


a, b = map(int, input().split())
is_multiple(a, b)
