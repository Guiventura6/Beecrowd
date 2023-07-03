'''
    Autor: Guiventura6
    Date: 02/07/2023
    Modified: ()
    Problem: Simple Sort
    Resume: Program that read three integers and sort them in ascending order.
'''
numbers = list(map(int, input().split()))

for num in sorted(numbers):
    print(num)

print('')
for num in numbers:
    print(num)
