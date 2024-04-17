/**
 * @file bmi.h
 * @author eletrohacker
 * @brief Funções correspondentes ao BMI
 * @version 0.1
 * @date 2024-04-17
 *
 * @copyright Copyright (c) 2024
 *
 */
#pragma once

/**
 * @brief Calcula o BMI(Índice de Massa Corporal) através do peso e da altura
 *
 * @param height A altura a inserir
 * @param weight O peso a inserir
 * @return double O INdíce de Massa Corporal
 */
double bmiCompute(double height, double weight);

/**
 * @brief Mostra o Resultado do BMI em Texto
 *
 * @param bmi O Índice de Massa Corporal (BMI)
 */
void bmiPrintClassification(double bmi);

/**
 * @brief Mostra a Tabela de Classificação do BMI
 * 
 */
void bmiPrintTable();