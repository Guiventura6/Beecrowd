'''
    Autor: Guiventura6
    Data: 02/03/2022
    Modified: (28/06/2023,)
    Problema: Distance Between Two Points
    Resume: Program that reads two points in the plane, p1(x1,y1) and p2(x2,y2)
    and calculate the distance between them.
'''
import math
from collections import namedtuple

Point = namedtuple('Point', ['x', 'y'])

# input
x, y = map(float, input().split())
p1 = Point(x, y)
x, y = map(float, input().split())
p2 = Point(x, y)

# processing
distance = math.sqrt((p2.x - p1.x) ** 2 + (p2.y - p1.y) ** 2)
# output
print('{:.4f}'.format(distance))
