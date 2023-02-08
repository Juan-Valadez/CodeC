#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
int opcion;
cout <<"Introduce la opcion a elegir: "<<endl;

//Opciones
cout <<"1º Interfaces de red"<<endl;
cout <<"2º ping a google"<<endl;
cout <<"3º Open wireshark"<<endl;
cout <<"4º tcpdump icmp"<<endl;
cout <<"5º tcpdump arp"<<endl;
cout <<"6º Kernel"<<endl;
cout <<"7º Hostname del equipo"<<endl;
 
cin >>opcion;
//Casos
switch(opcion){

//Ifconfig
case 1:
system("ifconfig");
break;

//ping google
case 2:
system("ping 8.8.8.8 -c 4");
break;

//Open wireshark
case 3:
system("wireshark");
break;

//tcpdump ping
case 4:
system("tcpdump icmp -c 10");
break;
//tcpdump arp
case 5:
system("tcpdump arp -c 4");
break;

//Kernel
case 6:
system("lsb_release -a");
break;

//Name equipo
case 7:
system("hostnamectl");
break;
}

return 0;
}
