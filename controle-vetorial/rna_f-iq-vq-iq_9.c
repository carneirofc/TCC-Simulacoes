/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cláudio Carneiro
	Info : claud
	Data: Tue Mar 06 11:00:30 BRT 2018

	Topologia: [4,7,1]
	Funcao de ativacao nas camadas escondidas:*outVal =  1.7159 * (tanh(3 / 2 * x))+1.0E-8 * x; 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.0025
	Eta Attual: 0.002498125937109521
	Momentum:0.2
	Epoca maxima de treinamento: 1000000
	Epoca atual: 15453
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
double w0[5][7]={{0.056501552376235935,1.175952947109819,-1.1915032600501,0.43136673744887766,0.7604569188476831,0.24910944088578352,0.19502099593243943},// Neuronio 0
{0.19139427929310715,1.0690613089558727,-0.37521061776491416,1.184545900430172,0.5541812976612361,0.35441831362744475,1.272711943071938},// Neuronio 1
{-0.09522442874627544,0.5736267744339463,-0.9408491335440787,0.8351328982868051,0.4008225830341381,0.33368074060954567,-1.8331632412265504},// Neuronio 2
{-1.6178516412449138,0.3502184927020128,0.060527370918506955,-0.04149934658877208,1.3134789560930884,-0.19572138925162358,-0.10140352109962623},// Neuronio 3
{-0.7943409935441932,0.6575552449935481,-1.2531626225092454,0.9317276375626478,-0.8302230056561013,0.32856598681230503,0.6911726879621658}// Bias
};
// -------- Layer 1 --------
double w1[8][1]={{-0.06469094977069524},// Neuronio 0
{0.5496935233222706},// Neuronio 1
{0.4212183570049128},// Neuronio 2
{-0.7976462204896434},// Neuronio 3
{0.04065547175625366},// Neuronio 4
{1.2519070750897225},// Neuronio 5
{-0.02501039383774356},// Neuronio 6
{0.273767705809613}// Bias
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
void actvFunc(double x, double *outVal){*outVal =  1.7159 * (tanh(3 / 2 * x))+1.0E-8 * x;}

void actvFuncSaida(double x, double *outVal){*outVal =  x;}

void reden_(double *inExt0,double *inExt1,double *inExt2,double *inExt3,double *out0){
      double   in1[]={0,0,0,0,0,0,0};
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
actvFunc(( in0N * w0[0][5] +  in1N * w0[1][5] +  in2N * w0[2][5] +  in3N * w0[3][5] + -1.0*w0[4][5]), &in1[5]);
actvFunc(( in0N * w0[0][6] +  in1N * w0[1][6] +  in2N * w0[2][6] +  in3N * w0[3][6] + -1.0*w0[4][6]), &in1[6]);
actvFuncSaida( ( in1[0] *w1[0][0] +  in1[1] *w1[1][0] +  in1[2] *w1[2][0] +  in1[3] *w1[3][0] +  in1[4] *w1[4][0] +  in1[5] *w1[5][0] +  in1[6] *w1[6][0] + -1.0*w1[7][0]),  &out0D);
desnormaliza(  out0D , 0, &out0D);
 *out0 =  out0D;
}