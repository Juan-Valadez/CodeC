#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
int set;
cout <<"Introduce la opcion a elegir: "<<endl;

//Opciones
cout <<"1- Intall ifconfig - Debian/Ubuntu "<<endl;
cout <<"2- Install ifconfig - RedHat/CentOS"<<endl;
cout <<"3- Install wireshark - Ubuntu"<<endl;
cout <<"4- Install wireshark - Debian"<<endl;
cout <<"5- Install tcpdump - Debian/Ubuntu"<<endl;
cout <<"6- Intall tcpdump - RedHat/CentOS"<<endl;
cout <<"7- Actualizar"<<endl;

cin >>set;
//Casos
switch(set){

//ifconfig
case 1:
system("apt-get install net-tools");
system("sudo apt -y install net-tools");
break;

case 2:
system("yum install net-tools");
system("yum install net-tools -y");
break;

//wireshark
case 3:
system("apt update");
system("apt upgrade -y");
system("apt install wireshark");
break;

case 4:
system("apt update");
system("apt upgrade");
system("apt-get intall wireshark");
break;

//tcpdump
case 5:
system("apt-get install tcpdump");
break;

case 6:
system("yum install tcpdump");
break;

//actualizar 
case 7:
system("apt update");
system("apt upgrade");
break;
}
return 0;
}
