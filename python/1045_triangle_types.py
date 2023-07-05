'''
    Autor: Guiventura6
    Date: 05/07/2023
    Modified: ()
    Problem: Triangle Types
    Resume: Program that read two interger values and verify if is multiples
'''
sides = list(map(float, input().split()))
sides.sort(reverse=True)


a, b, c = sides

if a >= b + c:
    print("NAO FORMA TRIANGULO")
elif a * a == b * b + c * c:
    print("TRIANGULO RETANGULO")
elif a * a > b * b + c * c:
    print("TRIANGULO OBTUSANGULO")
elif a * a < b * b + c * c:
    print("TRIANGULO ACUTANGULO")

if a == b and a == c:
    print("TRIANGULO EQUILATERO")
elif a == b or a == c or b == c:
    print("TRIANGULO ISOSCELES")
