#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "bmi.h"

int main()
{
    double weight, height;
    bmiPrintTable();
    printf("Diga o seu peso (kg): ");
    readDouble(&weight);
    printf("Diga a sua altura (m): ");
    readDouble(&height);
    bmiPrintClassification(bmiCompute(height, weight));
    printf("\n");

    return EXIT_SUCCESS;
}
