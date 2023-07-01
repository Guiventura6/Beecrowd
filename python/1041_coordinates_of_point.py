'''
    Autor: Guiventura6
    Date: 01/07/2023
    Modified: ()
    Problem: Coordinates of a point
    Resume: Program that reads two floating values (x and y) which should
    represent the coordinates of a point in a plane and  determine which
    quadrant the point belongs.
'''
from collections import namedtuple

Point = namedtuple('Point', ['x', 'y'])

x, y = map(float, input().split())
p1 = Point(x, y)

if x > 0 and y > 0:
    print("Q1")
elif x < 0 and y > 0:
    print("Q2")
elif x < 0 and y < 0:
    print("Q3")
elif x > 0 and y < 0:
    print("Q4")
elif x == 0 and y == 0:
    print("Origem")
elif x == 0:
    print("Eixo Y")
else:
    print("Eixo X")
