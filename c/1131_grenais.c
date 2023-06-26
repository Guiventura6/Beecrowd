/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Grenais;
*/
#include <stdio.h>

int main () {
    
    int scoreInter, scoreGremio, vInter, vGremio, draws, grenais, op;
    
    vInter = 0;
    vGremio = 0;
    draws = 0;
    grenais = 0;

    do  {
        scanf("%d%d", &scoreInter, &scoreGremio);

        if (scoreInter > scoreGremio) {
            vInter++;
        } else if (scoreInter < scoreGremio) {
           vGremio++;
        } else {
           draws++;
        }    

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &op);


    } while (op == 1);
                    
    grenais = vInter + vGremio + draws;
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", vInter);
    printf("Gremio:%d\n", vGremio);
    printf("Empates:%d\n", draws);

    if (vInter > vGremio) {
        printf("Inter venceu mais\n");
    } else if (vInter < vGremio) {
        printf("gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }
        
    return 0;
}