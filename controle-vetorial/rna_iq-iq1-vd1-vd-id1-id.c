/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cláudio Carneiro
	Info : claud
	Data: Tue Mar 06 20:04:58 BRT 2018

	Topologia: [6,7,7,1]
	Funcao de ativacao nas camadas escondidas:*outVal = tanh(x); 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.015
	Eta Attual: 4.6875E-4
	Momentum:0.7
	Epoca maxima de treinamento: 1000000
	Epoca atual: 1436
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
double w0[7][7]={{1.346403529212739,0.7705179966436531,2.955670527618076,-1.7132598274484536,1.1727652384754175,0.4475688992761613,0.7084396991869213},// Neuronio 0
{-0.8675753545943292,0.001855380289289098,0.23925337037084243,0.5107931679358618,-1.0329339216889162,-0.3843625624964258,0.19842772582182874},// Neuronio 1
{-0.027264818953250794,-1.0468362791965746,0.0757915219492368,-1.3485510874836513,-1.9902069321884819,1.055168363045312,-0.8339829527188397},// Neuronio 2
{1.156753125168682,1.6472931571909546,-0.007886431990566281,0.5072609449146336,1.3508648331717794,-0.22787750503457774,1.1305364639145272},// Neuronio 3
{0.6045545751337014,0.07865866115246997,-1.9368871385311408,1.4337518569177103,1.3727405416950247,-0.13335734259047682,-1.347116833556468},// Neuronio 4
{-1.652011689520248,-0.40233700340443,0.6518981386351087,-0.7486501489204076,-1.6827756192549648,0.894964059907299,-0.23465670543117462},// Neuronio 5
{0.3363766556868614,-1.4305345430991037,-0.2919481482287083,1.9594876097356384,0.23356103097081585,-1.320980327572606,0.15369036323032703}// Bias
};
// -------- Layer 1 --------
double w1[8][7]={{-0.8760507145114123,0.9676002680602197,0.8448757150815206,0.8588281453271872,-0.35596298197447307,-0.9791320477254291,-1.714133903745777},// Neuronio 0
{-0.6711378307949163,-1.0552475396323275,-0.41630107682054324,-0.21985131310996758,-0.8380686339631166,-1.062138594326441,0.19453478338562055},// Neuronio 1
{-1.07068642707729,-0.9199717482951529,-1.4923086865751316,-0.035210007980621856,-1.1861281581082035,0.36779119645284203,0.42535111299918277},// Neuronio 2
{-0.5401450545550024,0.9915142467838651,-0.4834092690967736,-0.8676007031567085,-0.9799353918435437,2.1553247166714296,-1.7752197199336601},// Neuronio 3
{0.14756488373720042,1.773233672321807,-2.3602906536288204,0.14516511139378285,0.6820772863817696,0.6155636733486495,0.23521671620494042},// Neuronio 4
{0.5737543655363838,0.8621457569203167,-1.4089424685885212,0.5701316990524485,0.23410234339950775,-0.14055476886332988,1.0536298258271088},// Neuronio 5
{1.0202288096821812,2.130552917995804,0.38512579446578177,0.5961068552524073,0.07599562327299414,1.3962708815751284,1.9171929903956644},// Neuronio 6
{-0.25036266546554287,0.8453963843297925,-0.5389660426746521,-1.7601721810140107,1.472105410675796,-0.2355438934634953,-0.2501949633903987}// Bias
};
// -------- Layer 2 --------
double w2[8][1]={{0.6918554679741693},// Neuronio 0
{-0.7170617331288736},// Neuronio 1
{-0.41462527199915056},// Neuronio 2
{-0.10023658082051204},// Neuronio 3
{-1.4001042056620032},// Neuronio 4
{1.3023521891344663},// Neuronio 5
{0.18506176073911831},// Neuronio 6
{1.0488648317326148}// Bias
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
      double   in1[]={0,0,0,0,0,0,0};
      double   in2[]={0,0,0,0,0,0,0};
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
actvFunc(( in0N * w0[0][4] +  in1N * w0[1][4] +  in2N * w0[2][4] +  in3N * w0[3][4] +  in4N * w0[4][4] +  in5N * w0[5][4] + -1.0*w0[6][4]), &in1[4]);
actvFunc(( in0N * w0[0][5] +  in1N * w0[1][5] +  in2N * w0[2][5] +  in3N * w0[3][5] +  in4N * w0[4][5] +  in5N * w0[5][5] + -1.0*w0[6][5]), &in1[5]);
actvFunc(( in0N * w0[0][6] +  in1N * w0[1][6] +  in2N * w0[2][6] +  in3N * w0[3][6] +  in4N * w0[4][6] +  in5N * w0[5][6] + -1.0*w0[6][6]), &in1[6]);
actvFunc(( in1[0] *w1[0][0] +  in1[1] *w1[1][0] +  in1[2] *w1[2][0] +  in1[3] *w1[3][0] +  in1[4] *w1[4][0] +  in1[5] *w1[5][0] +  in1[6] *w1[6][0] + -1.0*w1[7][0]), &in2[0]);
actvFunc(( in1[0] *w1[0][1] +  in1[1] *w1[1][1] +  in1[2] *w1[2][1] +  in1[3] *w1[3][1] +  in1[4] *w1[4][1] +  in1[5] *w1[5][1] +  in1[6] *w1[6][1] + -1.0*w1[7][1]), &in2[1]);
actvFunc(( in1[0] *w1[0][2] +  in1[1] *w1[1][2] +  in1[2] *w1[2][2] +  in1[3] *w1[3][2] +  in1[4] *w1[4][2] +  in1[5] *w1[5][2] +  in1[6] *w1[6][2] + -1.0*w1[7][2]), &in2[2]);
actvFunc(( in1[0] *w1[0][3] +  in1[1] *w1[1][3] +  in1[2] *w1[2][3] +  in1[3] *w1[3][3] +  in1[4] *w1[4][3] +  in1[5] *w1[5][3] +  in1[6] *w1[6][3] + -1.0*w1[7][3]), &in2[3]);
actvFunc(( in1[0] *w1[0][4] +  in1[1] *w1[1][4] +  in1[2] *w1[2][4] +  in1[3] *w1[3][4] +  in1[4] *w1[4][4] +  in1[5] *w1[5][4] +  in1[6] *w1[6][4] + -1.0*w1[7][4]), &in2[4]);
actvFunc(( in1[0] *w1[0][5] +  in1[1] *w1[1][5] +  in1[2] *w1[2][5] +  in1[3] *w1[3][5] +  in1[4] *w1[4][5] +  in1[5] *w1[5][5] +  in1[6] *w1[6][5] + -1.0*w1[7][5]), &in2[5]);
actvFunc(( in1[0] *w1[0][6] +  in1[1] *w1[1][6] +  in1[2] *w1[2][6] +  in1[3] *w1[3][6] +  in1[4] *w1[4][6] +  in1[5] *w1[5][6] +  in1[6] *w1[6][6] + -1.0*w1[7][6]), &in2[6]);
actvFuncSaida( ( in2[0] *w2[0][0] +  in2[1] *w2[1][0] +  in2[2] *w2[2][0] +  in2[3] *w2[3][0] +  in2[4] *w2[4][0] +  in2[5] *w2[5][0] +  in2[6] *w2[6][0] + -1.0*w2[7][0]),  &out0D);
desnormaliza(  out0D , 0, &out0D);
 *out0 =  out0D;
}