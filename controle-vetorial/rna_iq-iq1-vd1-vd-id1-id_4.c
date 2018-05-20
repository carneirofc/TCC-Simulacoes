/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cláudio Carneiro
	Info : claud
	Data: Tue Mar 06 20:23:32 BRT 2018

	Topologia: [6,4,4,1]
	Funcao de ativacao nas camadas escondidas:*outVal = tanh(x); 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.015
	Eta Attual: 0.012101578825382235
	Momentum:0.7
	Epoca maxima de treinamento: 1000000
	Epoca atual: 1834
	Erro alvo durante treinamento: 1.0E-4


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
   8   9   10   12   13   14
   Colunas de SAIDA referente aos dados de treino :
   16
*/
#include <math.h>
#define NORM_MIN -1.0
#define NORM_MAX 1.0

// -------- Layer 0 --------
double w0[7][4]={{-0.6659009265982843,1.5189203925205772,0.08042640713090436,1.767267561567996},// Neuronio 0
{1.7882012266475762,1.583043321260345,0.07514850608982718,0.6152612660768784},// Neuronio 1
{2.1413449686380837,-0.18857400012279818,-0.06506203903615032,0.9604708521179595},// Neuronio 2
{0.703168911975001,0.5841687588158015,-0.5193334659198917,-0.6354196174746453},// Neuronio 3
{-0.9843394437631887,0.6884642001249142,0.010237647873163443,0.8272767999406856},// Neuronio 4
{0.7151643487712185,-0.4793003756451797,0.034363261172506446,-0.6302888450793269},// Neuronio 5
{-0.46937110436775215,0.04270410776298375,-0.25682704683595997,1.3264803719006766}// Bias
};
// -------- Layer 1 --------
double w1[5][4]={{-0.8778916735302493,0.244627466342029,-1.035494783580254,-0.12589439303688457},// Neuronio 0
{0.6405331647646393,1.3883986342308219,-1.6557772638119503,1.185988158581214},// Neuronio 1
{0.7178062638915133,-1.899820122519683,0.09224375398733257,-1.603207755758193},// Neuronio 2
{-0.11751893899279175,-0.10962997587550527,-0.87682505647338,-0.7263912884093736},// Neuronio 3
{2.617731127020989,1.2526136346683767,-0.8175687058693163,-0.8632199885339494}// Bias
};
// -------- Layer 2 --------
double w2[5][1]={{2.0755618716484094},// Neuronio 0
{-0.6043223572464356},// Neuronio 1
{-0.39417863365907047},// Neuronio 2
{0.9606564205496235},// Neuronio 3
{-1.1347990423753611}// Bias
};double inMax[] = { 7.4651061670507, 7.6055579941048, 0.0, 0.0, 2.4899290945733, 2.5168173054518};
double inMin[] = { -7.7645915022835, -7.7324917228236, -387.3646892555, -388.43871669605, -9.4748957190674, -9.4712738253491};
double outMaxD[] = { 182.93004544343};
double outMinD[] = { -183.03606532115};
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

void reden_(double *inExt0,double *inExt1,double *inExt2,double *inExt3,double *inExt4,double *inExt5,double *out0){
      double   in1[]={0,0,0,0};
      double   in2[]={0,0,0,0};
double  out0D = 0;
double  in0N = 0, in1N = 0, in2N = 0, in3N = 0, in4N = 0, in5N = 0;
normaliza(inExt0,0,&in0N);
normaliza(inExt1,1,&in1N);
normaliza(inExt2,2,&in2N);
normaliza(inExt3,3,&in3N);
normaliza(inExt4,4,&in4N);
normaliza(inExt5,5,&in5N);
actvFunc(( in0N * w0[0][0] +  in1N * w0[1][0] +  in2N * w0[2][0] +  in3N * w0[3][0] +  in4N * w0[4][0] +  in5N * w0[5][0] + -1.0*w0[6][0]), &in1[0]);
actvFunc(( in0N * w0[0][1] +  in1N * w0[1][1] +  in2N * w0[2][1] +  in3N * w0[3][1] +  in4N * w0[4][1] +  in5N * w0[5][1] + -1.0*w0[6][1]), &in1[1]);
actvFunc(( in0N * w0[0][2] +  in1N * w0[1][2] +  in2N * w0[2][2] +  in3N * w0[3][2] +  in4N * w0[4][2] +  in5N * w0[5][2] + -1.0*w0[6][2]), &in1[2]);
actvFunc(( in0N * w0[0][3] +  in1N * w0[1][3] +  in2N * w0[2][3] +  in3N * w0[3][3] +  in4N * w0[4][3] +  in5N * w0[5][3] + -1.0*w0[6][3]), &in1[3]);
actvFunc(( in1[0] *w1[0][0] +  in1[1] *w1[1][0] +  in1[2] *w1[2][0] +  in1[3] *w1[3][0] + -1.0*w1[4][0]), &in2[0]);
actvFunc(( in1[0] *w1[0][1] +  in1[1] *w1[1][1] +  in1[2] *w1[2][1] +  in1[3] *w1[3][1] + -1.0*w1[4][1]), &in2[1]);
actvFunc(( in1[0] *w1[0][2] +  in1[1] *w1[1][2] +  in1[2] *w1[2][2] +  in1[3] *w1[3][2] + -1.0*w1[4][2]), &in2[2]);
actvFunc(( in1[0] *w1[0][3] +  in1[1] *w1[1][3] +  in1[2] *w1[2][3] +  in1[3] *w1[3][3] + -1.0*w1[4][3]), &in2[3]);
actvFuncSaida( ( in2[0] *w2[0][0] +  in2[1] *w2[1][0] +  in2[2] *w2[2][0] +  in2[3] *w2[3][0] + -1.0*w2[4][0]),  &out0D);
desnormaliza(  out0D , 0, &out0D);
 *out0 =  out0D;
}