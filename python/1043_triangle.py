'''
    Autor: Guiventura6
    Date: 03/07/2023
    Modified: ()
    Problem: Triangle
    Resume: Program that read three floating values and verify if is possible
    to make a triangle. If it is not possible, calculate the area of the
    trapezium.
'''


def check_vality_triangle(a, b, c):
    if (a + b > c and a + c > b and b + c > a):
        return True
    else:
        return False


def calculate_perimeter_triangle(a, b, c):
    return a + b + c


def calculate_area_trapezium(a, b, c):
    return (a + b) * c / 2.0


a, b, c = map(float, input().split())
is_triangle = check_vality_triangle(a, b, c)

if is_triangle:
    result = calculate_perimeter_triangle(a, b, c)
    print("Perimetro = %.1f" % result)
else:
    result = calculate_area_trapezium(a, b, c)
    print("Area = %.1f" % result)
