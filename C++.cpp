#include <iostream>
#include <windows.h>
#include <ctime>
#include <fstream>

using namespace std;

class produkt{ //class, ktera je pouzita pro vsechno okolo produktu

 public:
      string nazev;
      double cena;
      double kolikrat;

      produkt(double cenaA, string nazevA, double kolikratA){ // contstructor produktu
        cena = cenaA;
        nazev = nazevA;
        kolikrat = kolikratA;

      }

};

//funkce, ktera pocita celkovou cenu vsech produktu
double celkovaCena(double a, double b, double c, double d, double e, double f, double g, double h, double i) { 
    return a + b + c + d + e + f + g + h + i;
}

//funkce, ktera pocita celkovou cenu jednotlivych produktu
double CelkemCenaProdukt(double kolikrat, double cena) {
    return (kolikrat * cena);

}

//funkce, ktera vypisuje cenu spolecne s nazvem
void vypsaniCeny(double kolikrat, double cena, string nazev) {
    if (kolikrat > 0)
    {
        int k = 10;
        int n = nazev.length(); //tato promenna pocita kolik pismen je v jednotlivych slovach
        cout << nazev;
        cout << " ";
        if (kolikrat >= 10) // tento if else pridava mezeru za x, aby ve vypisu cen byly vsechny vyrovnany
        {
            cout << kolikrat << "x";
        }
        else
        {
            cout << kolikrat << "x ";
        }
        while (n < k) //Tento loop zajistuje, aby ceny vsech produktu byly vyrovnany
        {
            cout << " ";
            n++;
        }
        cout << cena << ",-";
        cout << endl;
    }
}

//Funkce vypisujici FIK a PKN
void uctenkaID(int n, string ID) {
    char letters[] = "abcdefghijklmnopqrstuvwxyz";
    int random = rand() % 2;
    cout << "   " << ID;
    cout << endl;
    cout << "  ";
    for (int i = 1; i <=n; i++) //loop, ktery se zopakuje podle toho, jak moc dlouhy chceme mit nas kod
    {
        switch (random) // tento switch vypisuje bud cislo nebo pismeno do naseho kodu, podle random cisla, ktere se meni po kazdem pruchodu
        {
        case 0:
        {
            cout << (rand() % 9);
            random = rand() % 2;
        }
        case 1:
        {
            cout << letters[rand() % 26];
            random = rand() % 2;
        }
        }
    }
    cout << endl;
}


