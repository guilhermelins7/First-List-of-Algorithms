#define Algoritmo1 //Diretivas condicionais
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#ifdef Algoritmo1

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, suc, ant;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    suc = num + 1;
    ant = num - 1;

    printf("\no Sucessor de %d � %d\ne o Antecessor � %d.\n", num, suc, ant);
}

#endif // Algoritmo1

#ifdef Algoritmo2

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float valor, reajuste;

    do
    {
        printf("\nDigite um valor possitivo\n:");
        scanf("%f", &valor);
        if (valor <= 0)
        {
            printf("\nValor inv�lido.\n");
            fflush(stdin);
        }
    }
    while (valor <= 0);

    reajuste = valor + (valor * 0.1);

    printf("\nO valor %1.2f com reajuste de 10 por cento � %1.2f\n", valor, reajuste);

    return 0;
}

#endif // Algoritmo2

#ifdef Algoritmo3

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float computador = 3000;
    printf("\nOl�, o pre�o de nosso computador � R$ %1.2f\n", computador);

    float desconto = computador - computador * 0.09;
    printf("Mas temos um desconto de 9 por cento, ficando por R$ %1.2f\n", desconto);

    return 0;
}

#endif // Algoritmo2

#ifdef Algoritmo4

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int aulasDadas, valorAula;
    float descInss, salarioBruto, inssReal, salarioLiq;

    printf("\nIforme a quantidade de aulas dadas: ");
    scanf("%i", &aulasDadas);

    printf("\nInforme o valor da hora aula: ");
    scanf("%d", &valorAula);

    printf("\nInforme o desconto do INSS: ");
    scanf("%f", &descInss);

    salarioBruto = aulasDadas * valorAula;
    inssReal = descInss * 0.01;
    salarioLiq = salarioBruto - salarioBruto * inssReal;

    printf("\nO sal�rio L�quido �: %f\n", salarioLiq);

    return 0;
}

#endif // Algoritmo4

#ifdef Algoritmo5

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int precoFabrica, percentualLucro, imposto;
    float valorLucro, valorImposto, valorFinal;

    printf("\nInforme o valor de f�brica do carro: ");
    scanf("%i", &precoFabrica);

    fflush(stdin);

    printf("\nInforme o percentual de lucro: ");
    scanf("%d", &percentualLucro);

    fflush(stdin);

    printf("\nInforme o Imposto Aplicado: ");
    scanf("%d", &imposto);

    valorLucro = precoFabrica * (percentualLucro * 0.01);
    valorImposto = precoFabrica * (imposto * 0.01);
    valorFinal = precoFabrica + valorLucro + valorImposto;

    printf("\nO Lucro do distribuidor sobre o produto � R$ %1.2f", valorLucro);
    printf("\nO valor de Imposto sobre o produto � R$ %1.2f", valorImposto);
    printf("\nO valor final do produto � R$ %1.2f\n", valorFinal);

    return 0;
}

#endif // Algoritmo5

#ifdef Algoritmo6

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salarioAtual, novoSalario;

    printf("\nOl�, informe o seu Sal�rio atual:");
    scanf("%f", &salarioAtual);

    if (salarioAtual < 800)
    {
        novoSalario = salarioAtual + salarioAtual * 0.15;
        printf("\nSeu sal�rio de R$ %1.2f teve um reajuste de 15 por cento e agora � R$ %1.2f.\n", salarioAtual, novoSalario);
    }
    else if (salarioAtual >= 800 && salarioAtual <= 1000)
    {
        novoSalario = salarioAtual + salarioAtual * 0.10;
        printf("\nSeu sal�rio de R$ %1.2f teve um reajuste de 10 por cento e agora � R$ %1.2f.\n", salarioAtual, novoSalario);
    }
    else
    {
        novoSalario = salarioAtual + salarioAtual * 0.05;
        printf("\nSeu sal�rio de R$ %1.2f teve um reajuste de 5 por cento e agora � R$ %1.2f.\n", salarioAtual, novoSalario);
    }

    return 0;
}

#endif // Algoritmo6

#ifdef Algoritmo7

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float nUm, nDois, nTres, nQuatro, notaMedia;

    printf("\nOl�, para descobrir sua m�dia e se foi aprovado ou n�o, digite sua primeira nota:");
    scanf("%f", &nUm);

    fflush(stdin);

    printf("\nAgora, digite sua segunda nota:");
    scanf("%f", &nDois);

    fflush(stdin);

    printf("\nAgora, digite sua terceira nota:");
    scanf("%f", &nTres);

    fflush(stdin);

    printf("\nAgora, digite sua quarta nota:");
    scanf("%f", &nQuatro);

    notaMedia = (nUm + nDois + nTres + nQuatro) / 4;

    if (notaMedia >= 6)
    {
        printf("\nSua m�dia � %1.2f e voc� foi aprovado. Parab�ns!\n", notaMedia);
    }
    else
    {
        printf("\nSua m�dia � %1.2f e voc� infelizmente foi reprovado.\n", notaMedia);
    }

    return 0;
}

#endif // Algoritmo7

