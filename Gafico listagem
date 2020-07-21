#include <stdio.h>
#include <stdlib.h>
#include <string>
#include<iostream>
#include <locale.h>

using namespace std;

struct ListaDeVizinhos
{
	int vertice;
	ListaDeVizinhos* prox;
};

struct Grafo
{
	int TotalVertices;
	struct ListaDeVizinhos** ListaAdj; //Será um vetor do tamanho do numero de vérticee
};

struct Grafo* CriarGrafo(int vertices);
void AdicionarAresta(struct Grafo* Grafo, int origem, int ax);
void MostrarGrafo(struct Grafo* Grafo,int v);
string caso(int v);

int main()
{
	setlocale(LC_ALL, "");
	int m = 0; 
	int c = 0; 
	int b = 0;

	Grafo* Grafooftrhones = CriarGrafo(35);

	AdicionarAresta(Grafooftrhones, 1, 2);
	AdicionarAresta(Grafooftrhones, 1, 3);
	AdicionarAresta(Grafooftrhones, 3, 4);
	AdicionarAresta(Grafooftrhones, 3, 5);
	AdicionarAresta(Grafooftrhones, 3, 6);
	AdicionarAresta(Grafooftrhones, 3, 7);
	AdicionarAresta(Grafooftrhones, 5, 7);
	AdicionarAresta(Grafooftrhones, 5, 6);
	AdicionarAresta(Grafooftrhones, 7, 8);
	AdicionarAresta(Grafooftrhones, 7, 10);
	AdicionarAresta(Grafooftrhones, 7, 11);
	AdicionarAresta(Grafooftrhones, 8, 9);
	AdicionarAresta(Grafooftrhones, 8, 10);
	AdicionarAresta(Grafooftrhones, 10, 11);
	AdicionarAresta(Grafooftrhones, 10, 15);
	AdicionarAresta(Grafooftrhones, 11, 12);
	AdicionarAresta(Grafooftrhones, 11, 13);
	AdicionarAresta(Grafooftrhones, 12, 13);
	AdicionarAresta(Grafooftrhones, 13, 14);
	AdicionarAresta(Grafooftrhones, 13, 19);
	AdicionarAresta(Grafooftrhones, 15, 10);
	AdicionarAresta(Grafooftrhones, 15, 16);
	AdicionarAresta(Grafooftrhones, 15, 17);
	AdicionarAresta(Grafooftrhones, 15, 18);
	AdicionarAresta(Grafooftrhones, 16, 17);
	AdicionarAresta(Grafooftrhones, 16, 21);
	AdicionarAresta(Grafooftrhones, 17, 18);
	AdicionarAresta(Grafooftrhones, 17, 20);
	AdicionarAresta(Grafooftrhones, 17, 21);
	AdicionarAresta(Grafooftrhones, 18, 19);
	AdicionarAresta(Grafooftrhones, 18, 20);
	AdicionarAresta(Grafooftrhones, 19, 20);
	AdicionarAresta(Grafooftrhones, 19, 22);
	AdicionarAresta(Grafooftrhones, 20, 21);
	AdicionarAresta(Grafooftrhones, 20, 22);
	AdicionarAresta(Grafooftrhones, 20, 23);
	AdicionarAresta(Grafooftrhones, 21, 24);
	AdicionarAresta(Grafooftrhones, 21, 23);
	AdicionarAresta(Grafooftrhones, 22, 23);
	AdicionarAresta(Grafooftrhones, 22, 25);
	AdicionarAresta(Grafooftrhones, 23, 24);
	AdicionarAresta(Grafooftrhones, 23, 25);
	AdicionarAresta(Grafooftrhones, 23, 26);
	AdicionarAresta(Grafooftrhones, 23, 28);
	AdicionarAresta(Grafooftrhones, 24, 27);
	AdicionarAresta(Grafooftrhones, 24, 26);
	AdicionarAresta(Grafooftrhones, 25, 28);
	AdicionarAresta(Grafooftrhones, 25, 29);
	AdicionarAresta(Grafooftrhones, 26, 27);
	AdicionarAresta(Grafooftrhones, 26, 28);
	AdicionarAresta(Grafooftrhones, 26, 30);
	AdicionarAresta(Grafooftrhones, 27, 31);
	AdicionarAresta(Grafooftrhones, 27, 30);
	AdicionarAresta(Grafooftrhones, 28, 29);
	AdicionarAresta(Grafooftrhones, 28, 30);
	AdicionarAresta(Grafooftrhones, 28, 32);
	AdicionarAresta(Grafooftrhones, 30, 31);
	AdicionarAresta(Grafooftrhones, 30, 32);
	AdicionarAresta(Grafooftrhones, 32, 30);
	AdicionarAresta(Grafooftrhones, 32, 33);
	AdicionarAresta(Grafooftrhones, 32, 34);
	AdicionarAresta(Grafooftrhones, 32, 35);
	AdicionarAresta(Grafooftrhones, 33, 30);
	AdicionarAresta(Grafooftrhones, 33, 34);
	AdicionarAresta(Grafooftrhones, 34, 35);
	
	string ax;
	for (int i = 1; i < 35; i++) {
		ax = caso(i);
		{
	
			printf("%d - ", i);
			puts(ax.c_str());

		}
	}
	printf("\nDigite o numero do reino desejado para saber quais são os reinos vizinhos: ");
	scanf_s("%d", &m);
	if ((m <= 0)||(m>38))
	{
		printf("\nNumero invalido, reino não selecionado! ");
	}
	else
	{
		MostrarGrafo(Grafooftrhones, m);
	}
	system("pause");
	return 0;
}

