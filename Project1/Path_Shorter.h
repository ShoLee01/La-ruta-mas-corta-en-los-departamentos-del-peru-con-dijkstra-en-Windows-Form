#pragma once
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <string>
#include <string.h>
#include <queue>
#include <fstream>

using namespace std;


#define INF 2147483646 //Se define un valor muy grande que viene a representar el infinito, en este caso es el valor más grande soportado por una variable tipo int
#define MAX 2147483646 //maximo numero de vértices, en este caso es el valor más grande soportado por una variable tipo int

class Node {
public:
	int second_node;
	int weight;

	//Node();
	Node(int _weight, int _second_node)
	{
		second_node = _second_node;
		weight = _weight;
	}
	~Node() {};
};

//#define Node pair< int , int >

vector<string> split(string s, string delimiter) {
	size_t pos_start = 0, pos_end, delim_len = delimiter.length();
	string token;
	vector<string> res;

	while ((pos_end = s.find(delimiter, pos_start)) != string::npos) {
		token = s.substr(pos_start, pos_end - pos_start);
		pos_start = pos_end + delim_len;
		res.push_back(token);
	}

	res.push_back(s.substr(pos_start));
	return res;
}



struct cmp { bool operator() (const Node& a, const Node& b) { return a.second_node > b.second_node; } };// se define la regla de ordenamiento para priority_queue donde se ordena de menor a mayor
class Tablas {
public:
	int vertice_previo; // vertice previo al dst tal que sigue la ruta más corta
	int distancia_acumulada; // la distancia del src
	bool visitado;
};

class shorter {
	
private:
	int vertices;
	int aristas;
	string Rut;
	int main_node;// nodo base de busqueda
	Tablas *Tabla;
	int nf;
	int km;
	//vector<vector<Node>> graph[5]; //lista de adyacencia
	vector<Node> *graph; //lista de adyacencia
	string name[24] = { "tumbes","piura","lambayeque","cajamarca","libertad","amazonas","sanmartin","loreto","ancash","lima","huanuco","ucayali","pasco","junin","huancavelica","ica","ayacucho","arequipa","cusco","madrededios","apurimac","puno","moquegua","tacna" };
	priority_queue< Node, vector<Node>, cmp > order; //priority queue, es usada para ordenar de menor a mayor todos los elementos de la tabla dijkstra usando como referencia la distancia 
public:
	//contructor
	shorter();
	//destructor
	~shorter() {
		delete[] Tabla;
		Tabla = nullptr;
	}

	// funciones secundarias

	string leer_datos();
	void update(int nodo_actual, int nodo_prev, int peso);

	// función de ordenamiento

	void dijkstra(int nodo_partida, int nodo_destino);
	/////////////////////////////////////
	void set_nodof(int n) {
		nf = n;
	}
	int get_nodof() { return nf; }
	string get_rutas();

	int GetKmT();

};

// constructor 
shorter::shorter() {
	Rut = "";
	km = 0;
	vector<string> tira = split(leer_datos(), "\r\n");
	aristas = tira.size() / 2;//Numero de aristas

	// se crea el grafo "graph"
	vector<string> elemento = split(tira.back(), " ");
	vertices = atoi(elemento[0].c_str());
	graph = new vector<Node>[vertices + 1];

	for (string x : tira)
	{
		vector<string> elemento = split(x, " ");
		////cout << elemento[0] << "|" << elemento[1] << "|" << elemento[2] << "|" << endl;
		graph[atoi(elemento[0].c_str())].push_back(Node(atoi(elemento[2].c_str()), atoi(elemento[1].c_str())));
		////cout << "fin de la incripción del grafo" << endl;
	}
	////cout << "fin de la construcción del grafo" << endl;
	// se inicializa la tabla de dijkstra
	Tabla = new Tablas[vertices + 1];
	for (int i = 0; i <= vertices; ++i) {
		Tabla[i].distancia_acumulada = INF;//inicializamos todas las distancias con valor infinito
		Tabla[i].vertice_previo = -1;	   //inicializamos el previo del vertice i con -1
		Tabla[i].visitado = false;		   //inicializamos todos los vértices como no visitados
	}

}

