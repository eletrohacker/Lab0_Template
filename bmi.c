#include <math.h>
#include <stdio.h>

double bmiCompute(double height, double weight)
{
    return weight / pow(height, 2);
}

void bmiPrintClassification(double bmi)
{
    if (bmi < 19)
    {
        printf("Abaixo do Peso");
    }
    else if (19 <= bmi && bmi < 25)
    {
        printf("Peso Normal");
    }
    else if (25 <= bmi && bmi < 30)
    {
        printf("Sobrepeso");
    }
    else if (30 <= bmi && bmi < 40)
    {
        printf("Obesidade do Tipo I");
    }
    else if (bmi >= 40)
    {
        printf("Obesidade Mórbida");
    }
}

void bmiPrintTable()
{
    printf("Valor do BMI	    Classificação\nBMI < 19	    Abaixo do Peso\n19 <= BMI < 25	    Peso Normal\n25 <= BMI < 30	    Sobrepeso\n30 <= BMI < 40	    Obesidade do Tipo I\nBMI >= 40	    Obesidade Mórbida\n");
}