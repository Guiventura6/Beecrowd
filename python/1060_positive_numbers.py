'''
    Autor: Guiventura6
    Date: 31/07/2023
    Modified: ()
    Problem: Positive Numbers
    Resume: Program that reads 6 numbers These numbers will only be positive or
    negative (disregard null values). Print the total number of positive
    numbers.
'''

positives = 0
for i in range(6):
    n = float(input())
    if n > 0:
        positives += 1

print("%d valores positivos" % positives)
