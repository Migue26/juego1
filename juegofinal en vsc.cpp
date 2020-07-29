#include<iostream>
#include<stdlib.h>
#include<locale.h>
#include<ctime>
#include<windows.h>
using namespace std;

 int main(){
 	
 	setlocale(LC_ALL,"spanish");
 	
	char nombre[16];
	int  opcion, damash, vida=100, ataque,covid,puntaje=0;
	//logo del juego introducci√≥n
	cout<<"\n";Beep(2,1000);
	system("color 70");
	cout<<"\t   ********* "<<endl;Beep(1100,300);
	cout<<"\t       *"<<endl;Beep(1100,300);
	cout<<"\t ***** *  *   *"<<endl;Beep(1100,300);
	cout<<"\t *     *  * * *"<<endl;Beep(1100,300);
	cout<<"\t ****  *  * * *"<<endl;Beep(1100,300);
	cout<<"\t    *  *  * * *"<<endl;Beep(1100,300);
	cout<<"\t*****      * *"<<endl<<endl<<endl<<endl;
	Beep(1500,900);
	Beep(1100,300);
	Beep(1000,300);
	Beep(100,300);
	system("color 50");

	//system("pause");
	system("cls");	
	//introducci√≥n
	cout<<"\n\t\tEstas Listoooo ... ???\n"<<endl<<endl; 
	Beep(0,1600);
	system("cls");
	cout<<"\n\t\tCrees que eres capaz ... ???\n"<<endl<<endl;
	Beep(0,1600);
	system("cls");
	cout<<"\n\t\tJA JA JA JA ... Ya lo veremos ... \n"<<endl<<endl;
	Beep(200,400);
	Beep(300,400);
	Beep(500,400);
	Beep(700,400);
	Beep(800,400);
	Beep(900,900);
	system("cls");
	cout<<"\n\t\tBienvenido a Salving The World"<<endl;
	//input pedir el nombre del usuario
	cout<<"\n\nIntroduce tu nombre de jugador (solo se admiten 15 dÌgitos)"<<endl;
	cin.getline(nombre,16,'\n');
	system("cls");		
    	//El incicio (se interactua con el usuario)
		cout<<"\nHola "<<nombre<<" soy Marcus escuche que eres bueno eliminando virus\n"<<endl;
		cout<<"\nExisten varios virus que quieren  acabar con el mundo\n"<<endl;	
		cout<<"\nY necesitamos de tu ayuda para poder eliminarlos\n"<<endl;	
		cout<<"\nA continuaciÛn te voy a mostrar los  virus que tendr·s que combatir\nCada uno de ellos tiene su grado de dificultad"<<endl;
		cout<<"Pero estoy seguro de que podras con todos"<<endl<<endl;
		system("pause");
		system("cls");	
		//La forma del juego una explicacion acerca del juego
		cout<<"\nTe explico un poco como funciona este juego."<<endl;
		cout<<"~El juego consta con dos niveles uno m·s complicado del otro\npero no te asustes que todo va depender de la suerte que tengas GAAAA"<<endl;
		system("color 57");
		cout<<"\n\n IMPORTANTE!!!\n\tMientras m·s ataques mandes mayor sera la posibilidad de que pierdas"<<endl;
		system("color 50");

		
      while(opcion!=1 && opcion!=2){//Eleccion de 2 opciones. Los 2 niveles 
	  	
        cout<<"\n(1)Covid-19             \t\t     DaÒo(0-50)"<<endl;
        cout<<"(2)Pandemia de influenza\t\t     DaÒo(0-15)"<<endl;
  		cout<<"\n\n Elije el primer virus que quieres eliminar\n\n";cin>>opcion;
  		
        switch(opcion){
        	
        	case 1://covid 19 y sus datos
        		cout<<"\nUy veo que te gusta los grandes retos, bueno a exterminar el virus!!!\n"<<endl<<endl<<endl;
           		cout<<"A continuaciÛn te voy  a dar unos datos acerca de este virus espero que pueda \nservir de algo"<<endl<<endl;
           		cout<<"(*)lugar de Origen:    \t Wuhan(China), diciembre del 2019 "<<endl<<endl;
           		cout<<"\n(*)TransmiciÛn:      \t Se transmite al establecer contacto fÌsico \n\t\t\t   con una persona infectada"<<endl<<endl;
           		cout<<"\n(*)SÌntomas:         \t SÌntomas Frecuentes:\n\t\t\t   Fiebre, Tos seca y cansancio"<<endl;
           		cout<<"                       \t SÌntomas Inusuales:\n\t\t\t   La congestiÛn nasal, el dolor de cabeza, \n\t\t\t   la conjuntivitis, el dolor de garganta,\n\t\t\t   la diarrea, la pÈrdida del gusto o el olfato"<<endl<<endl;
           		cout<<"\n(*)PrevenciÛn:       \t Lavarse las manos\n\t\t\t Distanciamiento social\n\t\t\t Utilizar mascarillas"<<endl<<endl<<endl;
           		
           		cout<<"Vida inicial es: 100"<<endl;
           		cout<<"Vida del covid es: 100"<<endl;
           		
      		
           		
				   	for(covid=100; covid>0 && vida>0; covid=covid){//mostrar el men√∫ de ataques
	
                     	cout<<"\n1. lavarse las manos             10 Damage"<<endl;
                      	cout<<"2. Distanciamiento social        20 Damage"<<endl;
                     	cout<<"3. Utilizar las mascarillas      30 Damage"<<endl;
                      	cout<<"con que quieres atacar?: "; cin>>ataque;
                      	puntaje=puntaje +1;
	
                    	switch(ataque){

		
                    		case 1://si utilizamos la opcion 1
	                    		covid= covid -10;
	                    		
	                  	srand(time(NULL));
                     	damash= 10*(rand()%6);
                    	vida = vida - damash; 

	                      		if(covid<=0){
			                     	cout<<"\nFelicidades lograste vencer a este virus\nSalvaste al mundo !!!!"<<endl;
			                     	cout<<"\ntu puntaje es: "<<puntaje;
			                     	Beep(1100,300);
			                     	Beep(1100,300);
			                     	Beep(1100,600);
					
		                    	}
	                     		else{
			                    	if(vida>0){
				                     	cout<<"\nvida del virus: "<<covid<<endl;
				                     	cout<<"ataque del virus: "<<damash<<endl;
				                    	cout<<"tu vida: "<<vida<<endl;
			                     	}
	                  		    	else{
	             			        	cout<<"Perdiste";
	             			        	cout<<"\ntu puntaje es: "<<puntaje;
	             			        	Beep(300,700);
	             			        	Beep(700,600);
	             			        	Beep(900,600);
	             			        	Beep(1000,900);
                			     	}
		                     	}
		                    	break;
		
                    		case 2://si utilizamos el ataque 2
	                     		covid= covid -20;
	                     		
                    	srand(time(NULL));
                     	damash= 10*(rand()%6);
                    	vida = vida - damash; 	                     		

	                     		if(covid<=0){
			                    	cout<<"\nFelicidades lograste vencer a este virus\nSalvaste al mundo !!!!";
			                    	cout<<"\ntu puntaje es: "<<puntaje;
			                     	Beep(1100,300);
			                     	Beep(1100,300);
			                     	Beep(1100,600);			                    	
	                    		}
		                    	else{
		                     		if(vida>0){
				                    	cout<<"\nvida del virus: "<<covid<<endl;
				                     	cout<<"ataque del virus: "<<damash<<endl;
				                     	cout<<"tu vida: "<<vida<<endl;
			                     	}
		                     		else{
			                     		cout<<"Perdiste";
			                     		cout<<"\ntu puntaje es: "<<puntaje;
	             			        	Beep(300,700);
	             			        	Beep(700,600);
	             			        	Beep(900,600);
	             			        	Beep(1000,900);			                     		
		                    		}
		                    	}
		                    	break;
			
	                     	case 3://si utizamos el ataque 3
	                     		
	                   	covid= covid -30;
                    	srand(time(NULL));
                     	damash= 10*(rand()%6);
                    	vida = vida - damash; 
                    	
	                      		if(covid<=0){
			                    	cout<<"\nFelicidades lograste vencer a este virus\nSalvaste al mundo !!!!";
			                    	cout<<"\ntu puntaje es: "<<puntaje;
			                    	Beep(1100,300);
			                     	Beep(1100,300);
			                     	Beep(1100,600);	
		                     	}
		                    	else{
		                    		if(vida>0){
				                    	cout<<"\nvida del virus: "<<covid<<endl;
				                    	cout<<"ataque del virus: "<<damash<<endl;
				                     	cout<<"tu vida: "<<vida<<endl;
			                    	}
			                    	else{
			                     		cout<<"Perdiste";
			                     		cout<<"\ntu puntaje es: "<<puntaje;
	             			        	Beep(300,700);
	             			        	Beep(700,600);
	             			        	Beep(900,600);
	             			        	Beep(1000,900);			                     		
			                    	}	
		                     	}
		                    	break;
			
                           	default:
	                        	cout<<"\nla opciÛn ingresada no es v·lida"<<endl;
	                    	break;
	
                        }
						
                   }
				   break;//fin de todas las instrucciones  "covid" 
        	case 2://neumonia
        		cout<<"\nVamos a exterminar  por completo a este virus !!!\n"<<endl<<endl<<endl;
        		
        		cout<<"\n(*)Lugar de origen:   \t\t Los primeros casos se detectaron en el estado\n\t\t\t         de Veracruz(MÈxico,31 de enero del 2019)"<<endl<<endl;
        		cout<<"(*)TransmiciÛn:       \t\t Se transmite al tener contacto \n\t\t\t\t f√≠sico con una persona infectada"<<endl<<endl;
        		cout<<"(*)SÌntomas:          \t\t Fiebre alta(38-40)C∞"<<endl;
        		cout<<"                      \t\t Tos seca"<<endl;
        		cout<<"                      \t\t Dolor de garganta"<<endl;
        		cout<<"                      \t\t Problemas para respirar"<<endl<<endl;
        		cout<<"(*)PrevenciÛn:        \t\t Lavarse las manos con agua y jabÛn \n\t\t\t\t entre 10 a 20 segundos, usar mascarillas"<<endl;
        		cout<<"                      \t\t Ventilar lugares habitados"<<endl<<endl;
        		
           		cout<<"\nVida inicial es: 100"<<endl;
           		cout<<"Vida de la neumonÌa es: 100"<<endl;
        		
        		

           			for(covid=80; covid>0 && vida>0; covid=covid){//men√∫ de ataques 
	

                    	srand(time(NULL));
                     	damash= 5*(rand()%4);
                    	vida = vida - damash;
	
                     	cout<<"\n1. Lavarse las manos             15 Damage"<<endl;
                      	cout<<"2. VentilaciÛn de lugares        25 Damage"<<endl;
                     	cout<<"3. Utilizar las mascarillas      35 Damage"<<endl;
                      	cout<<"con que quieres atacar?: "; cin>>ataque;
                      	
                    	puntaje=puntaje+1;
                    	
                    	switch(ataque){
		
                    		case 1://si se elije  la opci√≥n 1
	                    		covid= covid -15;
	                    		
                    	srand(time(NULL));
                     	damash= 5*(rand()%4);
                    	vida = vida - damash; 	                    		

	                      		if(covid<=0){
			                     	cout<<"\nFelicidades lograste vencer a este virus\nSalvaste al mundo !!!!"<<endl;
			                     	cout<<"\ntu puntaje es: "<<puntaje;
			                     	Beep(1100,300);
			                     	Beep(1100,300);
			                     	Beep(1100,600);	
					
		                    	}
	                     		else{
			                    	if(vida>0){
				                     	cout<<"\nvida del virus: "<<covid<<endl;
				                     	cout<<"ataque del virus: "<<damash<<endl;
				                    	cout<<"tu vida: "<<vida<<endl;
			                     	}
	                  		    	else{
	             			        	cout<<"Perdiste";
	             			        	cout<<"\ntu puntaje es: "<<puntaje;
	             			        	Beep(300,700);
	             			        	Beep(700,600);
	             			        	Beep(900,600);
	             			        	Beep(1000,900);	             			        	
                			     	}
		                     	}
		                    	break;
		
                    		case 2://si se elije  la opci√≥n 2
	                     		covid= covid -25;
	                     		
                    	srand(time(NULL));
                     	damash= 5*(rand()%4);
                    	vida = vida - damash; 
	                     		if(covid<=0){
			                    	cout<<"\nFelicidades lograste vencer a este virus\nSalvaste al mundo !!!!";
			                    	cout<<"\ntu puntaje es: "<<puntaje;
			                    	Beep(1100,300);
			                     	Beep(1100,300);
			                     	Beep(1100,600);	
	                    		}
		                    	else{
		                     		if(vida>0){
				                    	cout<<"\nvida del virus: "<<covid<<endl;
				                     	cout<<"ataque del virus: "<<damash<<endl;
				                     	cout<<"tu vida: "<<vida<<endl;
			                     	}
		                     		else{
			                     		cout<<"Perdiste";
			                     		cout<<"\ntu puntaje es: "<<puntaje;
	             			        	Beep(300,700);
	             			        	Beep(700,600);
	             			        	Beep(900,600);
	             			        	Beep(1000,900);			                     		
		                    		}
		                    	}
		                    	break;
			
	                     	case 3://si se elije la opci√≥n 3
	                      		covid= covid -35;
	                      		
                    	srand(time(NULL));
                     	damash= 5*(rand()%4);
                    	vida = vida - damash; 
	                      		if(covid<=0){
			                    	cout<<"\nFelicidades lograste vencer a este virus\nSalvaste al mundo !!!!";
			                    	cout<<"\ntu puntaje es: "<<puntaje;
			                    	Beep(1100,300);
			                     	Beep(1100,300);
			                     	Beep(1100,600);	
		                     	}
		                    	else{
		                    		if(vida>0){
				                    	cout<<"\nvida del virus: "<<covid<<endl;
				                    	cout<<"ataque del virus: "<<damash<<endl;
				                     	cout<<"tu vida: "<<vida<<endl;
			                    	}
			                    	else{
			                     		cout<<"Perdiste";
			                     		cout<<"\ntu puntaje es: "<<puntaje;
	             			        	Beep(300,700);
	             			        	Beep(700,600);
	             			        	Beep(900,600);
	             			        	Beep(1000,900);				                     		
			                    	}	
		                     	}
		                    	break;
			
                           	default:
	                        	cout<<"la opciÛn ingresada no es v·lida"<<endl;
	                    	break;
	
                        }//fin de las instrucciones con respecto a la neumonia
                   }        		
        		
        
				
				//contenido
        		break;
			default:
					
				cout<<"\nsu opciÛn no es v·lida\n";
				break;
			
        }
      }
		getchar();
}
