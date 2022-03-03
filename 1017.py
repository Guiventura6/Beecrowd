''' 
    Autor: Guiventura6;
    Data: 03/03/2022;
    Problema: Full spent;
    Resume: Program that calculate how many liters will be necessary on a trip.
    For this the program will read spend time(in hours) and the same average speed(km/h) of car.
    obs: using a car that does 12 Km/L
''' 
car_consumption = 12.0 #Average car consumption
spentTime = 0
average_speed = 0
total_liters = 0.0

spentTime = int(input())
average_speed = int(input())

total_liters = (spentTime * average_speed) / car_consumption

print('{:.3f}'.format(total_liters))
