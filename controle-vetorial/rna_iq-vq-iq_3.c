/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cláudio Carneiro
	Info : claud
	Data: Tue Mar 06 11:47:21 BRT 2018

	Topologia: [3,5,5,1]
	Funcao de ativacao nas camadas escondidas:*outVal = tanh(x)+3.0E-4 * x; 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.025
	Eta Attual: 0.002299232267272628
	Momentum:0.7
	Epoca maxima de treinamento: 1000000
	Epoca atual: 191867
	Erro alvo durante treinamento: 1.0E-5


	O nome das variaveis possui informacoes a respeito de sua localizacao na ANN. ex:
	w010 -> o primeiro 0 indica a camada que o neuronio possuidor desse peso esta,
	o segundo numero,'1', indica o número do neurônio da camada (o ultimo neuronio e sempre um bias)
	o ultimo numero ,'0', indica qual a posicao do neuronio alvo localizado na camada seguinte. 
	As variáveis de entrada estão na mesma ordem em que são encontradas no arquivo de treinamento.

       Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
   
       1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
       2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer
           in the documentation and/or other materials provided with the distribution.
       3. Neither the name of the Institute nor the names of its contributors may be used to endorse or promote products derived from
           this software without specific prior written permission.
 

 THIS SOFTWARE IS PROVIDED BY THE INSTITUTE AND CONTRIBUTORS ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, 
 INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 IN NO EVENT SHALL THE INSTITUTE OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, 
 OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, 
 STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
   Colunas de ENTRADA referente aos dados de treino :
   8   12   14
   Colunas de SAIDA referente aos dados de treino :
   16
*/
#include <math.h>
#define NORM_MIN -1.0
#define NORM_MAX 1.0

// -------- Layer 0 --------
double w0[4][5]={{0.5428841092929331,-5.774988999364318,0.009680129641824027,0.9560344235550122,0.7432578219796941},// Neuronio 0
{-3.971993928748419,-2.103058554069411,-1.9465945673498202,0.46655730625347613,-1.243772056417121},// Neuronio 1
{-0.3673641509236274,-1.6967651481197488,0.14242868968655914,-0.037779826213397726,0.0712976246437888},// Neuronio 2
{4.495639631901293,-1.0435257701004603,-2.5213402638075557,-0.17732801907375204,-0.5457456824143015}// Bias
};
// -------- Layer 1 --------
double w1[6][5]={{-1.0331442173421759,-0.7170900247958412,-0.900153982801597,-2.7762213805489973,0.8147931694694805},// Neuronio 0
{1.5049411913078696,2.1370213619922462,1.2223917057591187,1.4796041918986507,-1.4481465441827461},// Neuronio 1
{0.5687175302166131,1.3935145098285704,-1.9190510265931537,-1.0227257924948545,-1.1250959482161984},// Neuronio 2
{0.7380629488488839,0.024613519417590414,0.14940661246785358,-1.0136571682783737,1.6741920333896445},// Neuronio 3
{-1.1207182293225506,-2.192428463722847,-0.683165722925947,-0.34666487592827855,-0.2940432520147152},// Neuronio 4
{-1.6314564283020623,2.1383110702479144,0.28646712240023786,1.5047264391716204,0.215238819790219}// Bias
};
// -------- Layer 2 --------
double w2[6][1]={{-1.066162128097773},// Neuronio 0
{0.31727456100477136},// Neuronio 1
{0.5143638552184114},// Neuronio 2
{-1.3043032829036487},// Neuronio 3
{-0.5111504143246745},// Neuronio 4
{-1.0713213855191137}// Bias
};double inMax[] = { 7.4651061670507, 0.0, 2.5168173054518};
double inMin[] = { -6.0960684555755, -387.10459519063, -9.4712738253491};
double outMaxD[] = { 182.93855685794};
double outMinD[] = { -183.07002371663};
// --------------------------------------------------------------------------------------
void normaliza(double *in, int i, double *outN){
	double a = (NORM_MAX - NORM_MIN) / (inMax[i] - inMin[i]);
	double b = ((-(NORM_MAX)) * inMin[i] + (NORM_MIN) * inMax[i]) / (inMax[i] - inMin[i]);
	*outN = (a * *in + b);
}
void desnormaliza(double x, int i, double *resNorm){
	double a = (NORM_MAX - (NORM_MIN)) / (outMaxD[i] - outMinD[i]);
	double b = (-(NORM_MAX) * outMinD[i] + (NORM_MIN) * outMaxD[i]) / (outMaxD[i] - outMinD[i]);
	*resNorm = (x - b) / a;
}
void actvFunc(double x, double *outVal){*outVal = tanh(x)+3.0E-4 * x;}

void actvFuncSaida(double x, double *outVal){*outVal =  x;}

void reden_(double *inExt0,double *inExt1,double *inExt2,double *out0){
      double   in1[]={0,0,0,0,0};
      double   in2[]={0,0,0,0,0};
double  out0D = 0;
double  in0N = 0, in1N = 0, in2N = 0;
normaliza(inExt0,0,&in0N);
normaliza(inExt1,1,&in1N);
normaliza(inExt2,2,&in2N);
actvFunc(( in0N * w0[0][0] +  in1N * w0[1][0] +  in2N * w0[2][0] + -1.0*w0[3][0]), &in1[0]);
actvFunc(( in0N * w0[0][1] +  in1N * w0[1][1] +  in2N * w0[2][1] + -1.0*w0[3][1]), &in1[1]);
actvFunc(( in0N * w0[0][2] +  in1N * w0[1][2] +  in2N * w0[2][2] + -1.0*w0[3][2]), &in1[2]);
actvFunc(( in0N * w0[0][3] +  in1N * w0[1][3] +  in2N * w0[2][3] + -1.0*w0[3][3]), &in1[3]);
actvFunc(( in0N * w0[0][4] +  in1N * w0[1][4] +  in2N * w0[2][4] + -1.0*w0[3][4]), &in1[4]);
actvFunc(( in1[0] *w1[0][0] +  in1[1] *w1[1][0] +  in1[2] *w1[2][0] +  in1[3] *w1[3][0] +  in1[4] *w1[4][0] + -1.0*w1[5][0]), &in2[0]);
actvFunc(( in1[0] *w1[0][1] +  in1[1] *w1[1][1] +  in1[2] *w1[2][1] +  in1[3] *w1[3][1] +  in1[4] *w1[4][1] + -1.0*w1[5][1]), &in2[1]);
actvFunc(( in1[0] *w1[0][2] +  in1[1] *w1[1][2] +  in1[2] *w1[2][2] +  in1[3] *w1[3][2] +  in1[4] *w1[4][2] + -1.0*w1[5][2]), &in2[2]);
actvFunc(( in1[0] *w1[0][3] +  in1[1] *w1[1][3] +  in1[2] *w1[2][3] +  in1[3] *w1[3][3] +  in1[4] *w1[4][3] + -1.0*w1[5][3]), &in2[3]);
actvFunc(( in1[0] *w1[0][4] +  in1[1] *w1[1][4] +  in1[2] *w1[2][4] +  in1[3] *w1[3][4] +  in1[4] *w1[4][4] + -1.0*w1[5][4]), &in2[4]);
actvFuncSaida( ( in2[0] *w2[0][0] +  in2[1] *w2[1][0] +  in2[2] *w2[2][0] +  in2[3] *w2[3][0] +  in2[4] *w2[4][0] + -1.0*w2[5][0]),  &out0D);
desnormaliza(  out0D , 0, &out0D);
 *out0 =  out0D;
}