struct Grafo* CriarGrafo(int TotalVertices)
{
	Grafo* Grafo = (struct Grafo *)malloc(sizeof(struct Grafo));
	Grafo->TotalVertices = TotalVertices;
	Grafo->ListaAdj = (struct ListaDeVizinhos **)malloc(TotalVertices * sizeof(struct ListaDeVizinhos*));

	for (int i = 0; i < TotalVertices; i++)
		Grafo->ListaAdj[i] = NULL;

	return Grafo;
}

void AdicionarAresta(struct Grafo* Grafo, int origem, int ax)
{ //INSERÇÃO NO INICIO DA LISTA 
  // Adiciona uma aresta da origem para o  destino
	struct ListaDeVizinhos* NovoElemento = (struct ListaDeVizinhos *)malloc(sizeof(struct ListaDeVizinhos));
	NovoElemento->vertice = ax;
	NovoElemento->prox = NULL;

	NovoElemento->prox = Grafo->ListaAdj[origem];
	Grafo->ListaAdj[origem] = NovoElemento;

	// Adiciona uma aresta do destino para a origem
	NovoElemento = (struct ListaDeVizinhos *)malloc(sizeof(struct ListaDeVizinhos));
	NovoElemento->vertice = origem;
	NovoElemento->prox = NULL;

	NovoElemento->prox = Grafo->ListaAdj[ax];
	Grafo->ListaAdj[ax] = NovoElemento;
}

void MostrarGrafo(struct Grafo* Grafo,int n)
{
	int v;

		struct ListaDeVizinhos* ElementoVarredura = Grafo->ListaAdj[n];
		string ax = caso(n);
		printf("\n Lista de adjacencias do vertice %d:\n ", n);
		printf("%s : ", ax.c_str());// mostra o reino escolhido
		printf("\n");
		while (ElementoVarredura != NULL)
		{
			ax = caso(ElementoVarredura->vertice);
			printf("%s => ", ax.c_str());//mostra os proximos reinos
			ElementoVarredura = ElementoVarredura->prox;
		}
		printf("\n");
	system("pause");
	main();
}
string caso(int v)
{
switch (v) { 
case 1:
	return "Castle black";
	break;
case 2: return "Bay of Ice";
	break;
case 3:  return "Karhold";
	break;
case 4:  return "Winterfell";
	break;
case 5: return "The Stony Shore";
	break;
case 6:  return "White HArbor";
	break;
case 7:  return "Widows Watch";
	break;
case 8: return "Funts Finger";
	break;
case 9: return "Graywater Watch";
	break;
case 10:  return "Moat Calin";
	break;
case 11: return "Ironmam Bay";
	break;
case 12:return  "Seagard";
	break;
case 13: return "The Finger";
	break;
case 14: return "Pyke";
	break;
case 15: return "The Twins";
	break;
case 16: return "The Mountains of the Moon";
	break;
case 17: return "Riverrun";
	break;
case 18: return "The Eyrie";
	break;
case 19: return "Lannsport";
	break;
case 20: return "Harrenhal";
	break;
case 21: return "Stoney Sept";
	break;
case 22:return  "Crackclaw Pont";
	break;
case 23: return "Dragonstone";
	break;
case 24: return "The Golden Sound";
	break;
case 25:  return "Searoad Marches";
	break;
case 26:return "Kings Landing";
	break;
case 27: return "Blackwater Bay";
	break;
case 28: return "Kingswood";
	break;
case 29: return "Shiperaker Bay";
	break;
case 30:return "Hichgarden";
	break;
case 31: return "ReturnThe Reach";
	break;
case 32: return "Dornish MArches";
	break;
case 33: return "The Boneway";
	break;
case 34: return "Storms End";
	break;
case 35: return "Oudtown";
	break;
case 36: return "Princes Pass";
	break;
case 37: return "Three Towers";
	break;

	}
}
