''' 
    Autor: Guiventura6;
    Data: 03/03/2022;
    Problema: Banknotes;
    Resume: Program that read an integer value and calculate the smallest possible number of banknotes
    in which the value may be decomposed.The possible banknotes are 100, 50, 20, 10, 5, 2 and 1.
''' 
amount = 0
notesOf100 = 0 
notesOf50 = 0
notesOf20 = 0 
notesOf10 = 0 
notesOf5 = 0
notesOf2 = 0
rest = 0   

amount = int(input())
notesOf100 = amount // 100
rest = amount % 100
notesOf50 = rest // 50
rest %= 50
notesOf20 = rest // 20
rest %= 20
notesOf10 = rest // 10
rest %= 10
notesOf5 = rest // 5
rest %= 5
notesOf2 = rest // 2
rest %= 2

print(amount)
print('{} nota(s) de R$ 100,00'.format(notesOf100))
print('{} nota(s) de R$ 50,00'.format(notesOf50))
print('{} nota(s) de R$ 20,00'.format(notesOf20))
print('{} nota(s) de R$ 10,00'.format(notesOf10))
print('{} nota(s) de R$ 5,00'.format(notesOf5))
print('{} nota(s) de R$ 2,00'.format(notesOf2))
print('{} nota(s) de R$ 1,00'.format(rest))

