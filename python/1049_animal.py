'''
    Autor: Guiventura6
    Date: 10/07/2023
    Modified: ()
    Problem: Animal
    Resume: Program that define an animal according to the table.
'''

word = input()

if word == 'vertebrado':
    word = input()
    if word == "ave":
        word = input()
        if word == "carnivoro":
            print("aguia")
        elif word == "onivoro":
            print("pomba")
    elif word == "mamifero":
        word = input()
        if word == "onivoro":
            print("homem")
        elif word == "herbivoro":
            print("vaca")

elif word == 'invertebrado':
    word = input()
    if word == "inseto":
        word = input()
        if word == "hematofago":
            print("pulga")
        elif word == "herbivoro":
            print("lagarta")
    elif word == "anelideo":
        word = input()
        if word == "hematofago":
            print("sanguessuga")
        elif word == "onivoro":
            print("minhoca")