#ifdef Algoritmo8

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float numUm, numDois, numTres, numQuatro;
    float qdUm,qdDois, qdTres, qdQuatro, somaqd = 0;

    do
    {
        printf("\nDigite dois Valores, o primeiro deve estar entre 11 e 24, o segundo maior ou iqual � 0\n ");
        scanf("%f %f", &numUm, &numDois);

        if (numUm > 10 && numUm < 25 && numDois >= 0)
        {
            numTres = numUm + numDois;
            numQuatro = numUm * numDois * numTres;
            qdUm = numUm * numUm;
            qdDois = numDois * numDois;
            qdTres = numTres * numTres;
            qdQuatro = numQuatro * numQuatro;
            somaqd = qdUm + qdDois + qdTres + qdQuatro;

            printf("\nO primeiro n�mero inserido foi: %1.2f e o segundo: %1.2f.", numUm, numDois);
            printf("\nO terceiro n�mero gerado foi: %1.2f e o quarto: %1.2f", numTres, numQuatro);
            printf("\nSeus quadrados, respectivamente, foram: %1.2f, %1.2f, %1.2f, %1.2f\n", qdUm, qdDois,qdTres,qdQuatro);
            printf("\nO resultado da soma de seus quadrados foi: %1.2f\n", somaqd);

            if (numDois == 0)
            {
                printf("\nO resultado esperado para esse Algoritmo � um n�mero iqual ou acima de 5000, por favor, tente novamente.\n");
            }
        }
        else
        {
            printf("Os n�meros n�o atendem aos pr�-requisitos.");
        }
    }
    while (somaqd < 5000);

    return 0;
}

#endif // Algoritmo8

#ifdef Algoritmo9

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int A, B;

    printf("\nInsira dois valores para checar se s�o m�ltiplos\n:");
    scanf("%i %i", &A, &B);

    if (A % B == 0)
    {
        printf("\nO primeiro valor: %i � m�tiplo do segundo: %i.\n", A, B);
    }
    else if (B % A == 0)
    {
        printf("\nO segundo valor: %i � m�tiplo do primeiro: %i.\n", B, A);
    }
    else
    {
        printf("\nOs valores %i e %i n�o s�o m�ltiplos.\n", A, B);
    }

    return 0;
}

#endif // Algoritmo9

#ifdef Algoritmo10

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float product;

    printf("\nInforme o valor do produto: ");
    scanf("%f", &product);

    if (product < 100)
    {
        product = product + (product * 0.1);
        printf("\nO valor do produto com infla��o de 10 por cento �: R$ %1.2f\n", product);
    }
    else if (product >= 100)
    {
        product = product + (product * 0.2);
        printf("\nO valor do produto com infla��o de 20 por cento � R$ %1.2f\n", product);
    }

    return 0;
}

#endif // Algoritmo10

#ifdef Algoritmo11

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int numUm, numDois;

    printf("\nOl�, digite dois n�meros\n");
    scanf("%i %i", &numUm, &numDois);

    if (numUm > numDois)
    {
        printf("O primeiro n�mero: %i � maior que o segundo: %i.\n", numUm, numDois);
    }
    else if (numUm == numDois)
    {
        printf("\nOs n�meros %i e %i s�o iquais.\n", numUm, numDois);
    }
    else
    {
        printf("\nO segundo n�mero: %i � maior que o primeiro: %i.\n", numDois, numUm);
    }

    return 0;
}

#endif // Algoritmo11

#ifdef Algoritmo12

int main (void)
{
    setlocale(LC_ALL, "Portuguese");

    float numAluno, nota1, nota2, nota3, mediaEx, mediaApro;

    printf("\nOl�, aluno!\nPara descobrir sua situa��o, primeiro digite seu n�mero de identifica��o: ");
    scanf("%f", &numAluno);

    printf("\nAgora, digite suas 3 notas em segu�ncia\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("\nAgora, ditite sua m�dia nos exerc�cios: ");
    scanf("%f", &mediaEx);

    mediaApro = (nota1 + nota2 * 2 + nota3 * 3 + mediaEx) / 7;

    if (mediaApro >= 9)
    {
        printf("\nN�mero do aluno: %1.0f;\nNota 1: %1.1f\nNota 2: %1.1f\nNota 3: %1.1f\nM�dia nos exerc�cios: %1.1f;\nM�dia de aproveitamento: %1.1f;\nConceito: A;\nSitua��o: APROVADO.\n", numAluno, nota1, nota2, nota3, mediaEx, mediaApro);
    }
    else if (mediaApro < 9 && mediaApro >= 7.5)
    {
        printf("\nN�mero do aluno: %1.0f;\nNota 1: %1.1f\nNota 2: %1.1f\nNota 3: %1.1f\nM�dia nos exerc�cios: %1.1f;\nM�dia de aproveitamento: %1.1f;\nConceito: B;\nSitua��o: APROVADO.\n", numAluno, nota1, nota2, nota3, mediaEx, mediaApro);
    }
    else if (mediaApro < 7.5 && mediaApro >= 6)
    {
        printf("\nN�mero do aluno: %1.0f;\nNota 1: %1.1f\nNota 2: %1.1f\nNota 3: %1.1f\nM�dia nos exerc�cios: %1.1f;\nM�dia de aproveitamento: %1.1f;\nConceito: C;\nSitua��o: APROVADO.\n", numAluno, nota1, nota2, nota3, mediaEx, mediaApro);
    }
    else if (mediaApro < 6 && mediaApro >= 4)
    {
        printf("\nN�mero do aluno: %1.0f;\nNota 1: %1.1f\nNota 2: %1.1f\nNota 3: %1.1f\nM�dia nos exerc�cios: %1.1f;\nM�dia de aproveitamento: %1.1f;\nConceito: D;\nSitua��o: REPROVADO.\n", numAluno, nota1, nota2, nota3, mediaEx, mediaApro);
    }
    else
    {
        printf("\nN�mero do aluno: %1.0f;\nNota 1: %1.1f\nNota 2: %1.1f\nNota 3: %1.1f\nM�dia nos exerc�cios: %1.1f;\nM�dia de aproveitamento: %1.1f;\nConceito: E;\nSitua��o: REPROVADO.\n", numAluno, nota1, nota2, nota3, mediaEx, mediaApro);
    }

    return 0;
}

#endif // Algoritmo12
