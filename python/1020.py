''' 
    Autor: Guiventura6;
    Data: 03/03/2022;
    Problema: Age in Days;
    Resume: Program that reads age in days and convert to years, months and days.
    obs: The whole year with 365 days and 30 days every month.
''' 

def convert_age(age):
    years = age // 365
    months = (age % 365) // 30
    days = (age % 365) % 30
    return years, months, days
    
ageInDays = int(input())
years, months, days = convert_age(ageInDays)

print('{} ano(s)\n{} mes(es)\n{} dia(s)'.format(years, months, days))

