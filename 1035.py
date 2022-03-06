'''
    Autor: Guiventura6;
    Data: 06/03/2022;
    Problema: Selection Test 1;
    Resume:Program that reads 4 integer values and performs data validation
'''
if __name__ == '__main__':

    a, b, c, d = map(int, input().split())

    if b > c and d > a and (c + d) > (a + b) and c >= 0 and d >= 0 and a % 2 == 0:
        print('Valores aceitos')
    else:
        print('Valores nao aceitos')
