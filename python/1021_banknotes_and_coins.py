'''
    Autor: Guiventura6
    Data: 06/03/2022
    Modified: (29/06/2023,)
    Problema: Banknotes and Coins;
    Resume:calculate the smallest possible number of notes and coins on which
    the value can be decomposed.
    obs: The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins
    are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01
'''


class AtmMachine:
    def __init__(self, notes, coins):
        self.active_notes = notes
        self.active_coins = coins

    def withdraw(self, amount):
        # Creating dictionaries with enabled banknotes and coins
        notes = {note: 0 for note in self.active_notes}
        coins = {coin: 0 for coin in self.active_coins}

        # Calculate notes
        for i, key in enumerate(notes.keys()):
            if i == 0:  # first iteration
                notes[key], rest = divmod(amount, key)
            else:  # others interation
                notes[key], rest = divmod(rest, key)

        # Calculate coins
        for i, key in enumerate(coins.keys()):
            coins[key], rest = divmod(rest, key)
        return (notes, coins)


amount = float(input())
notes = [100, 50, 20, 10, 5, 2]
coins = [1.00, 0.50, 0.25, 0.10, 0.05, 0.01]

machine = AtmMachine(notes, coins)
out_notes, out_coins = machine.withdraw(amount)


print("NOTAS:")
for note, value in out_notes.items():
    print('{} nota(s) de R$ {}.00'.format(int(value), note))

print("MOEDAS:")
for coin, value in out_coins.items():
    print('{:.0f} moeda(s) de R$ {:.2f}'.format(int(value), coin))
