'''
    Autor: Guiventura6
    Date: 07/07/2023
    Modified: ()
    Problem: Game Time With Minutes
    Resume: Program that read the start time and end time of a game, in hours.
    Then calculate the duration of the game knowing that the game can begin in
    a day and finish in another day, with a maximum duration of 24 hours.
'''
game_time = input().split()

start = game_time[:2]
end = game_time[2:]


h, m = map(int, start)
initial_duration = h * 60 + m

h, m = map(int, end)
end_duration = h * 60 + m

if initial_duration < end_duration:
    total_duration = end_duration - initial_duration
else:
    total_duration = 1440 - initial_duration + end_duration


hours, minutes = divmod(total_duration, 60)
print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" % (hours, minutes))
