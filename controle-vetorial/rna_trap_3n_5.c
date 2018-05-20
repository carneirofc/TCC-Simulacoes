/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cláudio Carneiro
	Info : claud
	Data: Wed Mar 07 00:08:05 BRT 2018

	Topologia: [12,6,3,1]
	Funcao de ativacao nas camadas escondidas:*outVal = tanh(x)+1.0E-5 * x; 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.025
	Eta Attual: 0.004737242105007656
	Momentum:0.7
	Epoca maxima de treinamento: 50000
	Epoca atual: 21112
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
   1   2   3   4   5   6   7   8   9   10   12   13
   Colunas de SAIDA referente aos dados de treino :
   15
*/
#include <math.h>
#define NORM_MIN -1.0
#define NORM_MAX 1.0

// -------- Layer 0 --------
double w0[13][6]={{-2.1184133222175783,1.1610671848430367,0.3460217155412514,-1.0400733826119792,0.6641687731373014,0.9048839753455333},// Neuronio 0
{-0.823943992443482,0.7873502332992839,1.6030853311984081,0.24897935823274164,0.25286741766251,-0.43383620931284156},// Neuronio 1
{-1.1242273829254388,-0.21875660411006503,0.12466015158422142,0.006260348910874493,-4.127023319668121E-4,0.09942113519311684},// Neuronio 2
{-0.5425421428713787,0.7680028442725709,-0.41675021376846627,-0.3563974803865304,-0.8227704802126856,1.5994057460497302},// Neuronio 3
{1.792048276538806,0.04838648970607321,1.6518141281353012,-0.6312882836187621,0.6613173565966552,-0.38116629140902025},// Neuronio 4
{0.670864920935286,0.28025565694342147,-0.8953823608753197,0.6202857463086684,0.9737267282927432,-0.7279935027188035},// Neuronio 5
{0.5332754514143709,-1.2202291302973671,1.0865879588495653,-0.13963482205556071,-0.6191642767672667,-0.48845951889382255},// Neuronio 6
{1.2131294810468711,-0.12768797604318427,0.9567911611487427,-0.8868044448557912,1.4175564119605908,-0.42067103403555667},// Neuronio 7
{-0.6657806543392946,0.9315174948479247,0.3461268393834474,0.1344439763748336,-0.3253132170539482,0.5869472539864159},// Neuronio 8
{0.990252957763874,-0.9433559279911595,0.1868835626814382,0.13186389732267614,-0.8266475342460644,-0.1691269806211852},// Neuronio 9
{-0.6644195317728674,-0.17669347308863792,1.4366505483830054,-0.16194893343984004,0.8634137176380241,-0.11445572640739528},// Neuronio 10
{-0.10809862750414496,-1.1238856939268118,-0.773333702082485,-0.2789788693494649,1.3517639745460586,-1.0504969786748457},// Neuronio 11
{-2.41525200503935,1.8299582766677662,-0.9940541009544346,-0.7564450190056797,-0.04407382114288011,-0.41930308301565494}// Bias
};
// -------- Layer 1 --------
double w1[7][3]={{-0.9669232921431059,-0.6460960668534889,0.25480422093864685},// Neuronio 0
{-0.9134598192617382,-0.32078019503286526,-0.6523760499194242},// Neuronio 1
{-1.3281554989485886,0.09896636712427503,-0.7883135916933299},// Neuronio 2
{1.107224519199769,-0.581963401032366,1.656494552835227},// Neuronio 3
{2.5580477497785115,-1.0371935002777855,1.9078902104699187},// Neuronio 4
{1.2757687987886233,0.41552427477480286,0.9153993967825969},// Neuronio 5
{0.4387812163444872,-0.8223341581225162,-0.04543487830218526}// Bias
};
// -------- Layer 2 --------
double w2[4][1]={{0.5739376238296734},// Neuronio 0
{-1.0135297668601617},// Neuronio 1
{-0.8195809730375402},// Neuronio 2
{-0.7593371596604269}// Bias
};double inMax[] = { 0.0, 0.0, 0.0, 0.0, 7.5644210572576, 7.5609666194594, 7.6055579941048, 7.4651061670507, 2.0485284775072, 2.0437794361847, 2.2511683335754, 2.3010513520191};
double inMin[] = { -386.77993060303, -386.89241570732, -384.45776119858, -386.41493727282, -7.7741631249896, -7.7402292234361, -7.7529798064517, -7.7645915022835, -9.4823735173254, -9.4699863871408, -9.4748957190674, -9.4712738253491};
double outMaxD[] = { 182.98500867239};
double outMinD[] = { -183.15255090008};
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
void actvFunc(double x, double *outVal){*outVal = tanh(x)+1.0E-5 * x;}

void actvFuncSaida(double x, double *outVal){*outVal =  x;}

