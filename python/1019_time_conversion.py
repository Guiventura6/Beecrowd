'''
    Autor: Guiventura6
    Data: 03/03/2022
    Modified: (29/06/2023,)
    Problema: Time Conversion
    Resume: Read an integer value, which is the duration in seconds of acertain
    event in a factory, and inform it expressed in hours:minutes:seconds.
'''
duration = int(input())

m, s = divmod(duration, 60)
h, m = divmod(m, 60)

print('{:d}:{:d}:{:d}'.format(h, m, s))
