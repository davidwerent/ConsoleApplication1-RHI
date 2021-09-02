#include <iostream>
#include <mysql.h>
#include "interface.h"
#include "Database.h"


using namespace std;
int qstate1;


int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "Russian");
	GREEN; cout << "Welcome to RHI console!\n"; WHITE;
	Database s("localhost", "root", "admin", "userlist", 3306);
	string login,password;
	if (!s.isConnected()) exit(0);
	//s.LoadClientFromTable("admin","1234",64);
	do
	{
		cout << "Enter login:\t";
		cin >> login;
		cout << "Enter password:\t";
		cin >> password;
		s.LoadClientFromTable(login, password, 0);
		if (s.isLogin()) break;
		system("cls");
		RED; cout << "Incorrect login or password\n"; WHITE;
	} while (!s.isLogin());
	GREEN; cout << "Authorisation complete!\n"; WHITE;
	Я ЧТОТО ДОБАВИЛ КАК ЭТО УВИДЕТЬ В ГИТЕ? МММММ???

}

