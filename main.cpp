#include <iostream>
#include <sstream>
#include <math.h>
using namespace std;

int binaryToDecimal(long long n)
{
    int numDecimal = 0, i = 0, resto;
    while (n!=0)
    {
        resto = n%10;
        n /= 10;
        numDecimal += resto*pow(2,i);
        ++i;
    }
    return numDecimal;
    }
    void binaryToHex(long long binary){
int iter = 1, j = 0, rem, dec = 0;
int a_hex[1000];
    while (binary > 0)
  {
   rem = binary % 2;
   dec = dec + rem * iter;
   iter = iter * 2;
   binary = binary / 10;
  }
   iter = 0;
  while (dec != 0)
  {
   a_hex[iter] = dec % 16;
   dec = dec / 16;
   iter++;
  }
      for ( j = iter - 1; j >= 0; j--)
  {
   if (a_hex[j] > 9)
   {
    cout<<(char)(a_hex[j] + 55);
   }
   else
   {
    cout<<a_hex[j];
   }
  }

}

long long int HexToBin(char hex[])
{
    long long int bin, place;
    int i = 0;

    bin = 0ll;
    place = 0ll;

    // Hexadecimal to binary conversion
    for (i = 0; hex[i] != '\0'; i++) {
        bin = bin * place;

        switch (hex[i]) {
        case '0':
            bin += 0;
            break;
        case '1':
            bin += 1;
            break;
        case '2':
            bin += 10;
            break;
        case '3':
            bin += 11;
            break;
        case '4':
            bin += 100;
            break;
        case '5':
            bin += 101;
            break;
        case '6':
            bin += 110;
            break;
        case '7':
            bin += 111;
            break;
        case '8':
            bin += 1000;
            break;
        case '9':
            bin += 1001;
            break;
        case 'a':
        case 'A':
            bin += 1010;
            break;
        case 'b':
        case 'B':
            bin += 1011;
            break;
        case 'c':
        case 'C':
            bin += 1100;
            break;
        case 'd':
        case 'D':
            bin += 1101;
            break;
        case 'e':
        case 'E':
            bin += 1110;
            break;
        case 'f':
        case 'F':
            bin += 1111;
            break;
        default:
            cout << "Invalid hexadecimal input.";
        }

        place = 10000;
    }

    return bin;
}

long long int bin_to_oct(long long bin)
{
    long long int octal, place;
    int rem, val;

    octal = 0ll;
    place = 0ll;

    place = 1;

    // Binary to octal conversion
    while (bin > 0) {
        rem = bin % 1000;

        switch (rem) {
        case 0:
            val = 0;
            break;
        case 1:
            val = 1;
            break;
        case 10:
            val = 2;
            break;
        case 11:
            val = 3;
            break;
        case 100:
            val = 4;
            break;
        case 101:
            val = 5;
            break;
        case 110:
            val = 6;
            break;
        case 111:
            val = 7;
            break;
        }

        octal = (val * place) + octal;
        bin /= 1000;

        place *= 10;
    }

    return octal;
}
// Hexadecimal a Octal
long long int hexAoct(char hex[])
{
    long long int octal, bin;

    // primero convertimos a binario
    bin = HexToBin(hex);

    // binario a octal
    octal = bin_to_oct(bin);

    return octal;
}


// Funcion octal a decimal
int octalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0, rem;
    while (octalNumber != 0)
    {
        rem = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += rem * pow(8, i);
        ++i;
    }
    return decimalNumber;
}
int octalToBinary(int octalNumber){
int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
long long binary=0, place=1;
  int rem;
      while(octalNumber > 0)
    {
        rem = octalNumber % 10;
        binary = (OCTALVALUES[rem] * place) + binary;
        octalNumber /= 10;

        place *= 1000;
    }
    return binary;
}

