#include<stdio.h>
int main(void){
    int placar;
    char escolha;

    placar = 0;

    printf("A que casa pertencia Harry Potter e seus amigos ? \na) Hufflepuf\nb) Ravenclaw\nc) Slytherin\nd) Gryffindor\n");
    scanf(" %c", &escolha);

    if (escolha == 'd'){
        placar++;
        }
    printf("2 - Qual o nome verdadeiro do personagem o qual é conhecido por aquele que não deve ser nomeado ?\na) Tom Riddle\nb) Draco Malfoy\nc) Bellatrix Lestrange\nd) Pedro Pettigrew\n");
    scanf(" %c", &escolha);

    if (escolha == 'a'){
        placar++;
        }
    
    printf("3 - Quais dessa opções não é uma Relíquia da Morte ?\na) A varinha de sabugueiro\nb) A pedra da ressurreição\nc) A pedra filosofal\nd) A capa de invisibilidade\n");
    scanf(" %c", &escolha);

    if (escolha == 'c'){
        placar++;
        }

    printf("4 - O ministério da magia proibiu o uso de três feitiços, conhecidos como as maldições imperdoáveis, por ela possuírem caráter maligno e o objetivo cruel. Marque opção abaixo que não corresponde a umas das maldições imperdoáveis:\na) Crucio\nb) Imperio\nc) Avada Kedavra\nd) Expecto Patronum [REPOSTA CORRETA]");
    printf("%d", placar);

     if (escolha == 'd'){
        placar++;
        }
    return 0;
}