'''
    Autor: Guiventura6
    Date: 06/07/2023
    Modified: ()
    Problem: Game Time
    Resume: Program that read the start time and end time of a game, in hours.
    Then calculate the duration of the game knowing that the game can begin in
    a day and finish in another day, with a maximum duration of 24 hours.
'''


def duration_game(start, end):
    if start < end:
        duration = end - start
    else:
        duration = (24 - start) + end
    return duration


start, end = map(int, input().split())

duration = duration_game(start, end)
print("O JOGO DUROU %d HORA(S)" % duration)