// funciones secundarias

string shorter::leer_datos() {

	string STRING, texto = "";
	ifstream infile;
	infile.open("Rutas_del_Peru.txt");
	bool inicio = true;
	while (!infile.eof())
	{
		getline(infile, STRING);
		if (inicio)inicio = false;
		else texto += "\r\n";
		texto += STRING;
	}
	infile.close();

	return texto;

}

inline void shorter::update(int nodo_actual, int nodo_prev, int peso)
{
	//cout << "Tabla[nodo_actual].distancia_acumulada + peso =" << Tabla[nodo_actual].distancia_acumulada + peso << " | " << "Tabla[nodo_prev].distancia_acumulada=" << Tabla[nodo_prev].distancia_acumulada << endl;
	if (Tabla[nodo_actual].distancia_acumulada + peso < Tabla[nodo_prev].distancia_acumulada)
	{
		Tabla[nodo_prev].distancia_acumulada = Tabla[nodo_actual].distancia_acumulada + peso;// actualizamos en la tabla de dijkstra la nueva distancia más corta encontrada
		Tabla[nodo_prev].vertice_previo = nodo_actual;											 // actualizamos el vector previo
		order.push(Node(Tabla[nodo_prev].distancia_acumulada, nodo_prev));					 // se agrega a order para ordenar los casos con respecto a la distancia
	}
}

// Funcion principal


void shorter::dijkstra(int nodo_partida, int nodo_destino) {
	order.push(Node(0, nodo_partida)); //Insertamos el vértice inicial en la Cola de Prioridad
	Tabla[nodo_partida].distancia_acumulada = 0; //Este paso es importante, inicializamos la distancia del inicial como 0
	int actual, secundario, peso;
	while (!order.empty()) {
		actual = order.top().second_node;
		order.pop();
		if (Tabla[actual].visitado) continue;
		Tabla[actual].visitado = true;
		for (int i = 0; i < graph[actual].size(); ++i) {
			secundario = graph[actual][i].second_node;
			peso = graph[actual][i].weight;
			//printf("actual = %d| secundario = %d| peso = %d\r\n", actual, secundario, peso);
			//printf("Tabla[secundario].visitado = %d\r\n", Tabla[secundario].visitado);
			if (!Tabla[secundario].visitado) {
				update(actual, secundario, peso);
			}
		}
	}

	//printf("Distancias mas cortas iniciando en vertice %d\n", nodo_partida);
	//cout << "Todas las distancias mas optimas desde el punto inicio elegido : " << endl;
	for (int i = 1; i <= vertices; ++i) {
		//printf("Vertice %d , distancia mas corta = %d\n", i, Tabla[i].distancia_acumulada);
	}

	//puts("\n**************Impresion de camino mas corto**************");
	//printf("Ingrese vertice destino: ");
	//printf("Nodo de destino %d ", nodo_destino);
	//printf("\n");
	string rutas = "";
	string ruta;
	int peso_anterior, k = nodo_destino, k_prev;
	bool flag = true;
	while (k != nodo_partida) {
		if (!flag)
			rutas = name[k - 1] + " -> " + rutas;
		else
		{
			flag = false;
			rutas = name[k - 1];
		}
		ruta = name[k - 1];
		k_prev = Tabla[k].vertice_previo;
		for (int i = 0; i < graph[k_prev].size(); ++i) {
			if (graph[k_prev][i].second_node == k)
			{
				peso_anterior = graph[k_prev][i].weight;
				break;
			}
		}
		k = k_prev;
		ruta = name[k - 1] + " -> " + ruta;
		//cout << "El camino que toma dijkstra" << endl;
		//cout << ruta << " " << peso_anterior << endl;
		km += peso_anterior;
	}
	rutas = name[k - 1] + " -> " + rutas;
	//cout << "///////////////Ruta elegida por dijkstra///////////////" << endl << "###########" << endl << rutas << endl << "###########";
	Rut=rutas;
}

string shorter::get_rutas() {
	return Rut;
}
int shorter::GetKmT() {
	return km;
}