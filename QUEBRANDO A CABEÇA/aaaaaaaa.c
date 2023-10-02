    #include <locale.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <strings.h>

    int main()
    {
        setlocale(LC_ALL, "Portuguese_Brazil");

        float peso, altura, imc;

        printf("Ol�, qual � o seu peso?\n");
        scanf("%f", &peso);

        printf("E qual � a sua altura?\n");
        scanf("%f", &altura);

        imc = peso / (altura*altura);

        if (imc < 16)
        {
            printf("BAIXO PESO MUITO GRAVE! Procure um m�dico IMEDIATAMENTE!");
        }
        
        else if (imc >= 16 && imc <= 16.99)
        {
            printf("BAIXO PESO GRAVE! Procure um m�dico o MAIS R�PIDO POSS�VEL!");
        }
        
        else if (imc >= 17 && imc <= 18.49)
        {
            printf("BAIXO PESO! Pe�a orienta��es a seu nutricionista!");
        }

        else if (imc >= 18.50 && imc <= 24.99)
        {
            printf("Seu IMC � EXCELENTE! Parab�ns!");
        }
        
        else if (imc >= 25 && imc <= 29.99)
        {
            printf("SOBREPESO! Tenha aten��o em sua alimenta��o!");
        }
        
        else if (imc >= 30 && imc <= 34.99)
        {
            printf("OBESIDADE GRAU I! Aten��o, ind�cios de obesidade! Procure seu m�dico!");
        }
        
        else if (imc >= 35 && imc <= 39.99)
        {
            printf("OBESIDADE GRAU II! Procure um m�dico nutricionista o MAIS R�PIDO POSS�VEL!");
        }
        
        else
        {
            printf("OBESIDADE GRAU III! Sua situa��o � de risco! Procure um m�dico IMEDIATAMENTE");
        }
    }