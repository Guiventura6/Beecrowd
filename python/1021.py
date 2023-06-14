''' 
    Autor: Guiventura6;
    Data: 06/03/2022;
    Problema: Banknotes and Coins;
    Resume:calculate the smallest possible number of notes and coins on which the value can be decomposed.
    obs: The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 
    1, 0.50, 0.25, 0.10, 0.05 and 0.01
''' 
if __name__ == '__main__':
    
    amount = float(input())
        
    notes_Of_100 = amount // 100
    rest = amount % 100
    notes_Of_50 = rest // 50
    rest = rest % 50
    notes_Of_20 = rest // 20
    rest = rest % 20
    notes_Of_10 = rest // 10
    rest = rest % 10
    notes_Of_5 = rest // 5
    rest = rest % 5
    notes_Of_2 = rest // 2
    rest =  rest % 2
    #Coins
    notes_Of_1 = rest // 1
    coins = (rest - notes_Of_1) * 100 # Working with integers
    coins_of_50 = coins // 50
    rest = coins % 50
    coins_of_25 = rest // 25
    rest = rest % 25
    coins_of_10 = rest // 10
    rest = rest % 10
    coins_of_05 = rest // 5
    coins_of_01 = rest % 5
    
    print('NOTAS:')
    print('{:.0f} nota(s) de R$ 100.00'.format(notes_Of_100))
    print('{:.0f} nota(s) de R$ 50.00'.format(notes_Of_50))
    print('{:.0f} nota(s) de R$ 20.00'.format(notes_Of_20))
    print('{:.0f} nota(s) de R$ 10.00'.format(notes_Of_10))
    print('{:.0f} nota(s) de R$ 5.00'.format(notes_Of_5))
    print('{:.0f} nota(s) de R$ 2.00'.format(notes_Of_2))
    print('MOEDAS:')
    print('{:.0f} moeda(s) de R$ 1.00'.format(notes_Of_1))
    print('{:.0f} moeda(s) de R$ 0.50'.format(coins_of_50))
    print('{:.0f} moeda(s) de R$ 0.25'.format(coins_of_25))
    print('{:.0f} moeda(s) de R$ 0.10'.format(coins_of_10))
    print('{:.0f} moeda(s) de R$ 0.05'.format(coins_of_05))
    print('{:.0f} moeda(s) de R$ 0.01'.format(coins_of_01))        
    