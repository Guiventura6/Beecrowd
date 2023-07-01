'''
    Autor: Guiventura6
    Data: 02/03/2022
    Modified: (27/06/2023,)
    Problema: Consumption
    Resume: Program that reads the total distance traveled(km) and the spent
    fuel total(L) and calculate a car's average consumption
'''
total_distance = int(input())
total_fuel = float(input())

average_consumption = total_distance / total_fuel

print('{:.3f} km/l'.format(average_consumption))
