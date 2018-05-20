/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cláudio Carneiro
	Info : claud
	Data: Tue Mar 06 10:20:16 BRT 2018

	Topologia: [4,5,5,1]
	Funcao de ativacao nas camadas escondidas:*outVal = tanh(x); 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.025
	Eta Attual: 7.820468174817994E-9
	Momentum:0.7
	Epoca maxima de treinamento: 100000
	Epoca atual: 58579
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
   5   8   12   14
   Colunas de SAIDA referente aos dados de treino :
   16
*/
#include <math.h>
#define NORM_MIN -1.0
#define NORM_MAX 1.0

// -------- Layer 0 --------
double w0[5][5]={{-1.1571666010446575,-0.10108723499814974,-0.03351575540527178,-0.13452777965168883,-0.05080034071584995},// Neuronio 0
{0.2946365268771632,0.7860156598208068,0.18258095059336232,1.2133697177063707,0.5604549923431104},// Neuronio 1
{1.510197235148677,1.5559781027281476,1.04440876023414,-0.9913825851218692,0.23567632573960468},// Neuronio 2
{-0.10162840681063905,-0.09646030358145156,-0.03224141336965612,0.09524774433907951,5.444532114779728E-4},// Neuronio 3
{-1.8960153178688492,-0.8265262813376827,0.9856168841018742,0.2572016075832451,-0.060309303335607356}// Bias
};
// -------- Layer 1 --------
double w1[6][5]={{-1.1036097004730858,0.7565673328768259,0.16853062231097024,-0.5770279749614713,0.8005397273714279},// Neuronio 0
{0.7861207856504178,0.8241559011326279,-0.09823444598381047,0.5517657092696187,0.6198662175343841},// Neuronio 1
{-0.19536266262186186,0.05717168488869455,-0.5730417402472314,0.8395133659947274,0.24944574187729507},// Neuronio 2
{0.15414285082932266,-1.2414295938396567,1.1708715308780655,1.1011430361852415,-0.25383148226608426},// Neuronio 3
{-1.3072022018614546,0.8898218680070472,-0.1801765193053356,1.074630311944513,0.4365466856356696},// Neuronio 4
{-0.36740805673999494,-0.08788736617668876,-0.13717295733142806,-1.4526828286994056,0.43820606728299005}// Bias
};
// -------- Layer 2 --------
double w2[6][1]={{0.8514797701548646},// Neuronio 0
{0.5424237945539463},// Neuronio 1
{0.0704918597602386},// Neuronio 2
{0.7638032433338093},// Neuronio 3
{-0.437989796714789},// Neuronio 4
{0.2575542815666157}// Bias
};double inMax[] = { 60.744045958651, 7.4651061670507, 0.0, 2.5168173054518};
double inMin[] = { -61.360445342122, -6.0960684555755, -387.10459519063, -9.4712738253491};
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
void actvFunc(double x, double *outVal){*outVal = tanh(x);}

void actvFuncSaida(double x, double *outVal){*outVal =  x;}

void reden_(double *inExt0,double *inExt1,double *inExt2,double *inExt3,double *out0){
      double   in1[]={0,0,0,0,0};
      double   in2[]={0,0,0,0,0};
double  out0D = 0;
double  in0N = 0, in1N = 0, in2N = 0, in3N = 0;
normaliza(inExt0,0,&in0N);
normaliza(inExt1,1,&in1N);
normaliza(inExt2,2,&in2N);
normaliza(inExt3,3,&in3N);
actvFunc(( in0N * w0[0][0] +  in1N * w0[1][0] +  in2N * w0[2][0] +  in3N * w0[3][0] + -1.0*w0[4][0]), &in1[0]);
actvFunc(( in0N * w0[0][1] +  in1N * w0[1][1] +  in2N * w0[2][1] +  in3N * w0[3][1] + -1.0*w0[4][1]), &in1[1]);
actvFunc(( in0N * w0[0][2] +  in1N * w0[1][2] +  in2N * w0[2][2] +  in3N * w0[3][2] + -1.0*w0[4][2]), &in1[2]);
actvFunc(( in0N * w0[0][3] +  in1N * w0[1][3] +  in2N * w0[2][3] +  in3N * w0[3][3] + -1.0*w0[4][3]), &in1[3]);
actvFunc(( in0N * w0[0][4] +  in1N * w0[1][4] +  in2N * w0[2][4] +  in3N * w0[3][4] + -1.0*w0[4][4]), &in1[4]);
actvFunc(( in1[0] *w1[0][0] +  in1[1] *w1[1][0] +  in1[2] *w1[2][0] +  in1[3] *w1[3][0] +  in1[4] *w1[4][0] + -1.0*w1[5][0]), &in2[0]);
actvFunc(( in1[0] *w1[0][1] +  in1[1] *w1[1][1] +  in1[2] *w1[2][1] +  in1[3] *w1[3][1] +  in1[4] *w1[4][1] + -1.0*w1[5][1]), &in2[1]);
actvFunc(( in1[0] *w1[0][2] +  in1[1] *w1[1][2] +  in1[2] *w1[2][2] +  in1[3] *w1[3][2] +  in1[4] *w1[4][2] + -1.0*w1[5][2]), &in2[2]);
actvFunc(( in1[0] *w1[0][3] +  in1[1] *w1[1][3] +  in1[2] *w1[2][3] +  in1[3] *w1[3][3] +  in1[4] *w1[4][3] + -1.0*w1[5][3]), &in2[3]);
actvFunc(( in1[0] *w1[0][4] +  in1[1] *w1[1][4] +  in1[2] *w1[2][4] +  in1[3] *w1[3][4] +  in1[4] *w1[4][4] + -1.0*w1[5][4]), &in2[4]);
actvFuncSaida( ( in2[0] *w2[0][0] +  in2[1] *w2[1][0] +  in2[2] *w2[2][0] +  in2[3] *w2[3][0] +  in2[4] *w2[4][0] + -1.0*w2[5][0]),  &out0D);
desnormaliza(  out0D , 0, &out0D);
 *out0 =  out0D;
}