int main(){
     //Zelenina
     produkt okurka(15, "Okurka", 0);
     produkt mrkev(12, "Mrkev", 0);
     produkt lilek(50, "Lilek", 0);

     //Napoje
     produkt voda(20, "Voda", 0);
     produkt dzus(15, "Dzus", 0);
     produkt cocaCola(30, "CocaCola", 0);

     //Hry
     produkt DOOM(900, "DOOM", 0);
     produkt mafia(200, "Mafia", 0);
     produkt amongUs(420, "Among US", 0);


     srand((int)time(0));

     int userInputPlatba; //vyber uzivatele jestli chce platit kartou nebo hotovosti
     int pinKarta = 1234; //pin ke karte
     int userInput; //na jakou kategorii chce jit
     int zeleninaVyber;
     int napojeVyber;
     int kuponInput;
     int hrySlevaVyber;
     int hryNoSlevaVyber;
     int doomKolikratShow = 0;
     int mafiaKolikratShow = 0;
     int amongUsKolikratShow = 0;
     string kupon;
     string kuponPravy = "ILOVEPROGRAMOVANI";

     //Zacatek nakupu
     start:
     cout << "MLG STORE 420" << endl;
     cout << endl;
     cout << "Zmacknete cislo pro akci" << endl;
     cout << "1) Zelenina" << endl;
     cout << "2) Napoje" << endl;
     cout << "3) Pc Hry" << endl;
     cout << "4) Kosik" << endl;
     cin >> userInput;
     system("cls");

     switch(userInput){

      case 1:{ //Zelenina
      zelenina:
        cout << "ZELENINA" << endl;
        cout << "1) Okurka  15,-      " << okurka.kolikrat  << "x" << endl;
        cout << "2) Mrkev   12,-      " << mrkev.kolikrat   << "x" << endl;
        cout << "3) Lilek   50,-      " << lilek.kolikrat   << "x" << endl;
        cout << "4) Zpet na zacatek" << endl;
        cin >> zeleninaVyber;

        switch(zeleninaVyber){//tento switch pripocitava vzdy po jednom k veci, kterou uzivatel zvoli
        case 1:
        {
            okurka.kolikrat++;
            system("cls");
            goto zelenina;
            break;
        }
        case 2:
        {
            mrkev.kolikrat++;
            system("cls");
            goto zelenina;
            break;
        }
        case 3:
        {
            lilek.kolikrat++;
            system("cls");
            goto zelenina;
            break;
        }

        case 4:
        {
            system("cls");
            goto start;
            break;
        }
        default:
        {
            system("cls");
            goto zelenina;
            break;
        }
        }
       }


       case 2: //Napoje
        {
       Napoje:
           cout << "NAPOJE" << endl;
           cout << "1) Voda     20,-      " << voda.kolikrat << "x" << endl;
           cout << "2) Dzus     15,-      " << dzus.kolikrat << "x" << endl;
           cout << "3) CocaCola 30,-      " << cocaCola.kolikrat << "x" << endl;
           cout << "4) Zpet na zacatek" << endl;
           cin >> napojeVyber;

           switch (napojeVyber) //tento switch pripocitava vzdy po jednom k veci, kterou uzivatel zvoli
           {
           case 1: 
           {
                voda.kolikrat++;
                system("cls");
                goto Napoje;
                break;
           }
           case 2:
           {
               dzus.kolikrat++;
               system("cls");
               goto Napoje;
               break;
           }
           case 3:
           {
               cocaCola.kolikrat++;
               system("cls");
               goto Napoje;
               break;
           }
           case 4:
           {
               system("cls");
               goto start;
               break;
           }
           default:
           {
               system("cls");
               goto Napoje;
               break;
           }
           }
        }

       case 3:
       {
       Hry:
           cout << "Mate slevovy kod?" << endl;
           cout << "1) Ano" << endl;
           cout << "2) Ne" << endl;
           cout << "3) Vratit zpet" << endl;
           cin >> kuponInput;
           system("cls");

           switch (kuponInput) //tento switch sortuje, jestli chce uzivatel nakupovat s kuponem nebo bez nej
           {
           case 1:
           {
               cout << "Zadejte prosim svuj kupon" << endl;
               cin >> kupon;
               system("cls");

               if (kupon == kuponPravy)
               {
               HrySleva:
                   cout << "HRY" << endl;
                   cout << "1) DOOM     " << (DOOM.cena * 0.85) << ",-      " << doomKolikratShow << "x" << endl;
                   cout << "2) Mafia    " << (mafia.cena * 0.85) << ",-      " << mafiaKolikratShow << "x" << endl;
                   cout << "3) AmongUs  " << (amongUs.cena * 0.85) << ",-      " << amongUsKolikratShow << "x" << endl;
                   cout << "4) Zpet na zacatek" << endl;
                   cin >> hrySlevaVyber;

                   switch (hrySlevaVyber) ////tento switch pripocitava vzdy po jednom k veci, kterou uzivatel zvoli
                   {
                   case 1:
                   {
                       doomKolikratShow++;
                       DOOM.kolikrat = (DOOM.kolikrat + 0.85);
                       system("cls");
                       goto HrySleva;
                       break;
                   }
                   case 2:
                   {
                       mafiaKolikratShow++;
                       mafia.kolikrat = (mafia.kolikrat + 0.85);
                       system("cls");
                       goto HrySleva;
                       break;
                   }
                   case 3:
                   {
                       amongUsKolikratShow++;
                       amongUs.kolikrat = (amongUs.kolikrat + 0.85);
                       system("cls");
                       goto HrySleva;
                       break;
                   }
                   case 4:
                   {
                       system("cls");
                       goto start;
                       break;
                   }
                   default:
                   {
                       system("cls");
                       goto HrySleva;
                   }
                   }
               }
               else
               {
                   system("cls");
                   goto Hry;
               }
           }
           case 2:
           {
              HryNoSleva:
               cout << "HRY" << endl;
               cout << "1) DOOM     " << DOOM.cena << ",-      " << doomKolikratShow << "x" << endl;
               cout << "2) Mafia    " << mafia.cena << ",-      " << mafiaKolikratShow << "x" << endl;
               cout << "3) AmongUs  " << amongUs.cena << ",-      " << amongUsKolikratShow << "x" << endl;
               cout << "4) Zpet na zacatek" << endl;
               cin >> hryNoSlevaVyber;

               switch (hryNoSlevaVyber) //tento switch pripocitava vzdy po jednom k veci, kterou uzivatel zvoli
               {
               case 1:
               {
                   doomKolikratShow++;
                   DOOM.kolikrat++;
                   system("cls");
                   goto HryNoSleva;
                   break;
               }
               case 2:
               {
                   mafiaKolikratShow++;
                   mafia.kolikrat++;
                   system("cls");
                   goto HryNoSleva;
                   break;
               }
               case 3:
               {
                   amongUsKolikratShow++;
                   amongUs.kolikrat++;
                   system("cls");
                   goto HryNoSleva;
                   break;
               }
               case 4:
               {
                   system("cls");
                   goto start;
                   break;
               }
               default:
               {
                   system("cls");
                   goto HryNoSleva;
                   break;
               }
               }
           }
           case 3://Uzivatel zmackne 3, pokud se chce vratit zpatky z vyberu HER
           {
               system("cls");
               goto start;
               break;
           }
           default:
           {
               system("cls");
               goto Hry;
               break;
           }
           }
           
       }
       case 4:
       {
           //Celkem ceny zeleniny

           double CCenaOkurka = CelkemCenaProdukt(okurka.kolikrat, okurka.cena);
           double CCenaMrkev = CelkemCenaProdukt(mrkev.kolikrat, mrkev.cena);
           double CCenaLilek = CelkemCenaProdukt(lilek.kolikrat, lilek.cena);

           //Celkem ceny napoju

           double CCenaVoda = CelkemCenaProdukt(voda.kolikrat, voda.cena);
           double CCenaDzus = CelkemCenaProdukt(dzus.kolikrat, dzus.cena);
           double CCenaCola = CelkemCenaProdukt(cocaCola.kolikrat, cocaCola.cena);

           //Celkem ceny her

           double CCenaDOOM = CelkemCenaProdukt(DOOM.kolikrat, DOOM.cena);
           double CCenaMafia = CelkemCenaProdukt(mafia.kolikrat, mafia.cena);
           double CCenaAmongUs = CelkemCenaProdukt(amongUs.kolikrat, amongUs.cena);

           //Celkova cena vsechno
           double CelkovaCena = celkovaCena(CCenaOkurka, CCenaMrkev, CCenaLilek, CCenaVoda, CCenaDzus, CCenaCola, CCenaDOOM, CCenaMafia, CCenaAmongUs);

           cout << "KOSIK" << endl;

           if (CelkovaCena == 0)//pokud celkova cena je 0, tak se uzivatel vrati na startovni obrazovku
           {
               cout << "Vas kosik je prazdny" << endl;
               Sleep(3000);
               system("cls");
               goto start;
           }
           else if (CelkovaCena > 0) //Pokud se celkova cena rovna vic nez 0, tak uzivatel je prenesen do kosiku
           {
           kosik:

               int random = rand() % 1000;//Sance 1 ku 1000

               //zelenina vypsani cen
               vypsaniCeny(okurka.kolikrat, CCenaOkurka, okurka.nazev);
               vypsaniCeny(mrkev.kolikrat, CCenaMrkev, mrkev.nazev);
               vypsaniCeny(lilek.kolikrat, CCenaLilek, lilek.nazev);

               //Napoje vypsani cen
               vypsaniCeny(voda.kolikrat, CCenaVoda, voda.nazev);
               vypsaniCeny(dzus.kolikrat, CCenaDzus, dzus.nazev);
               vypsaniCeny(cocaCola.kolikrat, CCenaCola, cocaCola.nazev);

               //Hry vypsani cen
               vypsaniCeny(doomKolikratShow, CCenaDOOM, DOOM.nazev);
               vypsaniCeny(mafiaKolikratShow, CCenaMafia, mafia.nazev);
               vypsaniCeny(amongUsKolikratShow, CCenaAmongUs, amongUs.nazev);

               cout << endl;
               cout << "Celkem:" << CelkovaCena << ",-\n";
               cout << endl;
               cout << "Jak byste si prali zaplatit?" << endl;
               cout << "1) Hotovost" << endl;
               cout << "2) Kartou" << endl;
               cin >> userInputPlatba;
               system("cls");

               switch (userInputPlatba)//Uzivatel chce bud zaplatit hotovosti nebo kartou
               {
               case 1:
               {
                   cout << "Uspesne jste zaplatili nakup v hodnote " << CelkovaCena << ",-" << endl;
                   cout << endl;
                   if (CelkovaCena > 1500) //Pokud je celkova cena vetsi, nez 1500, tak uzivatel obdrzi lednici
                   {
                       cout << "Gratulujeme, vyhrali jste lednici, protoze jste nakoupili za vice jak 1500Kc" << endl;
                   }
                   if (random == 69) //Pokud se nas random variable bude rovnat 69, tak uzivatel dostane zadarmo cely nakup
                   {
                       cout << "Gratulujeme, prave jste dostali cely nakup zdarma" << endl;
                       CelkovaCena = 0;
                   }
                   cin.ignore();
                   goto uctenka;//Prechod na uctenku
                   break;
               }
               case 2:
               {
               Karta:
                   int pin;
                   int pinTries = 0;
                   cout << "Zadejte prosim vas pin:" << endl;
                   cin >> pin;
                   system("cls");

                   if (pin == pinKarta)//Pokud se zadany pin rovna nasemu pinu na karte, tak to uzivatele pusti dal
                   {
                       cout << "Uspesne jste zaplatili nakup v hodnote " << CelkovaCena << ",-" << endl;

                       if (CelkovaCena > 1500)//Pokud je celkova cena vetsi, nez 1500, tak uzivatel obdrzi lednici
                       {
                           cout << "Gratulujeme, vyhrali jste lednici, protoze jste nakoupili za vice jak 1500Kc" << endl;
                       }
                       if (random == 69)//Pokud se nas random variable bude rovnat 69, tak uzivatel dostane zadarmo cely nakup
                       {
                           cout << "Gratulujeme, prave jste dostali cely nakup zdarma" << endl;
                           CelkovaCena = 0;
                       }
                       cin.ignore();
                       goto uctenka;//Prechod na uctenku
                   }
                   else//Pokud se uzivatelem zadany pin neschoduje s nasim pinem, tak ho to hodi sem
                   {
                       if (pinTries >= 5)//Pokud uzivatel zada 5x po sobe spatny pin, tak ho to vrati zpatky do kosiku
                       {
                           cout << "Zadali jste 5x po sobe spatny pin" << endl;
                           cout << "Vracime vas zpet do kosiku........." << endl;
                           Sleep(5000);
                           system("cls");
                           goto kosik;
                       }
                       pinTries++;//Toto pripocitava vzdy po kazdem pokusu jednicku k pokusum
                       cout << "Zadali jste spatny pin" << endl;
                       Sleep(2000);
                       system("cls");
                       goto Karta;
                   }
                   break;
               }
               }

           uctenka: //UCTENKA
               cout << "Vase uctenka: " << endl;
               //zelenina vypsani cen
               vypsaniCeny(okurka.kolikrat, CCenaOkurka, okurka.nazev);
               vypsaniCeny(mrkev.kolikrat, CCenaMrkev, mrkev.nazev);
               vypsaniCeny(lilek.kolikrat, CCenaLilek, lilek.nazev);

               //Napoje vypsani cen
               vypsaniCeny(voda.kolikrat, CCenaVoda, voda.nazev);
               vypsaniCeny(dzus.kolikrat, CCenaDzus, dzus.nazev);
               vypsaniCeny(cocaCola.kolikrat, CCenaCola, cocaCola.nazev);

               //Hry vypsani cen
               vypsaniCeny(doomKolikratShow, CCenaDOOM, DOOM.nazev);
               vypsaniCeny(mafiaKolikratShow, CCenaMafia, mafia.nazev);
               vypsaniCeny(amongUsKolikratShow, CCenaAmongUs, amongUs.nazev);

               cout << endl;
                
               uctenkaID(3, "FIK");//Funkce vypisujici FIK
               cout << endl;
               uctenkaID(4, "PKN");//Funkce vypisujici PKN
               cout << endl;
               cout << "Celkova cena: " << CelkovaCena << endl; //Celkova Cena

               string prodejni[] = { "Pepa", "Veronika", "Hammond" };//Array s prodejnimi

               //Vypisovac kdo byl prodejni z arraye za pomoci randomu
               cout << "Prodavac dnes byl/a: " << prodejni[rand() % 3] << endl;

               //random cislo prodejny
               int randomProdejny = rand() % 100 + 1;
               cout << "Cislo prodejny: " << randomProdejny << endl;

               int randomPokladna = rand() % 5 + 1;
               cout << "Cislo pokladny: " << randomPokladna << endl;
           }
           break;
       }

       default://Pokud uzivatel ve vyberu kategorii zmackne neco jineho, nez 1-4, tak to vymaze konzoli a jako kdyby se nic nestalo
       {
           system("cls");
           goto start;
           break;
       }

     }



}
