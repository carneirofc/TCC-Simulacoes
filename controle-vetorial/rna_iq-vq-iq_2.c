/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cláudio Carneiro
	Info : claud
	Data: Tue Mar 06 11:28:20 BRT 2018

	Topologia: [3,5,1]
	Funcao de ativacao nas camadas escondidas:*outVal = tanh(x)+3.0E-4 * x; 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.025
	Eta Attual: 0.019606955673723007
	Momentum:0.7
	Epoca maxima de treinamento: 1000000
	Epoca atual: 3983
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
double w0[4][5]={{1.8851439247507566,-2.3433923738760303,-0.6280811638230471,-2.5612265343993386,1.0755743930930841},// Neuronio 0
{2.393759958635058,0.4026388747197604,-1.3125320193778605,-0.32491307509812556,-1.5315205526011435},// Neuronio 1
{-0.013002549723525837,-0.18442838809507017,0.15268043857540728,-0.15212154520201807,0.2423016585737735},// Neuronio 2
{-0.30501049301783095,-0.8416712358749376,1.3904807153973475,-1.5375599494195777,2.087123034050727}// Bias
};
// -------- Layer 1 --------
double w1[6][1]={{0.19987664686995688},// Neuronio 0
{-0.7841540756628994},// Neuronio 1
{-0.516411269879034},// Neuronio 2
{0.7173501054869483},// Neuronio 3
{0.7239980449414124},// Neuronio 4
{-0.09570445734867719}// Bias
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
actvFuncSaida( ( in1[0] *w1[0][0] +  in1[1] *w1[1][0] +  in1[2] *w1[2][0] +  in1[3] *w1[3][0] +  in1[4] *w1[4][0] + -1.0*w1[5][0]),  &out0D);
desnormaliza(  out0D , 0, &out0D);
 *out0 =  out0D;
}