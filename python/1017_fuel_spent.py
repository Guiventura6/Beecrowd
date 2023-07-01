'''
    Autor: Guiventura6
    Data: 03/03/2022
    Modified: (29/06/2023)
    Problema: Fuel spent
    Resume: Program that calculate how many liters will be necessary on a trip.
    For this the program will read spend time(in hours) and the same average
    speed(km/h) of car.
    obs: using a car that does 12 Km/L
'''
from typing import Final

CAR_CONSUMPTION: Final[float] = 12.0  # Average car consumption

spentTime = int(input())
average_speed = int(input())

total_liters = (spentTime * average_speed) / CAR_CONSUMPTION
print('{:.3f}'.format(total_liters))
