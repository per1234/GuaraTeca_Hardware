//Copyright 2017 Joaquim Fl�vio Almeida Quirino Gomes, D�mis Carlos ----*
//Fonseca Gomes, Marcos Dias da Concei��o e Diego de Castro Rodrigues---*
//----------------------------------------------------------------------*
//Este arquivo � parte da Biblioteca de Fun��es Guar�Teca---------------*
//A Guar�Teca � um software livre; voc� pode redistribu�-lo e/ou--------* 
//modific�-lo sob os termos da Licen�a P�blica Geral GNU como publicada-*
//pela Funda��o do Software Livre (FSF); na vers�o 3 da Licen�a,--------*
//ou (a seu crit�rio) qualquer vers�o posterior.------------------------*
//
//Este programa � distribu�do na esperan�a de que possa ser �til,-------* 
//mas SEM NENHUMA GARANTIA; sem uma garantia impl�cita de ADEQUA��O-----*
//a qualquer MERCADO ou APLICA��O EM PARTICULAR. Veja a-----------------*
//Licen�a P�blica Geral GNU para mais detalhes.-------------------------*
//
//Voc� deve ter recebido uma c�pia da Licen�a P�blica Geral GNU junto---*
//com este programa. Se n�o, veja <http://www.gnu.org/licenses/>--------*

#ifndef GuaraTeca_Sensor_GY521_MPU6050_H
#define GuaraTeca_Sensor_GY521_MPU6050_H
//Módulo GY-521 MPU6050

#if ARDUINO >= 100
    #include "Arduino.h"
#endif
#include <Wire.h>


class GY521_MPU6050{
    public:
        GY521_MPU6050();//construtor da classe GY521_MPU6050.
        void iniciaGY521_MPU6050(char endereco);//metodo para preparar o hardware para os devidos comandos.
        
        void ObtemDados(int array[], char endereco);//metodo interno para leitura do vetor de dados do sensor.
    private:
        //int *dadosGiroscopio;
};

#endif