void octalToHex(int octalNumber){
    long long binary=octalToBinary(octalNumber);
int iter = 1, j = 0, rem, dec = 0;
int a_hex[1000];
    while (binary > 0)
  {
   rem = binary % 2;
   dec = dec + rem * iter;
   iter = iter * 2;
   binary = binary / 10;
  }
   iter = 0;
  while (dec != 0)
  {
   a_hex[iter] = dec % 16;
   dec = dec / 16;
   iter++;
  }
      for ( j = iter - 1; j >= 0; j--)
  {
   if (a_hex[j] > 9)
   {
    cout<<(char)(a_hex[j] + 55);
   }
   else
   {
    cout<<a_hex[j];
   }
  }

}
int main()
{
    cout<<"GABRIEL ICHIRO BALDERRAMA VARGAS "<<endl;
    cout<<"Conversor de Sistemas (2,8,10,16) "<<endl;
    cout<<endl;

    cout << "Seleccione el tipo de dato a convertir" << endl;
    int tipo;

    cout<<"1. decimal"<<endl;
    cout<<"2. binario"<<endl;
    cout<<"3. hexadecimal"<<endl;
    cout<<"4. octal"<<endl;

    cin>>tipo;
    //DECLARACIONES
//DECIMAL
int a[10], n, i, decimal,deciOld;
//BINARIO
long long int nBin, binOctal;
//HEXADECIMAL
char hexa[1000];
long long int xbin;
int hexAdecimal;
//OCTAL
int nOctal;

//casos
    switch(tipo){
case 1: //CONVERSIONES DECIMAL

cout<<"Ingrese el numero decimal: ";
cin>>n;
decimal=n;
//CONVERSION A BINARIO
for(i=0; n>0; i++)
{
a[i]=n%2;
n= n/2;
}
cout<<"Numero "<<decimal<<" en binario: ";
for(i=i-1 ;i>=0 ;i--)
{
cout<<a[i];
}
cout<<endl;
//CONVERSION A OCTAL
cout<<"Numero "<<decimal<<" en Octal: ";
cout<<oct<< decimal;
cout<<endl;
//CONVERSION A HEX
deciOld=decimal;
cout<<"Numero "<<deciOld<<" en hexadecimal: ";
cout<<hex<< decimal;
cout<<endl;
    break;

case 2: //CONVERSIONES DE BINARIO

cout<<"Ingrese el numero binario: ";
cin>>nBin;
//BINARIO A DECIMAL
cout<<"Numero "<<nBin<<" en Decimal: ";
cout<<binaryToDecimal(nBin);
cout<<endl;
//BINARIO A HEX
 cout<<"Numero "<<nBin<<" en Hexadecimal: ";
 binaryToHex(nBin);
  cout<<endl;
//BINARIO A OCTAL
binOctal=bin_to_oct(nBin);
cout<<"Numero "<<nBin<<" en Octal: ";
cout<<binOctal;
cout<<endl;
break;

case 3:// CONVERSIONES HEXA
    cout<<"Ingrese el hexadecimal: ";
cin>>hexa;
    //HEXADECIMAL A DECIMAL
istringstream(hexa)>>hex>>hexAdecimal;
cout <<hexa<<" a decimal es : " << hexAdecimal;
cout<<endl;

    //HEXADECIMAL A BINARIO
cout <<hexa<<" a binario es : ";
 xbin= HexToBin(hexa);
 cout<<xbin<<endl;
    //HEXADECIMAL A OCTAL
cout <<hexa<<" a octal es : " << hexAoct(hexa);
cout<<endl;
    break;
case 4:// CONVERSIONES OCTAL
cout<<"Ingrese el Octal: ";
cin>>nOctal;
    //OCTAL A DECIMAL
cout << nOctal << "a decimal es: " << octalToDecimal(nOctal) << " en decimal ";
cout<<endl;
    //OCTAL A BINARIO
cout << nOctal << "a binario es: " << octalToBinary(nOctal) << " en binario ";
cout<<endl;
    //OCTAL A HEXADECIMAL
cout << nOctal << "a hexadecimal es: ";
octalToHex(nOctal);
cout<< " en hexadecimal ";
cout<<endl;
    break;
default:
    cout<<"error "<<endl;

    }

    return 0;
}
