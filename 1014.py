''' 
    Autor: Guiventura6;
    Data: 02/03/2022;
    Problema: Consumption;
    Resume: Program that reads the total distance traveled(km) and the spent fuel total(L) and
    calculate a car's average consumption
'''
total_distance = 0
total_fuel = 0.0
average_consumption = 0.0

total_distance = int(input())
total_fuel = float(input())

average_consumption = total_distance / total_fuel

print('{:.3f} km/l'.format(average_consumption))


