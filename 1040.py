'''
    Autor: Guiventura6;
    Data: 07/03/2022;
    Problema: Average 3;
    Resume:Program that reads four scores obtained by a student and calculates 
    the average.
'''
if __name__ == '__main__':

    score1, score2, score3, score4 = map(float, input().split())

    average = (score1 * 2 + score2 * 3 + score3 * 4 + score4 * 1) / 10.0
    print('Media: {:.1f}'.format(average))
    if average < 5.0:
        print('Aluno reprovado.')
    elif average >= 7.0:
        print('Aluno aprovado.')
    else:
        print('Aluno em exame.')
        exam_score = float(input())
        print('Nota do exame: {:.1f}'.format(exam_score))
        new_score = (average + exam_score) / 2.0
        if new_score >= 5.0:
            print('Aluno aprovado.')
        else:
            print('Aluno reprovado.')
        print('Media final: {:.1f}'.format(new_score))
