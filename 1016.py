''' 
    Autor: Guiventura6;
    Data: 02/03/2022;
    Problema: Distance Between Two Points;
    Resume: Program that reads the distance Read the distance (in km) and calculate 
    how long it takes (in minutes) for the car Y to take this distance in relation 
    to the other car.
    obs:  leave in the same direction. The car X leaves with a constant speed of 60 km/h 
    and the car Y leaves with a constant speed of 90 km / h.    
'''
distanceKm = 0
qtdMinutes = 0

distanceKm = int(input())

qtdMinutes = distanceKm * 2

print('{} minutos'.format(qtdMinutes))

