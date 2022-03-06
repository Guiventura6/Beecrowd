'''
    Autor: Guiventura6;
    Data: 06/03/2022;
    Problema: Interval;
    Resume:Program that reads a float-point number and checks if there number
    is in a range.
'''
class Error(Exception):
    pass

class IntervalError(Error):
    def __init__(self, message):
        self.message = message

if __name__ == '__main__':

    try:
        number = float(input())

        if number < 0 or number > 100:
            raise IntervalError('Fora de intervalo')
        elif number <= 25:
            print('Intervalo [0,25]')
        elif number <= 50:
            print('Intervalo (25,50]')
        elif number <= 75:
            print('Intervalo (50,75]')
        else:
            print('Intervalo (75,100]')
    except IntervalError as ex:
        print(ex)