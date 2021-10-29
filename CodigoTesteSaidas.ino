/*

Programa: Máquina de achocolatados
Autor: Mateus Lima
Ultima alteração: 29/10/2021
Versão: 1.0
Organização: Senai Taguantiga
Descrição: .......

*/
//////////////Portas///////////////// 

//Saidas
#define PortValvEntrada 1
#define PortValvSaida 2
#define PortPneum 3
#define PortMotAgit 4
#define SinalToddy 5
#define SinalNescau 6
#define SinalEnergisado 7
#define SinalEmergencia 8

//Entradas

#define BtnToddy 11
#define BtnNescau 12
#define BtnEmergencia 13




void setup(){
	// Definir as portas de saida
	pinMode(PortValvEntrada,OUTPUT);
	pinMode(PortValvSaida,OUTPUT);
	pinMode(PortPneum,OUTPUT);
	pinMode(PortMotAgit,OUTPUT);
	pinMode(SinalToddy,OUTPUT);
	pinMode(SinalNescau,OUTPUT);
	pinMode(SinalEnergisado,OUTPUT);
	pinMode(SinalEmergencia,OUTPUT);
	//definir as portas de entrada
	pinMode(BtnToddy,INPUT_PULLUP);
	pinMode(BtnNescau,INPUT_PULLUP);
	pinMode(BtnEmergencia,INPUT_PULLUP);
	//Inicia a comunicação serial
	Serial.begin(9600);
}
void loop(){


	digitalWrite(PortValvEntrada,1);
	digitalWrite(PortValvSaida,1);
	digitalWrite(PortPneum,1);
	digitalWrite(PortMotAgit,1);
	digitalWrite(SinalToddy,1);
	digitalWrite(SinalNescau,1);
	digitalWrite(SinalEnergisado,1);
	digitalWrite(SinalEmergencia,1);

	delay(1000);

    digitalWrite(PortValvEntrada,0);
	digitalWrite(PortValvSaida,0);
	digitalWrite(PortPneum,0);
	digitalWrite(PortMotAgit,0);
	digitalWrite(SinalToddy,0);
	digitalWrite(SinalNescau,0);
	digitalWrite(SinalEnergisado,0);
	digitalWrite(SinalEmergencia,0);

	delay(1000);
}
