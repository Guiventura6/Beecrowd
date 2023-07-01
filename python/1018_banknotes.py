'''
    Autor: Guiventura6
    Data: 03/03/2022
    Modified: (29/06/2023,)
    Problema: Banknotes
    Resume: Program that read an integer value and calculate the smallest
    possible number of banknotes in which the value may be decomposed.
    The possible banknotes are 100, 50, 20, 10, 5, 2 and 1.
'''


def atm_machine(amount, banknotes):
    # Create a dictionary
    notes = {note: 0 for note in banknotes}

    for i, key in enumerate(notes.keys()):
        if i == 0:  # first iteration
            notes[key], rest = divmod(amount, key)
        else:  # others interation
            notes[key], rest = divmod(rest, key)
    return notes


amount = int(input())
banknotes = [100, 50, 20, 10, 5, 2, 1]
# banknotes = [50, 20, 10, 5, 2, 1]

out_atm = atm_machine(amount, banknotes)

print(amount)
for note, value in out_atm.items():
    print('{} nota(s) de R$ {},00'.format(value, note))
