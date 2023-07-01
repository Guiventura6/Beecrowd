'''
    Autor: Guiventura6;
    Data: 02/03/2022
    Modified: 27/06/2023
    Problema: The Greatest
    Resume: Program that reads three integer values and present the greatest
'''
a, b, c = map(int, input().split())
maiorAB = (a + b + abs(a - b)) // 2

if maiorAB > c:
    print('{} eh o maior'.format(maiorAB))
else:
    print('{} eh o maior'.format(c))
