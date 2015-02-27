#include <iostream>
#include <stack>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace std;

class Nodo
{
	public:
		string dato;
		Nodo *SigPtr;
		Nodo(string n)
		{
		  dato=n;
		  SigPtr =0;
		}
};

class Pila
{
	public:
	Nodo *TopePtr;

	Pila()
	{
	  TopePtr=0;
	}

	~Pila()
	{
	  while(isEmpty()==false)
	  {
		Pop();
	  }
	}

	bool isEmpty()//verifica si hay dados
	{
	  return TopePtr ==0;
	}

	void Push(string val) //agregar un valor
	{
	   Nodo *newPtr = new Nodo(val);
	   newPtr->SigPtr = TopePtr;
	   TopePtr =newPtr;
	}

	string Pop()//elimina un valor
	{
		if(!isEmpty())//evalua si esta vacia la Pila
		{
		   Nodo *tempPtr = TopePtr;
		   TopePtr = TopePtr->SigPtr;
		   string ret = tempPtr->dato;
		   delete tempPtr;
		   return ret;//retorna un valor
		}
		else
		{
			return ""; //retornamos un avlor cualquiera para indicar que la Pila esta vacia
		}
	}

    string top()//returna el ultimo valor que ingresamos
	{
		if(!isEmpty())
		{
			return TopePtr->dato;
		}
		else
		{
			return "";
		}
	}
};

//funcion extraida de: http://horiacondrea.com/2013/03/14/quick-tip-sprite-cliked-in-sfml/
bool ClickTrigger(sf::Sprite &av_Sprite, sf::RenderWindow &av_Window)
{
    int mouseX = sf::Mouse::getPosition().x;
    int mouseY = sf::Mouse::getPosition().y;

    sf::Vector2i windowPosition = av_Window.getPosition();

    if(mouseX > av_Sprite.getPosition().x + windowPosition.x && mouseX < ( av_Sprite.getPosition().x + av_Sprite.getGlobalBounds().width + windowPosition.x)
        && mouseY > av_Sprite.getPosition().y + windowPosition.y  && mouseY < ( av_Sprite.getPosition().y + av_Sprite.getGlobalBounds().height + windowPosition.y) )
    {
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            return true;
        }
        return false;
    }
    return false;
};


