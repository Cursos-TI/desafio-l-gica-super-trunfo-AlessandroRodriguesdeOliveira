#include <stdio.h>

/* Essa função/projeto é um cadastro de duas cartas no estilo Super Trunfo com o tema: Países. 
Dessa forma, o objetivo será cadastrar-se algumas de suas características e depois 
apresentá-las e ao final perguntar quais propriedades (serão 2 propriedades) cadastradas irão ser comparadas e usadas para 
uma soma, na qual, a maior soma vence!*/

int main(){

    //OBS: E usarei CamelCase.

    /*Parâmetros:
        -> char estado: Nome do Estado do país em questâo;
        -> char[] codigoDaCarta: É a junçao da letra do Estado cadastrado com um número de 01, 02...
           Ex.: A01;
        -> char[] nomeDaCidade: Nome da cidade do País;
        -> int populacao: Número da população da Cidade;
        -> float areaEmKm2: Número da extensão territorial da Cidade em quilômetros quadrados (km²);
        -> float pib: Número do PIB(Produto Interno Bruto) da Cidade;
        -> int numeroDePontosTuristicos: Número de pontos turísticos da Cidade;
        -> float pibPerCapita: Resultado da divisão entre PIB pela populacao da Cidade;
        -> float densidadePopulacional: Resultado da divisão entre a populacao e a areaEmKm2 da Cidade;
        -> int atributo1: Armazena 1 (primeira) propriedade escolhida pelo usuário para as comparações;
        -> int atribut2: Armazena 2 (segunda) propriedade escolhida pelo usuário para as comparações;
        -> float soma1: Armazena o resultado da soma da primeira propriedade;
        -> float soma2: Armazena o resultado da soma da primeira propriedade;

    Retornos:
        Retorno das propriedades cadastradas, a comparação individual entre as duas escolhidas anteriomente e 
        a soma delas por carta e sua apresentação e qual carta venceu.
              
    */

    //criação das variáveis da primeira carta:
    char estado1[10];
    char codigoDaCarta1[10];
    char nomeDaCidade1[50];
    int populacao1;
    int numeroDePontosTuristicos1;
    float areaEmKm21, pib1, pibPerCapita1, densidadePopulacional1;

    //criação das variáveis da segunda carta:
    char estado2[10];
    char codigoDaCarta2[10];
    char nomeDaCidade2[50];
    int populacao2;
    int numeroDePontosTuristicos2;
    float areaEmKm22, pib2, pibPerCapita2, densidadePopulacional2;

    int atributo1, atributo2;
    float soma1, soma2;

    printf("\n\n------------------ Super Trunfo: Cadastros ------------------\n\n");

    //Entradas de dados da Carta 1

    printf("\n                   ---------------------");
    printf("\n                   | Cadastro: Carta 1 |");
    printf("\n                   ---------------------\n");

    printf("\nDigite a sigla do Estado: ");
   
    scanf("%s", estado1);
    
    printf("Digite o Código da Carta, sigla do Estado\nseguida de um número (ex: CE01, CE03): ");
    scanf("%s", codigoDaCarta1);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", nomeDaCidade1);
    
    printf("Digite o valor da Populacão da referida Cidade: ");
    scanf("%d", &populacao1);
    
    printf("Digite o valor da Área territorial da referida Cidade: ");
    scanf("%f", &areaEmKm21);
    
    printf("Digite o valor do PIB da referida Cidade (em bilhões): ");
    scanf("%f", &pib1);
 
    printf("Digite o Número de Pontos Turísticos da referida Cidade: ");
    scanf("%d", &numeroDePontosTuristicos1);

    // Calculo automático do PIB Per Capita e da Densidade Populacional.
    pibPerCapita1 =  (pib1*1000000000) / (float) populacao1;
    densidadePopulacional1 = (float) populacao1 / areaEmKm21;

    //Confirmação de sucesso caso a carta sejá cadastrada sem eventuais erros.
    printf("\n             -----------------------------------\n");
    printf("             | Cadastro realizado com sucesso! |\n");
    printf("             -----------------------------------");

    printf("\n\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

    //Entradas de dados da Carta 2
    printf("\n                   ---------------------");
    printf("\n                   | Cadastro: Carta 2 |");
    printf("\n                   ---------------------\n");

    printf("\n\nDigite a sigla do Estado: ");
   
    scanf("%s", estado2);
    

    printf("Digite o Código da Carta, sigla do Estado\nseguida de um número (ex: CE01, CE03): ");
    scanf("%s", codigoDaCarta2);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", nomeDaCidade2);
    
    printf("Digite o valor da Populacão da referida Cidade: ");
    scanf("%d", &populacao2);
    
    printf("Digite o valor da Área territorial da referida Cidade: ");
    scanf("%f", &areaEmKm22);
    
    printf("Digite o valor do PIB da referida Cidade (em bilhões): ");
    scanf("%f", &pib2);
 
    printf("Digite o Número de Pontos Turísticos da referida Cidade: ");
    scanf("%d", &numeroDePontosTuristicos2);

    // Calculo automático do PIB Per Capita e da Densidade Populacional.
    pibPerCapita2 =  (pib2*1000000000) / ((float) populacao2);

    densidadePopulacional2 = ((float) populacao2) / areaEmKm22;

    //Confirmação de sucesso caso a carta sejá cadastrada sem eventuais erros.
    printf("\n             -----------------------------------\n");
    printf("             | Cadastro realizado com sucesso! |\n");
    printf("             -----------------------------------");

    printf("\n\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

    //Saídas de dados.
    printf("\n\n            --------------------------------------------------\n");
    printf("            | Agora você escolherá 2 atributos para uma soma |.\n");
    printf("            ---------------------------------------------------\n");


    //Escolha da primeira propriedade.
    printf("Escolha o primeiro atributo:\n\n");

    printf("1 -> População\n");
    printf("2 -> Área\n");
    printf("3 -> PIB\n");
    printf("4 -> Números de Pontos Turísticos\n");
    printf("5 -> Densidade Populacional\n");
    printf("6 -> PIB per Capita\n");
    printf("Sua opção é: ");
   
    scanf("%d", &atributo1);

    printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");


    //Escolha da segunda propriedade de acordo com quem foi a primeira e não deixando repeti-las.
    //Posteriormentte, dependendo dos atributos escolhidos, ele compara individualmente quem tem  maior valor,
    //ao contrário se for Densidade Populacional, verifica se não é empate, mostra esse resultados, e por último, calcula 
    // de atributos por carta verifica se não é empate ou mostra qual soma tem o maior valor.
    switch (atributo1)
    {
    case 1:
        printf("\nEscolha o segundo atributo:\n\n");

        printf("[*] População\n");
        printf("2 -> Área\n");
        printf("3 -> PIB\n");
        printf("4 -> Números de Pontos Turísticos\n");
        printf("5 -> Densidade Populacional\n");
        printf("6 -> PIB per Capita\n");
        printf("Sua opção é: ");
        scanf("%d", &atributo2);

        printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
        
        if (atributo2 != atributo1){
            
            switch (atributo2)
            {
            case 2:
                printf("\nComparações das Cartas (Atributo: População + Área)\n\n");

                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, populacao1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, populacao2);
                printf("Quem tem a maior população é ");

                if(populacao1 == populacao2){
                    printf("Empate!\n");
                }else{
                    populacao1 > populacao2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }

                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
                
                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, areaEmKm21);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, areaEmKm22);

                printf("Quem tem a maior área é ");

                if(areaEmKm21 == areaEmKm22){
                    printf("Empate!\n");
                }else{
                    areaEmKm21 > areaEmKm22 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
               

                soma1 = (float) populacao1 + areaEmKm21;
                soma2 = (float) populacao2 + areaEmKm22;

                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);
                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }
                
                break;

            case 3: 
                printf("\nComparações das Cartas (Atributo: População + PIB)\n\n");

                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, populacao1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, populacao2);
                printf("Quem tem a maior população é ");

                if(populacao1 == populacao2){
                    printf("Empate!\n");
                }else{
                    populacao1 > populacao2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }

                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pib1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, pib2);

                printf("Quem tem o maior PIB é ");

                if(pib1 == pib2){
                    printf("Empate!\n");
                }else{
                    pib1 > pib2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }

                soma1 = (float) populacao1 +  pib1;
                soma2 = (float) populacao2 + pib2;
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
              
                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }
                
                break;

            case 4:
                printf("\nComparações das Cartas (Atributo: População + Números de Pontos Turísticos)\n\n");

                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, populacao1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, populacao2);

                printf("Quem tem a maior população é ");
                if(populacao1 == populacao2){
                    printf("Empate!\n");
                }else{
                    populacao1 > populacao2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
            
                
                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, numeroDePontosTuristicos1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, numeroDePontosTuristicos2);

                printf("Quem tem o maior Número de Pontos Turísticos é ");
                if(numeroDePontosTuristicos1 == numeroDePontosTuristicos2){
                    printf("Empate!\n");
                }else{
                    numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }

                soma1 = (float) populacao1 + (float) numeroDePontosTuristicos1;
                soma2 = (float) populacao2 + (float) numeroDePontosTuristicos2;

                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }


                break;

            case 5:
                printf("\nComparações das Cartas (Atributo: População + Densidade Populacional)\n\n");

                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, populacao1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, populacao2);
                

                printf("Quem tem a maior população é ");

                if(populacao1 == populacao2){
                    printf("Empate!\n");
                }else{
                    populacao1 > populacao2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, densidadePopulacional1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, densidadePopulacional2);

                printf("Quem tem a menor Densidade Populacional é ");

                if(densidadePopulacional1 == densidadePopulacional2){
                    printf("\nEmpate!\n");
                }else{
                    densidadePopulacional1 < densidadePopulacional2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 = (float) populacao1 + densidadePopulacional1;
                soma2 = (float) populacao2 + densidadePopulacional2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }


                break;
            case 6:
                printf("\nComparações das Cartas (Atributo: População + PIB per Capita)\n\n");

                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, populacao1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, populacao2);
                
                printf("Quem tem a maior população é ");

                if(populacao1 == populacao2){
                    printf("Empate!\n");
                }else{
                    populacao1 > populacao2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pibPerCapita1);
                printf("Carta 2 -> %s(%s): %.2f\n\n", nomeDaCidade2,estado2, pibPerCapita2);
                
                printf("Quem tem o maior PIB per Capita é ");

                if(pibPerCapita1 == pibPerCapita2){
                    printf("Empate!\n");
                }else{
                    pibPerCapita1 > pibPerCapita2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 = (float) populacao1 + pibPerCapita1;
                soma2 = (float) populacao2 + pibPerCapita2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;
            
            default:
                printf("\nOpção inválida!\n");
                break;
            }

        }else{
            printf("\nVocê já escolheu esse atributo!\n");
        }
        
        break;

    case 2:
        printf("\nEscolha o segundo atributo:\n\n");

        printf("1 -> População\n");
        printf("[*] Área\n");
        printf("3 -> PIB\n");
        printf("4 -> Números de Pontos Turísticos\n");
        printf("5 -> Densidade Populacional\n");
        printf("6 -> PIB per Capita\n");
        printf("Sua opção é: ");
        scanf("%d", &atributo2);

        printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
        
        if (atributo2 != atributo1){
            switch (atributo2)
            {
            case 1:
                printf("\nComparações das Cartas (Atributo: Área + População)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, areaEmKm21);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, areaEmKm22);
                printf("Quem tem a maior Área é ");

                if(areaEmKm21 == areaEmKm22){
                    printf("Empate!\n");
                }else{
                    areaEmKm21 > areaEmKm22 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, populacao1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, populacao2);
                printf("Quem tem a maior população é ");

                if(populacao1 == populacao2){
                    printf("Empate!\n");
                }else{
                    populacao1 > populacao2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 =  areaEmKm21 + (float) populacao1;
                soma2 =  areaEmKm22 + (float) populacao2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 3: 
                printf("\nComparações das Cartas (Atributo: Área + PIB)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, areaEmKm21);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, areaEmKm22);

                printf("Quem tem a maior Área é ");
                if(areaEmKm21 == areaEmKm22){
                    printf("Empate!\n");
                }else{
                    areaEmKm21 > areaEmKm22 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pib1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, pib2);

                printf("Quem tem o maior PIB é ");
                if(pib1 == pib2){
                    printf("Empate!\n");
                }else{
                    pib1 > pib2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 =  areaEmKm21 + pib1;
                soma2 =  areaEmKm22 + pib2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 4:
                printf("\nComparações das Cartas (Atributo: Área + Números de Pontos Turísticos)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, areaEmKm21);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, areaEmKm22);
                printf("Quem tem a maior Área é ");
                if(areaEmKm21 == areaEmKm22){
                    printf("Empate!\n");
                }else{
                    areaEmKm21 > areaEmKm22 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, numeroDePontosTuristicos1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, numeroDePontosTuristicos2);

                printf("Quem tem o maior Número de Pontos Turísticos é ");
                if(numeroDePontosTuristicos1 == numeroDePontosTuristicos2){
                    printf("Empate!\n");
                }else{
                    numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 =  areaEmKm21 + (float) numeroDePontosTuristicos1;
                soma2 =  areaEmKm22 + (float) numeroDePontosTuristicos2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;
                
            case 5:
                printf("\nComparações das Cartas (Atributo: Área + Densidade Populacional)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, areaEmKm21);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, areaEmKm22);
                printf("Quem tem a maior Área é ");
                if(areaEmKm21 == areaEmKm22){
                    printf("Empate!\n");
                }else{
                    areaEmKm21 > areaEmKm22 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, densidadePopulacional1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, densidadePopulacional2);

                printf("Quem tem a menor Densidade Populacional é ");

                if(densidadePopulacional1 == densidadePopulacional2){
                    printf("Empate!\n");
                }else{
                    densidadePopulacional1 < densidadePopulacional2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 =  areaEmKm21 + densidadePopulacional1;
                soma2 =  areaEmKm22 + densidadePopulacional2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 6:
                printf("\nComparações das Cartas (Atributo: Área + PIB per Capita)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, areaEmKm21);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, areaEmKm22);

                printf("Quem tem a maior Área é ");
                if(areaEmKm21 == areaEmKm22){
                    printf("Empate!\n");
                }else{
                    areaEmKm21 > areaEmKm22 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pibPerCapita1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, pibPerCapita2);

                printf("Quem tem o maior PIB per Capita é ");

                if(pibPerCapita1 == pibPerCapita2){
                    printf("Empate!\n");
                }else{
                    pibPerCapita1 > pibPerCapita2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 =  areaEmKm21 + pibPerCapita1;
                soma2 =  areaEmKm22 + pibPerCapita2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }
                break;
            
            default:
                printf("\nOpção inválida!\n");
                break;
            }


        }else{
            printf("\nVocê já escolheu esse atributo!\n");
        }

        break;

    case 3:
        printf("\nEscolha o segundo atributo:\n\n");

        printf("1 -> População\n");
        printf("2 -> Área\n");
        printf("[*] PIB\n");
        printf("4 -> Números de Pontos Turísticos\n");
        printf("5 -> Densidade Populacional\n");
        printf("6 -> PIB per Capita\n");
        printf("Sua opção é: ");
        scanf("%d", &atributo2);

        printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
        
        if (atributo2 != atributo1){
            switch (atributo2)
            {
            case 1:
                printf("\nComparações das Cartas (Atributo: PIB + População)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pib1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, pib2);


                printf("Quem tem o maior PIB é ");
                if(pib1 == pib2){
                    printf("Empate!\n");
                }else{
                    pib1 > pib2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, populacao1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, populacao2);
                printf("Quem tem a maior população é ");

                if(populacao1 == populacao2){
                    printf("Empate!\n");
                }else{
                    populacao1 > populacao2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 =  pib1 + (float) populacao1;
                soma2 =  pib2 + (float) populacao2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 2: 
                printf("\nComparações das Cartas (Atributo: PIB + Área)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pib1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, pib2);

                printf("Quem tem o maior PIB é ");
                if(pib1 == pib2){
                    printf("Empate!\n");
                }else{
                    pib1 > pib2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, areaEmKm21);
                printf("Carta 2 -> %s(%s): %.2f\n\n", nomeDaCidade2,estado2, areaEmKm22);

                printf("Quem tem a maior Área é ");
                if(areaEmKm21 == areaEmKm22){
                    printf("Empate!\n");
                }else{
                    areaEmKm21 > areaEmKm22 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 =  pib1 + areaEmKm21;
                soma2 =  pib2 + areaEmKm22;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }
                
                break;

            case 4:
                printf("\nComparações das Cartas (Atributo: PIB + Números de Pontos Turísticos)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pib1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, pib2);

                printf("Quem tem o maior PIB é ");
                if(pib1 == pib2){
                    printf("Empate!\n");
                }else{
                    pib1 > pib2 ? printf("\n ;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n ;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, numeroDePontosTuristicos1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, numeroDePontosTuristicos2);

                soma1 =  pib1 + (float) numeroDePontosTuristicos1;
                soma2 =  pib2 + (float) numeroDePontosTuristicos2;

                printf("Quem tem o maior Número de Pontos Turísticos é ");
                if(numeroDePontosTuristicos1 == numeroDePontosTuristicos2){
                    printf("Empate!\n");
                }else{
                    numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 5:
                printf("\nComparações das Cartas (Atributo: PIB + Densidade Populacional)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pib1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, pib2);

                printf("Quem tem o maior PIB é ");
                if(pib1 == pib2){
                    printf("Empate!\n");
                }else{
                    pib1 > pib2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, densidadePopulacional1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, densidadePopulacional2);

                printf("Quem tem a menor Densidade Populacional é ");
                if(densidadePopulacional1 == densidadePopulacional2){
                    printf("Empate!\n");
                }else{
                    densidadePopulacional1 < densidadePopulacional2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 =  pib1 + densidadePopulacional1;
                soma2 =  pib2 + densidadePopulacional2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 6:
                printf("\nComparações das Cartas (Atributo: PIB + PIB per Capita)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pib1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, pib2);

                printf("Quem tem o maior PIB é ");
                if(pib1 == pib2){
                    printf("Empate!\n");
                }else{
                    pib1 > pib2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pibPerCapita1);
                printf("Carta 2 -> %s(%s): %.2f\n\n", nomeDaCidade2,estado2, pibPerCapita2);

                printf("Quem tem o maior PIB per Capita é ");
                if(pibPerCapita1 == pibPerCapita2){
                    printf("Empate!\n");
                }else{
                    pibPerCapita1 > pibPerCapita2? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 =  pib1 + pibPerCapita1;
                soma2 =  pib2 + pibPerCapita2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }
                break;
            
            default:
                printf("\nOpção inválida!\n");
                break;
            }


        }else{
            printf("\nVocê já escolheu esse atributo!\n");
        }

        break;

    case 4:
        printf("\nEscolha o segundo atributo:\n\n");

        printf("1 -> População\n");
        printf("2 -> Área\n");
        printf("3 -> PIB\n");
        printf("[*] Números de Pontos Turísticos\n");
        printf("5 -> Densidade Populacional\n");
        printf("6 -> PIB per Capita\n");
        printf("Sua opção é: ");
        scanf("%d", &atributo2);

        printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
        
        if (atributo2 != atributo1){
            switch (atributo2)
            {
            case 1:
                printf("\nComparações das Cartas (Atributo: Números de Pontos Turísticos + População)\n\n");

                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, numeroDePontosTuristicos1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, numeroDePontosTuristicos2);

                printf("Quem tem o maior Número de Pontos Turísticos é ");
                if(numeroDePontosTuristicos1 == numeroDePontosTuristicos2){
                    printf("Empate!\n");
                }else{
                    numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, populacao1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, populacao2);

                printf("Quem tem a maior população é ");
                if(populacao1 == populacao2){
                    printf("Empate!\n");
                }else{
                    populacao1 > populacao2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 = (float) numeroDePontosTuristicos1 + (float) populacao1;
                soma2 =  (float) numeroDePontosTuristicos2 + (float) populacao2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 2: 
                printf("\nComparações das Cartas (Atributo: Números de Pontos Turísticos + Área)\n\n");

                
                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, numeroDePontosTuristicos1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, numeroDePontosTuristicos2);

                printf("Quem tem o maior Número de Pontos Turísticos é ");
                if(numeroDePontosTuristicos1 == numeroDePontosTuristicos2){
                    printf("Empate!\n");
                }else{
                    numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, areaEmKm21);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, areaEmKm22);

                printf("Quem tem a maior Área é ");
                if(areaEmKm21 == areaEmKm22){
                    printf("Empate!\n");
                }else{
                    areaEmKm21 > areaEmKm22 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 = (float) numeroDePontosTuristicos1 + areaEmKm21;
                soma2 = (float) numeroDePontosTuristicos2 + areaEmKm22;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 3:
                printf("\nComparações das Cartas (Atributo: Números de Pontos Turísticos + PIB)\n\n");

               
                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, numeroDePontosTuristicos1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, numeroDePontosTuristicos2);

                printf("Quem tem o maior Número de Pontos Turísticos é ");
                if(numeroDePontosTuristicos1 == numeroDePontosTuristicos2){
                    printf("Empate!\n");
                }else{
                    numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pib1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, pib2);

                printf("Quem tem o maior PIB é ");
                if(pib1 == pib2){
                    printf("Empate!\n");
                }else{
                    pib1 > pib2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 = (float) numeroDePontosTuristicos1 + pib1;
                soma2 = (float) numeroDePontosTuristicos2 + pib2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 5:
                printf("\nComparações das Cartas (Atributo: Números de Pontos Turísticos + Densidade Populacional)\n\n");

                
                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, numeroDePontosTuristicos1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, numeroDePontosTuristicos2);

                printf("Quem tem o maior Número de Pontos Turísticos é ");
                if(numeroDePontosTuristicos1 == numeroDePontosTuristicos2){
                    printf("Empate!\n");
                }else{
                    numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, densidadePopulacional1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, densidadePopulacional2);

                soma1 = (float) numeroDePontosTuristicos1 + densidadePopulacional1;
                soma2 = (float) numeroDePontosTuristicos2 + densidadePopulacional2;

                printf("Quem tem a menor Densidade Populacional é ");
                if(densidadePopulacional1 == densidadePopulacional2){
                    printf("Empate!\n");
                }else{
                    densidadePopulacional1 < densidadePopulacional2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 6:
                printf("\nComparações das Cartas (Atributo: Números de Pontos Turísticos + PIB per Capita)\n\n");

                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, numeroDePontosTuristicos1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, numeroDePontosTuristicos1);

                printf("Quem tem o maior Número de Pontos Turísticos é ");
                if(numeroDePontosTuristicos1 == numeroDePontosTuristicos2){
                    printf("Empate!\n");
                }else{
                    numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade2,estado1, pibPerCapita1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, pibPerCapita2);

                printf("Quem tem o maior PIB per Capita é ");
                if(pibPerCapita1 == pibPerCapita2){
                    printf("Empate!\n");
                }else{
                    pibPerCapita1 > pibPerCapita2? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 = (float) numeroDePontosTuristicos1 + pibPerCapita1;
                soma2 = (float) numeroDePontosTuristicos2 + pibPerCapita2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;
            
            default:
                printf("\nOpção inválida!\n");
                
                break;
            }


        }else{
            printf("\nVocê já escolheu esse atributo!\n");
        }

        break;

    case 5:
        printf("\nEscolha o segundo atributo:\n\n");

        printf("1 -> População\n");
        printf("2 -> Área\n");
        printf("3 -> PIB\n");
        printf("4 -> Números de Pontos Turísticos\n");
        printf("[*] Densidade Populacional\n");
        printf("6 -> PIB per Capita\n");
        printf("Sua opção é: ");
        scanf("%d", &atributo2);

        printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
        
        if (atributo2 != atributo1){
            switch (atributo2)
            {
            case 1:
                printf("\nComparações das Cartas (Atributo: Densidade Populacional + População)\n\n");

                
                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, densidadePopulacional1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, densidadePopulacional2);

                printf("Quem tem a menor Densidade Populacional é ");
                if(densidadePopulacional1 == densidadePopulacional2){
                    printf("Empate!\n");
                }else{
                    densidadePopulacional1 < densidadePopulacional2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, populacao1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, populacao2);

                printf("Quem tem a maior população é ");
                if(populacao1 == populacao2){
                    printf("Empate!\n");
                }else{
                    populacao1 > populacao2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 = densidadePopulacional1 + (float) populacao1;
                soma2 =  densidadePopulacional2 + (float) populacao2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 2: 
                printf("\nComparações das Cartas (Atributo: Densidade Populacional + Área)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, densidadePopulacional1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, densidadePopulacional2);

                printf("Quem tem a menor Densidade Populacional é ");
                if(densidadePopulacional1 == densidadePopulacional2){
                    printf("Empate!\n");
                }else{
                    densidadePopulacional1 < densidadePopulacional2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, areaEmKm21);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, areaEmKm22);

                printf("Quem tem a maior Área é ");
                if(areaEmKm21 == areaEmKm22){
                    printf("Empate!\n");
                }else{
                    areaEmKm21 > areaEmKm22 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 = densidadePopulacional1 + areaEmKm21;
                soma2 =  densidadePopulacional2 + areaEmKm22;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 3:
                printf("\nComparações das Cartas (Atributo: Densidade Populacionals + PIB)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, densidadePopulacional1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, densidadePopulacional2);

                printf("Quem tem a menor Densidade Populacional é ");
                if(densidadePopulacional1 == densidadePopulacional2){
                    printf("Empate!\n");
                }else{
                    densidadePopulacional1 < densidadePopulacional2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pib1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, pib2);

                printf("Quem tem o maior PIB é ");
                if(pib1 == pib2){
                    printf("Empate!\n");
                }else{
                    pib1 > pib2 ? printf("\n ;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n ;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 = densidadePopulacional1 + pib1;
                soma2 =  densidadePopulacional2 + pib2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 4:
                printf("\nComparações das Cartas (Atributo: Densidade Populacional + Números de Pontos Turísticos)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, densidadePopulacional1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, densidadePopulacional2);

                printf("Quem tem a menor Densidade Populacional é ");
                if(densidadePopulacional1 == densidadePopulacional2){
                    printf("Empate!\n");
                }else{
                    densidadePopulacional1 < densidadePopulacional2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, numeroDePontosTuristicos1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, numeroDePontosTuristicos2);

                printf("Quem tem o maior Número de Pontos Turísticos é ");
                if(numeroDePontosTuristicos1 == numeroDePontosTuristicos2){
                    printf("Empate!\n");
                }else{
                    numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 = densidadePopulacional1 + (float) numeroDePontosTuristicos1;
                soma2 =  densidadePopulacional2 + (float) numeroDePontosTuristicos2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 6:
                printf("\nComparações das Cartas (Atributo: Densidade Populacional + PIB per Capita)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, densidadePopulacional1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, densidadePopulacional2);

                printf("Quem tem a menor Densidade Populacional é ");
                if(densidadePopulacional1 == densidadePopulacional2){
                    printf("Empate!\n");
                }else{
                    densidadePopulacional1 < densidadePopulacional2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pibPerCapita1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, pibPerCapita2);

                printf("Quem tem o maior PIB per Capita é ");
                if(pibPerCapita1 == pibPerCapita2){
                    printf("Empate!\n");
                }else{
                    pibPerCapita1 > pibPerCapita2? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 = densidadePopulacional1 + pibPerCapita1;
                soma2 =  densidadePopulacional2 + pibPerCapita2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);
                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }
                break;
            
            default:
                printf("\nOpção inválida!\n");
                break;
            }
            

        }else{
            printf("\nVocê já escolheu esse atributo!\n");
        }

        break;

    case 6:
        printf("\nEscolha o segundo atributo:\n\n");

        printf("1 -> População\n");
        printf("2 -> Área\n");
        printf("3 -> PIB\n");
        printf("4 -> Números de Pontos Turísticos\n");
        printf("5 -> Densidade Populacional\n");
        printf("[*] PIB per Capita\n");
        printf("Sua opção é: ");
        scanf("%d", &atributo2);

        printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
        
        if (atributo2 != atributo1){
            switch (atributo2)
            {
            case 1:
                printf("\nComparações das Cartas (Atributo: PIB per Capita + População)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pibPerCapita1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, pibPerCapita2);

                printf("Quem tem o maior PIB per Capita é ");
                if(pibPerCapita1 == pibPerCapita2){
                    printf("Empate!\n");
                }else{
                    pibPerCapita1 > pibPerCapita2? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                
                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, populacao1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, populacao2);

                printf("Quem tem a maior população é ");
                if(populacao1 == populacao2){
                    printf("Empate!\n");
                }else{
                    populacao1 > populacao2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 = pibPerCapita1 + (float) populacao1;
                soma2 =  pibPerCapita2 + (float) populacao2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 2: 
                printf("\nComparações das Cartas (Atributo: PIB per Capita + Área)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pibPerCapita1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, pibPerCapita2);

                printf("Quem tem o maior PIB per Capita é ");
                if(pibPerCapita1 == pibPerCapita2){
                    printf("Empate!\n");
                }else{
                    pibPerCapita1 > pibPerCapita2? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, areaEmKm21);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, areaEmKm22);


                printf("Quem tem a maior Área é ");
                if(areaEmKm21 == areaEmKm22){
                    printf("Empate!\n");
                }else{
                    areaEmKm21 > areaEmKm22 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 = pibPerCapita1 + areaEmKm21;
                soma2 =  pibPerCapita2 + areaEmKm22;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 3:
                printf("\nComparações das Cartas (Atributo: PIB per Capita + PIB)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pibPerCapita1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2, estado2, pibPerCapita2);

                printf("Quem tem o maior PIB per Capita é ");
                if(pibPerCapita1 == pibPerCapita2){
                    printf("Empate!\n");
                }else{
                    pibPerCapita1 > pibPerCapita2? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pib1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, pib2);

                printf("Quem tem o maior PIB é ");
                if(pib1 == pib2){
                    printf("Empate!\n");
                }else{
                    pib1 > pib2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 = pibPerCapita1 + pib1;
                soma2 =  pibPerCapita2 + pib2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);
                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 4:
                printf("\nComparações das Cartas (Atributo: PIB per Capita + Números de Pontos Turísticos)\n\n");

                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pibPerCapita1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, pibPerCapita2);

                printf("Quem tem o maior PIB per Capita é ");
                if(pibPerCapita1 == pibPerCapita2){
                    printf("Empate!\n");
                }else{
                    pibPerCapita1 > pibPerCapita2? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                printf("Carta 1 -> %s(%s): %d\n", nomeDaCidade1,estado1, numeroDePontosTuristicos1);
                printf("Carta 2 -> %s(%s): %d\n", nomeDaCidade2,estado2, numeroDePontosTuristicos2);

                printf("Quem tem o maior Número de Pontos Turísticos é ");
                if(numeroDePontosTuristicos1 == numeroDePontosTuristicos2){
                    printf("Empate!\n");
                }else{
                    numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 = pibPerCapita1 + (float) numeroDePontosTuristicos1;
                soma2 =  pibPerCapita2 + (float) numeroDePontosTuristicos2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;

            case 5:
                printf("\nComparações das Cartas (Atributo: PIB per Capita + Densidade Populacional)\n\n");

                
                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, pibPerCapita1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, pibPerCapita2);

                printf("Quem tem o maior PIB per Capita é ");
                if(pibPerCapita1 == pibPerCapita2){
                    printf("Empate!\n");
                }else{
                    pibPerCapita1 > pibPerCapita2? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");


                printf("Carta 1 -> %s(%s): %.2f\n", nomeDaCidade1,estado1, densidadePopulacional1);
                printf("Carta 2 -> %s(%s): %.2f\n", nomeDaCidade2,estado2, densidadePopulacional2);

                printf("Quem tem a menor Densidade Populacional é ");
                if(densidadePopulacional1 == densidadePopulacional2){
                    printf("Empate!\n");
                }else{
                    densidadePopulacional1 < densidadePopulacional2 ? printf("Carta 1 -> (%s)\n\n", nomeDaCidade1) : printf("Carta 2 -> (%s)\n\n", nomeDaCidade2);
                }
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

                soma1 = pibPerCapita1 + densidadePopulacional1;
                soma2 =  pibPerCapita2 + densidadePopulacional2;

                printf("Carta 1 -> soma: %.2f\n", soma1);
                printf("Carta 2 -> soma: %.2f\n", soma2);

                printf("Quem tem a maior soma é ");
                if(soma1 == soma2){
                    printf("Empate!\n");
                }else{
                    soma1 > soma2 ? printf("\n;) -> Carta 1 (%s) venceu!\n\n", nomeDaCidade1) : printf("\n;) -> Carta 2 (%s) venceu!\n\n", nomeDaCidade2);
                }

                break;
            
            default:
                printf("\nOpção inválida!\n");

                break;
            }

        }else{
            printf("\nVocê já escolheu esse atributo!\n");
        }

        break;

    default:
        printf("\nOpção inváçoda!\n");

        break;
    }

    return 0;
    
}