void reden_(double *inExt0,double *inExt1,double *inExt2,double *inExt3,double *inExt4,double *inExt5,double *inExt6,double *inExt7,double *inExt8,double *inExt9,double *inExt10,double *inExt11,double *out0){
      double   in1[]={0,0,0,0,0,0};
      double   in2[]={0,0,0};
double  out0D = 0;
double  in0N = 0, in1N = 0, in2N = 0, in3N = 0, in4N = 0, in5N = 0, in6N = 0, in7N = 0, in8N = 0, in9N = 0, in10N = 0, in11N = 0;
normaliza(inExt0,0,&in0N);
normaliza(inExt1,1,&in1N);
normaliza(inExt2,2,&in2N);
normaliza(inExt3,3,&in3N);
normaliza(inExt4,4,&in4N);
normaliza(inExt5,5,&in5N);
normaliza(inExt6,6,&in6N);
normaliza(inExt7,7,&in7N);
normaliza(inExt8,8,&in8N);
normaliza(inExt9,9,&in9N);
normaliza(inExt10,10,&in10N);
normaliza(inExt11,11,&in11N);
actvFunc(( in0N * w0[0][0] +  in1N * w0[1][0] +  in2N * w0[2][0] +  in3N * w0[3][0] +  in4N * w0[4][0] +  in5N * w0[5][0] +  in6N * w0[6][0] +  in7N * w0[7][0] +  in8N * w0[8][0] +  in9N * w0[9][0] +  in10N * w0[10][0] +  in11N * w0[11][0] + -1.0*w0[12][0]), &in1[0]);
actvFunc(( in0N * w0[0][1] +  in1N * w0[1][1] +  in2N * w0[2][1] +  in3N * w0[3][1] +  in4N * w0[4][1] +  in5N * w0[5][1] +  in6N * w0[6][1] +  in7N * w0[7][1] +  in8N * w0[8][1] +  in9N * w0[9][1] +  in10N * w0[10][1] +  in11N * w0[11][1] + -1.0*w0[12][1]), &in1[1]);
actvFunc(( in0N * w0[0][2] +  in1N * w0[1][2] +  in2N * w0[2][2] +  in3N * w0[3][2] +  in4N * w0[4][2] +  in5N * w0[5][2] +  in6N * w0[6][2] +  in7N * w0[7][2] +  in8N * w0[8][2] +  in9N * w0[9][2] +  in10N * w0[10][2] +  in11N * w0[11][2] + -1.0*w0[12][2]), &in1[2]);
actvFunc(( in0N * w0[0][3] +  in1N * w0[1][3] +  in2N * w0[2][3] +  in3N * w0[3][3] +  in4N * w0[4][3] +  in5N * w0[5][3] +  in6N * w0[6][3] +  in7N * w0[7][3] +  in8N * w0[8][3] +  in9N * w0[9][3] +  in10N * w0[10][3] +  in11N * w0[11][3] + -1.0*w0[12][3]), &in1[3]);
actvFunc(( in0N * w0[0][4] +  in1N * w0[1][4] +  in2N * w0[2][4] +  in3N * w0[3][4] +  in4N * w0[4][4] +  in5N * w0[5][4] +  in6N * w0[6][4] +  in7N * w0[7][4] +  in8N * w0[8][4] +  in9N * w0[9][4] +  in10N * w0[10][4] +  in11N * w0[11][4] + -1.0*w0[12][4]), &in1[4]);
actvFunc(( in0N * w0[0][5] +  in1N * w0[1][5] +  in2N * w0[2][5] +  in3N * w0[3][5] +  in4N * w0[4][5] +  in5N * w0[5][5] +  in6N * w0[6][5] +  in7N * w0[7][5] +  in8N * w0[8][5] +  in9N * w0[9][5] +  in10N * w0[10][5] +  in11N * w0[11][5] + -1.0*w0[12][5]), &in1[5]);
actvFunc(( in1[0] *w1[0][0] +  in1[1] *w1[1][0] +  in1[2] *w1[2][0] +  in1[3] *w1[3][0] +  in1[4] *w1[4][0] +  in1[5] *w1[5][0] + -1.0*w1[6][0]), &in2[0]);
actvFunc(( in1[0] *w1[0][1] +  in1[1] *w1[1][1] +  in1[2] *w1[2][1] +  in1[3] *w1[3][1] +  in1[4] *w1[4][1] +  in1[5] *w1[5][1] + -1.0*w1[6][1]), &in2[1]);
actvFunc(( in1[0] *w1[0][2] +  in1[1] *w1[1][2] +  in1[2] *w1[2][2] +  in1[3] *w1[3][2] +  in1[4] *w1[4][2] +  in1[5] *w1[5][2] + -1.0*w1[6][2]), &in2[2]);
actvFuncSaida( ( in2[0] *w2[0][0] +  in2[1] *w2[1][0] +  in2[2] *w2[2][0] + -1.0*w2[3][0]),  &out0D);
desnormaliza(  out0D , 0, &out0D);
 *out0 =  out0D;
}