int main()
{
    Pila p1 = Pila();
    Pila p2 = Pila();
    string c10,c9,c8,c7,c6,c5,c4,c3,c2,c1;

    p1.Push("c01.png");
    p1.Push("c02.png");
    p1.Push("c03.png");
    p1.Push("c04.png");
    p1.Push("c05.png");
    p1.Push("c06.png");
    p1.Push("c07.png");
    p1.Push("c08.png");
    p1.Push("c09.png");
    p1.Push("c10.png");
    string cp2 = ("cp2.png");
    string pop = ("pop.gif");
    string top = ("top.png");

    sf::RenderWindow window(sf::VideoMode(1340,700), "Pila");

    //creacion de textura1 para la pila1
    sf::Texture texturep1;
    texturep1.loadFromFile(p1.top()); //carga la textura de acuerdo al elemento top de la pila 1
    sf::Sprite spritep1(texturep1); //crea el sprite segun la textura asignada anteriormente
    spritep1.setPosition(sf::Vector2f(10,10)); //posicion actual del sprite
    c1=p1.Pop();

    //creacion de textura2 para la pila1
    sf::Texture texturep2;
    texturep2.loadFromFile(p1.top()); //carga la textura de acuerdo al elemento top de la pila 2
    c2=p1.Pop();
    sf::Sprite spritep2(texturep2); //crea el sprite segun la textura asignada anteriormente
    spritep2.setPosition(sf::Vector2f(150,10)); //posicion actual del sprite

    //creacion de textura3 para la pila1
    sf::Texture texturep3;
    texturep3.loadFromFile(p1.top()); //carga la textura de acuerdo al elemento top de la pila 1
    c3=p1.Pop();
    sf::Sprite spritep3(texturep3); //crea el sprite segun la textura asignada anteriormente
    spritep3.setPosition(sf::Vector2f(290,10)); //posicion actual del sprite

    //creacion de textura4 para la pila1
    sf::Texture texturep4;
    texturep4.loadFromFile(p1.top()); //carga la textura de acuerdo al elemento top de la pila 1
    c4=p1.Pop();
    sf::Sprite spritep4(texturep4); //crea el sprite segun la textura asignada anteriormente
    spritep4.setPosition(sf::Vector2f(430,10)); //posicion actual del sprite

    //creacion de textura5 para la pila1
    sf::Texture texturep5;
    texturep5.loadFromFile(p1.top()); //carga la textura de acuerdo al elemento top de la pila 1
    c5=p1.Pop();
    sf::Sprite spritep5(texturep5); //crea el sprite segun la textura asignada anteriormente
    spritep5.setPosition(sf::Vector2f(570,10)); //posicion actual del sprite

    //creacion de textura6 para la pila1
    sf::Texture texturep6;
    texturep6.loadFromFile(p1.top()); //carga la textura de acuerdo al elemento top de la pila 1
    c6=p1.Pop();
    sf::Sprite spritep6(texturep6); //crea el sprite segun la textura asignada anteriormente
    spritep6.setPosition(sf::Vector2f(10,150)); //posicion actual del sprite

    //creacion de textura7 para la pila1
    sf::Texture texturep7;
    texturep7.loadFromFile(p1.top()); //carga la textura de acuerdo al elemento top de la pila 1
    c7=p1.Pop();
    sf::Sprite spritep7(texturep7); //crea el sprite segun la textura asignada anteriormente
    spritep7.setPosition(sf::Vector2f(150,150)); //posicion actual del sprite

    //creacion de textura8 para la pila1
    sf::Texture texturep8;
    texturep8.loadFromFile(p1.top()); //carga la textura de acuerdo al elemento top de la pila 1
    c8=p1.Pop();
    sf::Sprite spritep8(texturep8); //crea el sprite segun la textura asignada anteriormente
    spritep8.setPosition(sf::Vector2f(290,150)); //posicion actual del sprite

    //creacion de textura9 para la pila1
    sf::Texture texturep9;
    texturep9.loadFromFile(p1.top()); //carga la textura de acuerdo al elemento top de la pila 1
    c9=p1.Pop();
    sf::Sprite spritep9(texturep9); //crea el sprite segun la textura asignada anteriormente
    spritep9.setPosition(sf::Vector2f(430,150)); //posicion actual del sprite

    //creacion de textura10 para la pila1
    sf::Texture texturep10;
    texturep10.loadFromFile(p1.top()); //carga la textura de acuerdo al elemento top de la pila 1
    c10= p1.Pop();
    sf::Sprite spritep10(texturep10); //crea el sprite segun la textura asignada anteriormente
    spritep10.setPosition(sf::Vector2f(570,150)); //posicion actual del sprite

    //creacion de fondo
    sf::Texture fondo;
    fondo.loadFromFile("fond.jpg");
    sf::Sprite sfondo(fondo);

    //creacion de textura1 para la pila2
    sf::Texture texturep12;
    texturep12.loadFromFile(cp2); //carga la textura de acuerdo al elemento top de la pila 1
    sf::Sprite spritep12(texturep12); //crea el sprite segun la textura asignada anteriormente
    spritep12.setPosition(sf::Vector2f(300,350)); //posicion actual del sprite

    //creacion de textura2 para la pila2
    sf::Texture texturep22;
    texturep22.loadFromFile(cp2); //carga la textura de acuerdo al elemento top de la pila 2
    sf::Sprite spritep22(texturep22); //crea el sprite segun la textura asignada anteriormente
    spritep22.setPosition(sf::Vector2f(400,350)); //posicion actual del sprite

    //creacion de textura3 para la pila2
    sf::Texture texturep32;
    texturep32.loadFromFile(cp2); //carga la textura de acuerdo al elemento top de la pila 1
    sf::Sprite spritep32(texturep32); //crea el sprite segun la textura asignada anteriormente
    spritep32.setPosition(sf::Vector2f(500,350)); //posicion actual del sprite

    //creacion de textura4 para la pila2
    sf::Texture texturep42;
    texturep42.loadFromFile(cp2); //carga la textura de acuerdo al elemento top de la pila 1
    sf::Sprite spritep42(texturep42); //crea el sprite segun la textura asignada anteriormente
    spritep42.setPosition(sf::Vector2f(600,350)); //posicion actual del sprite

    //creacion de textura5 para la pila2
    sf::Texture texturep52;
    texturep52.loadFromFile(cp2); //carga la textura de acuerdo al elemento top de la pila 1
    sf::Sprite spritep52(texturep52); //crea el sprite segun la textura asignada anteriormente
    spritep52.setPosition(sf::Vector2f(700,350)); //posicion actual del sprite

    //creacion de textura6 para la pila2
    sf::Texture texturep62;
    texturep62.loadFromFile(cp2); //carga la textura de acuerdo al elemento top de la pila 1
    sf::Sprite spritep62(texturep62); //crea el sprite segun la textura asignada anteriormente
    spritep62.setPosition(sf::Vector2f(800,350)); //posicion actual del sprite

    //creacion de textura7 para la pila2
    sf::Texture texturep72;
    texturep72.loadFromFile(cp2); //carga la textura de acuerdo al elemento top de la pila 1
    sf::Sprite spritep72(texturep72); //crea el sprite segun la textura asignada anteriormente
    spritep72.setPosition(sf::Vector2f(900,350)); //posicion actual del sprite

    //creacion de textura8 para la pila2
    sf::Texture texturep82;
    texturep82.loadFromFile(cp2); //carga la textura de acuerdo al elemento top de la pila 1
    sf::Sprite spritep82(texturep82); //crea el sprite segun la textura asignada anteriormente
    spritep82.setPosition(sf::Vector2f(1000,350)); //posicion actual del sprite

    //creacion de textura9 para la pila2
    sf::Texture texturep92;
    texturep92.loadFromFile(cp2); //carga la textura de acuerdo al elemento top de la pila 1
    sf::Sprite spritep92(texturep92); //crea el sprite segun la textura asignada anteriormente
    spritep92.setPosition(sf::Vector2f(1100,350)); //posicion actual del sprite

    //creacion de textura10 para la pila2
    sf::Texture texturep102;
    texturep102.loadFromFile(cp2); //carga la textura de acuerdo al elemento top de la pila 1
    sf::Sprite spritep102(texturep102); //crea el sprite segun la textura asignada anteriormente
    spritep102.setPosition(sf::Vector2f(1200,350)); //posicion actual del sprite

    sf::Texture texturepop;
    texturepop.loadFromFile(pop); //carga la textura de acuerdo al elemento top de la pila 1
    sf::Sprite spritepop(texturepop); //crea el sprite segun la textura asignada anteriormente
    spritepop.setPosition(sf::Vector2f(50,550)); //posicion actual del sprite

    sf::Texture tope;
    tope.loadFromFile(top); //carga la textura de acuerdo al elemento top de la pila 1
    sf::Sprite spritetope(tope); //crea el sprite segun la textura asignada anteriormente
    spritetope.setPosition(sf::Vector2f(250,565)); //posicion actual del sprite

    int flag1 = 1,flag2 = 2, flag3 = 3, flag4 = 4, flag5 = 5, flag6 = 6, flag7 = 7, flag8 = 8, flag9 = 9, flag10 = 10;
    int cont = 0, cont2 = 0;
    int t;
    while (window.isOpen())
    {
        window.draw(sfondo,sf::RenderStates::Default); //se dibuja el fondo en pantalla
        window.draw(spritepop,sf::RenderStates::Default); //se dibuja el sprite POP en pantalla
        window.draw(spritetope,sf::RenderStates::Default); //se dibuja el sprite TOP en pantalla

        window.draw(spritep12,sf::RenderStates::Default); //se dibuja el sprite de la pila 1 en pantalla
        window.draw(spritep22,sf::RenderStates::Default); //se dibuja el sprite de la pila 2 en pantalla
        window.draw(spritep32,sf::RenderStates::Default); //se dibuja el sprite de la pila 3 en pantalla
        window.draw(spritep42,sf::RenderStates::Default); //se dibuja el sprite de la pila 4 en pantalla
        window.draw(spritep52,sf::RenderStates::Default); //se dibuja el sprite de la pila 5 en pantalla
        window.draw(spritep62,sf::RenderStates::Default); //se dibuja el sprite de la pila 6 en pantalla
        window.draw(spritep72,sf::RenderStates::Default); //se dibuja el sprite de la pila 7 en pantalla
        window.draw(spritep82,sf::RenderStates::Default); //se dibuja el sprite de la pila 8 en pantalla
        window.draw(spritep92,sf::RenderStates::Default); //se dibuja el sprite de la pila 9 en pantalla
        window.draw(spritep102,sf::RenderStates::Default); //se dibuja el sprite de la pila 10 en pantalla

        window.draw(spritep1,sf::RenderStates::Default); //se dibuja el sprite de la pila 1 en pantalla
        window.draw(spritep2,sf::RenderStates::Default); //se dibuja el sprite de la pila 2 en pantalla
        window.draw(spritep3,sf::RenderStates::Default); //se dibuja el sprite de la pila 3 en pantalla
        window.draw(spritep4,sf::RenderStates::Default); //se dibuja el sprite de la pila 4 en pantalla
        window.draw(spritep5,sf::RenderStates::Default); //se dibuja el sprite de la pila 5 en pantalla
        window.draw(spritep6,sf::RenderStates::Default); //se dibuja el sprite de la pila 6 en pantalla
        window.draw(spritep7,sf::RenderStates::Default); //se dibuja el sprite de la pila 7 en pantalla
        window.draw(spritep8,sf::RenderStates::Default); //se dibuja el sprite de la pila 8 en pantalla
        window.draw(spritep9,sf::RenderStates::Default); //se dibuja el sprite de la pila 9 en pantalla
        window.draw(spritep10,sf::RenderStates::Default); //se dibuja el sprite de la pila 10 en pantalla

        window.display();
        sf::Event event;

        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed) //si se cierra manualmente
            {
                window.close();
                cout<<"usted cerro el programa dandole clic al boton";
            }

            if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape)) //si se presiona ESC
            {
                window.close();
                cout<<"usted cerro el programa usando ESC: ";
            }
            if(flag1==1)
            {
                if (ClickTrigger(spritep1,window)||(event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num1)) //verifica si se le da click a la primera pila
                {
                    p2.Push(c1);
                    cont++;
                    cont2++;
                    texturep1.loadFromFile(cp2); //a la textura de la pila 2 se le asigna el nuevo top de la pila 2
                    flag1=0;
                }
            }
            if(flag2==2)
            {
                if (ClickTrigger(spritep2,window)||(event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num2)) //verifica si se le da click a la primera pila
                {
                    p2.Push(c2);
                    cont++;
                    cont2++;
                    texturep2.loadFromFile(cp2); //a la textura de la pila 2 se le asigna el nuevo top de la pila 2
                    flag2=0;
                }
            }
            if(flag3==3)
            {
                if (ClickTrigger(spritep3,window)||(event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num3)) //verifica si se le da click a la primera pila
                {
                    p2.Push(c3);
                    cont++;
                    cont2++;
                    texturep3.loadFromFile(cp2); //a la textura de la pila 2 se le asigna el nuevo top de la pila 2
                    flag3=0;
                }
            }
            if(flag4==4)
            {
                if (ClickTrigger(spritep4,window)||(event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num4)) //verifica si se le da click a la primera pila
                {
                    p2.Push(c4);
                    cont++;
                    cont2++;
                    texturep4.loadFromFile(cp2); //a la textura de la pila 2 se le asigna el nuevo top de la pila 2
                    flag4=0;
                }
            }
            if(flag5==5)
            {
                if (ClickTrigger(spritep5,window)||(event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num5)) //verifica si se le da click a la primera pila
                {
                    p2.Push(c5);
                    cont++;
                    cont2++;
                    texturep5.loadFromFile(cp2); //a la textura de la pila 2 se le asigna el nuevo top de la pila 2
                    flag5=0;
                }
            }
            if(flag6==6)
            {
                if (ClickTrigger(spritep6,window)||(event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num6)) //verifica si se le da click a la primera pila
                {
                    p2.Push(c6);
                    cont++;
                    cont2++;
                    texturep6.loadFromFile(cp2); //a la textura de la pila 2 se le asigna el nuevo top de la pila 2
                    flag6=0;
                }
            }
            if(flag7==7)
            {
                if (ClickTrigger(spritep7,window)||(event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num7)) //verifica si se le da click a la primera pila
                {
                    p2.Push(c7);
                    cont++;
                    cont2++;
                    texturep7.loadFromFile(cp2); //a la textura de la pila 2 se le asigna el nuevo top de la pila 2aag
                    flag7=0;
                }
            }
            if(flag8==8)
            {
                if (ClickTrigger(spritep8,window)||(event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num8)) //verifica si se le da click a la primera pila
                {
                    p2.Push(c8);
                    cont++;
                    cont2++;
                    texturep8.loadFromFile(cp2); //a la textura de la pila 2 se le asigna el nuevo top de la pila 2
                    flag8=0;
                }
            }
            if(flag9==9)
            {
                if (ClickTrigger(spritep9,window)||(event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num9)) //verifica si se le da click a la primera pila
                {
                    p2.Push(c9);
                    cont++;
                    cont2++;
                    texturep9.loadFromFile(cp2); //a la textura de la pila 2 se le asigna el nuevo top de la pila 2
                    flag9=0;
                }
            }
            if(flag10==10)
            {
                if (ClickTrigger(spritep10,window)||(event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num0)) //verifica si se le da click a la primera pila
                {
                    p2.Push(c10);
                    cont++;
                    cont2++;
                    texturep10.loadFromFile(cp2); //a la textura de la pila 2 se le asigna el nuevo top de la pila 2
                    flag10=0;
                }
            }
            if(cont2>0)
            {
                if (ClickTrigger(spritepop,window)||(event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::P)) //verifica si se le da click al pop
                {
                    p2.Pop();
                }
            }
        }

        if(cont!=0) //si hubo pop/push en la cualquiera de las pilas
        {
            tope.loadFromFile(p2.top()); //a la textura de la pila se le asigna el nuevo top
                                p2.Push(c1);
                    cont++;
        }
        if(cont==1) //si hubo pop/push en la cualquiera de las pilas
        {
            texturep12.loadFromFile(p2.top()); //a la textura de la pila se le asigna el nuevo top
        }
        if(cont==2) //si hubo pop/push en la cualquiera de las pilas
        {
            texturep22.loadFromFile(p2.top()); //a la textura de la pila se le asigna el nuevo top
        }
        if(cont==3) //si hubo pop/push en la cualquiera de las pilas
        {
            texturep32.loadFromFile(p2.top()); //a la textura de la pila se le asigna el nuevo top
        }
        if(cont==4) //si hubo pop/push en la cualquiera de las pilas
        {
            texturep42.loadFromFile(p2.top()); //a la textura de la pila se le asigna el nuevo top
        }
        if(cont==5) //si hubo pop/push en la cualquiera de las pilas
        {
            texturep52.loadFromFile(p2.top()); //a la textura de la pila se le asigna el nuevo top
        }
        if(cont==6) //si hubo pop/push en la cualquiera de las pilas
        {
            texturep62.loadFromFile(p2.top()); //a la textura de la pila se le asigna el nuevo top
        }
        if(cont==7) //si hubo pop/push en la cualquiera de las pilas
        {
            texturep72.loadFromFile(p2.top()); //a la textura de la pila se le asigna el nuevo top
        }
        if(cont==8) //si hubo pop/push en la cualquiera de las pilas
        {
            texturep82.loadFromFile(p2.top()); //a la textura de la pila se le asigna el nuevo top
        }
        if(cont==9) //si hubo pop/push en la cualquiera de las pilas
        {
            texturep92.loadFromFile(p2.top()); //a la textura de la pila se le asigna el nuevo top
        }
        if(cont==10) //si hubo pop/push en la cualquiera de las pilas
        {
            texturep102.loadFromFile(p2.top()); //a la textura de la pila se le asigna el nuevo top
            cont++;
        }
    }
}
