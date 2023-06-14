'''
    Autor: Guiventura6;
    Data: 06/03/2022;
    Problema: Snack;
    Resume:Program that reads a cod and the amount of a product and calculates the value
    to pay
'''
def calculate_payment(cod_product, units):
    products = {
        (1, 'Cachorro Quente', 4.00),
        (2, 'X-Salada', 4.50),
        (3, 'X-Bacon', 5.00),
        (4, 'Torrada simples', 2.00),
        (5, 'Refrigerante', 1.50)
    }
    payment = 0.0
    for product in products:
        cod, name_product, price = product
        if cod == cod_product:
            payment = price * units
            break
    return payment

if __name__ == '__main__':

    code, units = map(int, input().split())

    print('Total: R$ {:.2f}'.format(calculate_payment(code, units)))
