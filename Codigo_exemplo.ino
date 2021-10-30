//Codigo
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

//temporizadores

#define TempoEnchimento 3000
#define TempoMistura 5000
#define TempoRetiraCopo 15000


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

	int LeituraBtnToddy = digitalRead(BtnToddy);
	int LeituraBtnNescau = digitalRead(BtnNescau);
	int LeituraBtnEmerg = digitalRead(BtnEmergencia);
	//Desligar agitador
	digitalWrite(PortMotAgit,0);

	if(BtnToddy==0){
		//Desligar agitador
		digitalWrite(PortMotAgit,0);
		//fechar porta pneumática
		digitalWrite(PortPneum,1);
		//fechar valvula de saida
		digitalWrite(PortValvSaida,1);
		//abrir valvula de entrada
		digitalWrite(PortValvEntrada,1);
		//abrir valvula do toddy
		digitalWrite(SinalToddy,1);
		//contou certo tempo (encher o copo)
		delay(TempoEnchimento);
		//fecha a valvula de entrada
		digitalWrite(PortValvEntrada,0);
		//fecha a valvula do toddy
		digitalWrite(SinalToddy,0);
		//liga agitador
		digitalWrite(PortMotAgit,1);
		//contar um tempo para mistura
		delay(TempoMistura);
		//desliga o motor
		digitalWrite(PortMotAgit,0);
		//abrir valvula de saída
		digitalWrite(PortValvSaida,0);
		//abrir a porta pneumática
		digitalWrite(PortPneum,0);
		//contar um tempo para o cliente retira a bebida
		delay(TempoRetiraCopo);
	}else{
		//desliga o motor
		digitalWrite(PortMotAgit,0);
		//abrir a porta pneumática
		digitalWrite(PortPneum,0);
		//fechar valvula de saida
		digitalWrite(PortValvSaida,1);
		//fecha a valvula de entrada
		digitalWrite(PortValvEntrada,0);
		//fecha a valvula do toddy
		digitalWrite(SinalToddy,0);
	}

if(BtnNescau==0){
		//Desligar agitador
		digitalWrite(PortMotAgit,0);
		//fechar porta pneumática
		digitalWrite(PortPneum,1);
		//fechar valvula de saida
		digitalWrite(PortValvSaida,1);
		//abrir valvula de entrada
		digitalWrite(PortValvEntrada,1);
		//abrir valvula do toddy
		digitalWrite(SinalNescau,1);
		//contou certo tempo (encher o copo)
		delay(TempoEnchimento);
		//fecha a valvula de entrada
		digitalWrite(PortValvEntrada,0);
		//fecha a valvula do toddy
		digitalWrite(SinalNescau,0);
		//liga agitador
		digitalWrite(PortMotAgit,1);
		//contar um tempo para mistura
		delay(TempoMistura);
		//desliga o motor
		digitalWrite(PortMotAgit,0);
		//abrir valvula de saída
		digitalWrite(PortValvSaida,0);
		//abrir a porta pneumática
		digitalWrite(PortPneum,0);
		//contar um tempo para o cliente retira a bebida
		delay(TempoRetiraCopo);
	}else{
		//desliga o motor
		digitalWrite(PortMotAgit,0);
		//abrir a porta pneumática
		digitalWrite(PortPneum,0);
		//fechar valvula de saida
		digitalWrite(PortValvSaida,1);
		//fecha a valvula de entrada
		digitalWrite(PortValvEntrada,0);
		//fecha a valvula do toddy
		digitalWrite(SinalNescau,0);
	}









/*
	int LeituraBtnToddy = digitalRead(BtnToddy);
	int LeituraBtnNescau = digitalRead(BtnNescau);
	int LeituraBtnEmerg = digitalRead(BtnEmergencia);

// Condicional 
	if(LeituraBtnToddy==0){
		digitalWrite(SinalToddy,1);
	}else{
		digitalWrite(SinalToddy,0);
	}

	if(LeituraBtnNescau==0){
		digitalWrite(SinalNescau,1);
	}else{
		digitalWrite(SinalNescau,0);
	}

	if(LeituraBtnEmerg==0){
		digitalWrite(SinalEmergencia,1);
	}else{
		digitalWrite(SinalEmergencia,0);
	}

*/




/*	
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
*/
}
