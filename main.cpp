#include <iostream>
#include <string>
#include <string.h>

using namespace std;

void loja();
void concessionaria();

int a;
	string b;
	int c;
	int d;
int main()
{
	
	cout <<"Jogo da Vida"<< endl;
	cout <<"versao: 0.0.2"<< endl;
	cout <<"Escreva seu nome abaixo (sem acentos)"<< endl;
	cin >> b;
	cout <<"Ola " + b + " seja bem-vindo a sua nova vida"<< endl; 
	cout <<"Aonde voce quer ir?"<< endl;
	cout <<"1- Loja"<< endl;
	cout <<"2-concessionaria"<< endl;
	cin >> a;
	if(a == 1){
		loja();
    }
    if(a == 2){
		concessionaria();
	}
}

void loja() {
	cout<<"Seja Bem-Vindo a loja"<< endl;
		cout<<"Temos 3 itens para comprar"<< endl;
		cout<<"1-Cachorro"<< endl;
		cout<<"2-Celular"<< endl;
		cout<<"3-Computador"<< endl;
		cin >> c;
		if(c == 1){
			cout <<"Voce comprou um cachorro com o nome de Toby"<< endl;
		}
		if(c == 2){
			cout <<"Voce comprou um celular seu numero e 55-99997-4777"<< endl;
		}
        if(c == 3){
			cout <<"Voce comprou um computador"<< endl;
		}
}

void concessionaria() {
	cout <<"Temos 5 carros a venda"<< endl;
		cout <<"1- 69 Monkey"<< endl;
		cout <<"2- Laborgeni Urubus"<< endl;
		cout <<"3- Paganda Huaray"<< endl;
		cout <<"4- Blue Bird"<< endl;
		cout <<"5- Astro Marcos V9 Ultra"<< endl;
		cin >> d;
			if(d == 1){
			cout<<"Voce comprou um 69 Mostango"<< endl;
		}
			if(d == 2){
			cout<<"Voce comprou uma Lamborgeni Urubus"<< endl;
		}
			if(d == 3){
			cout<<"Voce comprou uma paganda Huaray"<< endl;
		}
			if(d == 4){
			cout<<"Voce comprou um Blue Bird"<< endl;
		}
			if(d == 5){
			cout<<"Voce comprou um Astro Marcos V9 Ultra"<< endl;
		}
	}
