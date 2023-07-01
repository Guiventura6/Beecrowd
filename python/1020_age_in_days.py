'''
    Autor: Guiventura6
    Data: 03/03/2022
    Modified: (29/06/2023,)
    Problema: Age in Days
    Resume: Program that reads age in days and convert to years, months and
    days.
    obs: The whole year with 365 days and 30 days every month.
'''

ageInDays = int(input())

years, rest = divmod(ageInDays, 365)
months, days = divmod(rest, 30)

print('{} ano(s)\n{} mes(es)\n{} dia(s)'.format(years, months, days))
