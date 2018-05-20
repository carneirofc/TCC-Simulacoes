/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cláudio Carneiro
	Info : claud
	Data: Tue Mar 06 20:25:11 BRT 2018

	Topologia: [6,4,4,1]
	Funcao de ativacao nas camadas escondidas:*outVal = tanh(x); 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.015
	Eta Attual: 0.011537719701903678
	Momentum:0.7
	Epoca maxima de treinamento: 1000000
	Epoca atual: 2281
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
double w0[7][4]={{0.359594544012336,-0.830491379409758,-0.68038079271316,-0.4455184459574102},// Neuronio 0
{0.4213301882103577,1.0475258311000621,-0.5189139991166878,-0.15209649714731624},// Neuronio 1
{0.45990093486766526,-1.0080165342423064,0.4602816620174184,-2.5959277935544507},// Neuronio 2
{0.8159663837846904,-1.3149558237478975,-0.18696090425380862,-1.016455840214512},// Neuronio 3
{-0.7956235133696802,-0.5342114550451607,-0.2087034634660207,1.0381988432835136},// Neuronio 4
{-1.4326883913651585,0.32423197096215683,1.5812874141025364,-0.4793140856320509},// Neuronio 5
{1.4239159697092973,-2.4842843524087197,-0.09700480153069553,2.210990333877431}// Bias
};
// -------- Layer 1 --------
double w1[5][4]={{0.4520892351154517,-0.4801844613153588,0.2967971488462092,0.565525258530019},// Neuronio 0
{1.2830221184942598,-0.6589885730707536,1.2233658645405294,-0.836373906804616},// Neuronio 1
{1.918732556252742,0.11244742744310669,1.7908046934511772,0.8327846231385383},// Neuronio 2
{1.8887517650821781,-3.3592081686516746,0.35924727233067866,-0.3668965484596076},// Neuronio 3
{0.18809667022998414,-1.5605262297543638,1.0350602319308018,-1.4576517575919457}// Bias
};
// -------- Layer 2 --------
double w2[5][1]={{-0.9174206655137312},// Neuronio 0
{-0.5017751496602643},// Neuronio 1
{0.4877044319750637},// Neuronio 2
{-1.1368632331036697},// Neuronio 3
{-0.3853742448984691}// Bias
};double inMax[] = { 7.4651061670507, 7.6055579941048, 0.0, 0.0, 0.0, 0.0};
double inMin[] = { -7.7645915022835, -7.7324917228236, -387.3646892555, -388.43871669605, -9.4748957190674, -9.4712738253491};
double outMaxD[] = { 181.98945215128};
double outMinD[] = { -39.871830118983};
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