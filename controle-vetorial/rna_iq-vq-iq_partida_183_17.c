/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cláudio Carneiro
	Info : claud
	Data: Tue Mar 06 19:33:56 BRT 2018

	Topologia: [3,20,1]
	Funcao de ativacao nas camadas escondidas:*outVal = tanh(x); 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.015
	Eta Attual: 2.34375E-4
	Momentum:0.7
	Epoca maxima de treinamento: 1000000
	Epoca atual: 3150
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
   8   12   14
   Colunas de SAIDA referente aos dados de treino :
   16
*/
#include <math.h>
#define NORM_MIN -1.0
#define NORM_MAX 1.0

// -------- Layer 0 --------
double w0[4][20]={{-0.19064456879321287,-1.4703027386675807,-0.43180873278352383,0.6247683734885481,-0.5828271436807438,0.38502735529773097,-0.3975636493977037,0.715359202377548,-0.4875644530276604,1.298184773912851,-0.12554027632208897,-0.05191317463218329,2.3378783306046285,0.2690792504339848,1.0663897350408382,1.3533921082315046,0.8001317323526452,-1.2095904034704519,-1.1898028052779703,0.021796220304084922},// Neuronio 0
{-0.10625530033476285,0.9367164058903046,-0.15364381133475138,0.7243342414269629,-0.6895088699701811,2.160952952673179,0.032495198261439054,0.03194346696506245,-0.014041888932306637,-0.16699551848633892,0.17284585203017921,-0.17985992407364512,1.9167308233076545,-1.925827387412048,-0.45852850792275174,0.4147570565999512,-0.34445888883939646,-0.2270062682586823,-0.8626993930073478,2.128982543658289},// Neuronio 1
{-0.5844976764337914,-1.3535243460970892,0.16714816628765103,1.5229967323904623,0.6000041130830132,0.855943515231162,-0.21843348533638637,0.08519719828738655,0.07168286701190052,1.431704620408047,-1.4824321875678264,0.25029323092559674,0.21185636648019823,-0.6955302910439324,0.10761435008348928,-1.4172437866437986,1.4298832887767492,-0.7219668888309461,0.8770730887064285,-0.22412073732377522},// Neuronio 2
{-0.7206927938922629,-0.29529162934866615,1.116779178130181,-0.8399754941186844,-1.06806147643502,-0.45981139155801515,-0.17769857506192868,1.0934206217197628,-2.0166622717319957,0.5966997573914258,0.025456299908001506,-0.9501159752522759,0.8443536043279039,1.0044530845233153,-2.041899364229642,0.5822900678091089,0.982816782100575,1.2599308821806492,-1.2867211853567264,-1.220049587767751}// Bias
};
// -------- Layer 1 --------
double w1[21][1]={{0.24557647615961395},// Neuronio 0
{-0.7458447674296351},// Neuronio 1
{1.268080665717785},// Neuronio 2
{0.22070418579490345},// Neuronio 3
{-0.780869411224213},// Neuronio 4
{-0.8160547657358062},// Neuronio 5
{-0.013964557027072702},// Neuronio 6
{0.49770919318825213},// Neuronio 7
{2.939945182396805},// Neuronio 8
{-0.3738338957467439},// Neuronio 9
{0.5223623474480176},// Neuronio 10
{-0.21486997105636146},// Neuronio 11
{0.292665086658715},// Neuronio 12
{-1.4726625136289169},// Neuronio 13
{-1.949110438456852},// Neuronio 14
{0.6023278858832879},// Neuronio 15
{-0.015730183279967787},// Neuronio 16
{-1.3692140945809652},// Neuronio 17
{1.5311572910041469},// Neuronio 18
{-1.0373287229913697},// Neuronio 19
{1.1532078641174046}// Bias
};double inMax[] = { 7.4651061670507, 0.0, 0.0};
double inMin[] = { -7.7645915022835, -388.43871669605, -9.4712738253491};
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

void reden_(double *inExt0,double *inExt1,double *inExt2,double *out0){
      double   in1[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
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
actvFunc(( in0N * w0[0][5] +  in1N * w0[1][5] +  in2N * w0[2][5] + -1.0*w0[3][5]), &in1[5]);
actvFunc(( in0N * w0[0][6] +  in1N * w0[1][6] +  in2N * w0[2][6] + -1.0*w0[3][6]), &in1[6]);
actvFunc(( in0N * w0[0][7] +  in1N * w0[1][7] +  in2N * w0[2][7] + -1.0*w0[3][7]), &in1[7]);
actvFunc(( in0N * w0[0][8] +  in1N * w0[1][8] +  in2N * w0[2][8] + -1.0*w0[3][8]), &in1[8]);
actvFunc(( in0N * w0[0][9] +  in1N * w0[1][9] +  in2N * w0[2][9] + -1.0*w0[3][9]), &in1[9]);
actvFunc(( in0N * w0[0][10] +  in1N * w0[1][10] +  in2N * w0[2][10] + -1.0*w0[3][10]), &in1[10]);
actvFunc(( in0N * w0[0][11] +  in1N * w0[1][11] +  in2N * w0[2][11] + -1.0*w0[3][11]), &in1[11]);
actvFunc(( in0N * w0[0][12] +  in1N * w0[1][12] +  in2N * w0[2][12] + -1.0*w0[3][12]), &in1[12]);
actvFunc(( in0N * w0[0][13] +  in1N * w0[1][13] +  in2N * w0[2][13] + -1.0*w0[3][13]), &in1[13]);
actvFunc(( in0N * w0[0][14] +  in1N * w0[1][14] +  in2N * w0[2][14] + -1.0*w0[3][14]), &in1[14]);
actvFunc(( in0N * w0[0][15] +  in1N * w0[1][15] +  in2N * w0[2][15] + -1.0*w0[3][15]), &in1[15]);
actvFunc(( in0N * w0[0][16] +  in1N * w0[1][16] +  in2N * w0[2][16] + -1.0*w0[3][16]), &in1[16]);
actvFunc(( in0N * w0[0][17] +  in1N * w0[1][17] +  in2N * w0[2][17] + -1.0*w0[3][17]), &in1[17]);
actvFunc(( in0N * w0[0][18] +  in1N * w0[1][18] +  in2N * w0[2][18] + -1.0*w0[3][18]), &in1[18]);
actvFunc(( in0N * w0[0][19] +  in1N * w0[1][19] +  in2N * w0[2][19] + -1.0*w0[3][19]), &in1[19]);
actvFuncSaida( ( in1[0] *w1[0][0] +  in1[1] *w1[1][0] +  in1[2] *w1[2][0] +  in1[3] *w1[3][0] +  in1[4] *w1[4][0] +  in1[5] *w1[5][0] +  in1[6] *w1[6][0] +  in1[7] *w1[7][0] +  in1[8] *w1[8][0] +  in1[9] *w1[9][0] +  in1[10] *w1[10][0] +  in1[11] *w1[11][0] +  in1[12] *w1[12][0] +  in1[13] *w1[13][0] +  in1[14] *w1[14][0] +  in1[15] *w1[15][0] +  in1[16] *w1[16][0] +  in1[17] *w1[17][0] +  in1[18] *w1[18][0] +  in1[19] *w1[19][0] + -1.0*w1[20][0]),  &out0D);
desnormaliza(  out0D , 0, &out0D);
 *out0 =  out0D;
}