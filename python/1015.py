''' 
    Autor: Guiventura6;
    Data: 02/03/2022;
    Problema: Distance Between Two Points;
    Resume: Program that reads two points in the plane, p1(x1,y1) and p2(x2,y2) and calculate
    the distance between them.
'''
import math

p1 = ''
p2 = ''

def distance(p1, p2):
    x1, y1 = p1
    x2, y2 = p2
    return math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)

p1 = tuple(map(float, input().split()))
p2 = tuple(map(float, input().split()))

print('{:.4f}'.format(distance(p1, p2)))