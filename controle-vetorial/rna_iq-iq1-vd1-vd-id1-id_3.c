/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cláudio Carneiro
	Info : claud
	Data: Tue Mar 06 20:20:30 BRT 2018

	Topologia: [6,7,7,1]
	Funcao de ativacao nas camadas escondidas:*outVal = tanh(x); 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.015
	Eta Attual: 0.008066861653371655
	Momentum:0.7
	Epoca maxima de treinamento: 1000000
	Epoca atual: 13187
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
double w0[7][7]={{-0.9938726567209397,-0.4120210392343676,-0.35771113177304836,1.8105637480010017,1.1583583103633581,-0.10893071147740488,0.5090256074051078},// Neuronio 0
{-0.2514116771929126,1.3733632276818084,0.47059340061292726,3.8026539238609276,-1.5215303154877144,-1.000688319106755,-0.7593956592293223},// Neuronio 1
{-0.03667838459548426,-1.3243700193990475,-0.19942120954995315,1.3842280237406819,0.3763039523887299,0.37842893489501506,-1.543076589039994},// Neuronio 2
{0.19088796269667496,-0.6134869330496195,1.3574708143404917,1.0210618752833527,0.44984438384281833,-1.0545601000875495,-1.3115673026364074},// Neuronio 3
{1.0581577129921005,-1.3000509038702057,1.1294843700088992,0.29689176587790495,0.41263299738778964,1.5138063905081913,0.5131861520748263},// Neuronio 4
{0.5667557335447169,-1.0418784664149403,-0.24370168840104886,-0.45142362825410354,-0.3062346669855267,0.02588616922905146,1.4331208619872489},// Neuronio 5
{-0.9423365175361849,2.8575771973814637,-0.46365992433028125,-0.3814341440138989,1.4533086069932246,-1.5565056915835929,0.7798658813455294}// Bias
};
// -------- Layer 1 --------
double w1[8][7]={{-1.4407799294916166,-0.0925541732728039,-1.3197627124338187,-1.6994553184098835,-2.5849427769551503,-0.3241414381021864,-0.017347118627889277},// Neuronio 0
{-0.956810096860286,0.30724676883032054,-0.5400629127512917,1.492662602624093,1.6721721756656893,2.356456691072005,1.0749894021459552},// Neuronio 1
{0.9510481532189633,-0.8477833261560828,1.2870005829282984,0.18789782354915727,0.7614039391079906,1.6203861247941194,0.47975987533075254},// Neuronio 2
{1.040381691819963,1.426803989586988,0.0521881217560905,0.5958320858121897,-0.43626871928685107,1.1176579447059891,-0.809392419986351},// Neuronio 3
{0.12040457257327249,-1.2223716789314887,-0.9369097483111858,-0.9381037213134947,-0.5768803426502447,1.4394640099604055,1.2143648374727063},// Neuronio 4
{0.02724681491547248,0.33826400491628517,0.8803190710735453,1.5466850567108952,0.8882287424963993,-2.5622462491838482,2.449819681149642},// Neuronio 5
{-0.2474856725797315,0.3022246577771671,-0.3228447779477201,0.5050515488909489,0.33520690989200763,-1.4568554892824164,-0.1328158621751433},// Neuronio 6
{-1.5447387474271443,-0.9943335477470742,1.0497771156780127,-0.5208823732398715,-1.9065429121401276,-0.942794513727029,-0.9921170594027982}// Bias
};
// -------- Layer 2 --------
double w2[8][1]={{1.289491595446106},// Neuronio 0
{-0.2267929768414356},// Neuronio 1
{-0.7112082975266314},// Neuronio 2
{0.4894163704000105},// Neuronio 3
{-0.27311968698400985},// Neuronio 4
{-0.226178602381467},// Neuronio 5
{-0.38120799492700097},// Neuronio 6
{0.3420535404929653}// Bias
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