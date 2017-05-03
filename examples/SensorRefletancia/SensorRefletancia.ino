//Copyright 2017 Joaquim Flávio Almeida Quirino Gomes, Dêmis Carlos ----*
//Fonseca Gomes, Marcos Dias da Conceição e Diego de Castro Rodrigues---*
//----------------------------------------------------------------------*
//Este arquivo é parte da Biblioteca de Funções GuaráTeca---------------*
//A GuaráTeca é um software livre; você pode redistribuí-lo e/ou--------* 
//modificá-lo sob os termos da Licença Pública Geral GNU como publicada-*
//pela Fundação do Software Livre (FSF); na versão 3 da Licença,--------*
//ou (a seu critério) qualquer versão posterior.------------------------*
//
//Este programa é distribuído na esperança de que possa ser útil,-------* 
//mas SEM NENHUMA GARANTIA; sem uma garantia implícita de ADEQUAÇÃO-----*
//a qualquer MERCADO ou APLICAÇÃO EM PARTICULAR. Veja a-----------------*
//Licença Pública Geral GNU para mais detalhes.-------------------------*
//
//Você deve ter recebido uma cópia da Licença Pública Geral GNU junto---*
//com este programa. Se não, veja <http://www.gnu.org/licenses/>--------*

//Uso do sensor_Refletancia GuaraTeca_Hardware--------------------------*
//versao: 1.0-----------------------------------------------------------*

#include <GuaraTeca_SensorRefletancia.h>

SensorRefletancia objct;//declaramos o sensor de refletancia

void setup() {   
  Serial.begin(9600);
  objct.iniciaSensorRefletancia(A0);//iniciamos o sensor de refletancia na porta A0
}

void loop() {
  Serial.print("Refletancia: ");
  Serial.println(objct.leitura(A0));//imprimimos a leitura do sensor na porta A0
}