#include <iostream>
#include <ctime>
using namespace std;

int main(){
	string pass="QWERTYUIOPASDFGHJKLZXCVBNMqwertyuopasdfghjklizxcvbnm1234567890";
	string password="",str,evet="evet",yes="yes",hayir="hayır",no="no";
	int t,enAz=0,enCok=61,sw,i;
	srand(time(0));
	cout << "Sifre hanenizi kendiniz belirlemek ister misiniz?" << endl;
	cout << "Eger belirlemek istiyorsanız sadece evet yazınız" << endl;
	cout << "Would you like to set your password yourself?" << endl;
	cout << "If you want to determine, write only yes." << endl;
	cin >> str ;
	for(auto& c : str)
		{
		   c = tolower(c);
		}
	if(str==evet || str==yes){
		cout << "Kaç haneli şifre istersiniz ?" << endl;
		cout << "(min 8 max 16 hane)" << endl;
		cout << "How many digit password do you want?" << endl;
		cout << "(min 8 max 16 digit)" << endl;
		cin >> sw;
		switch(sw){
		case 8:
			for(int i=0;i<=8;i++){
					t=rand() % (enCok - enAz + 1 ) + enAz;
					password+=pass.at(t);
				} cout << "Şifreniz : " << password << endl;
				cout << "Your Password : " << password << endl;
				break;
		case 9:
			for(int i=0;i<=9;i++){
					t=rand() % (enCok - enAz + 1 ) + enAz;
					password+=pass.at(t);
				} cout << "Şifreniz : " << password << endl;
				cout << "Your Password : " << password << endl;
				break;
		case 10:
			for(int i=0;i<=10;i++){
					t=rand() % (enCok - enAz + 1 ) + enAz;
					password+=pass.at(t);
				} cout << "Şifreniz : " << password << endl;
				cout << "Your Password : " << password << endl;
				break;

		case 11:
			for(int i=0;i<=11;i++){
					t=rand() % (enCok - enAz + 1 ) + enAz;
					password+=pass.at(t);
				} cout << "Şifreniz : " << password << endl;
				cout << "Your Password : " << password << endl;
				break;
		case 12:
			for(int i=0;i<=12;i++){
					t=rand() % (enCok - enAz + 1 ) + enAz;
					password+=pass.at(t);
				} cout << "Şifreniz : " << password << endl;
				cout << "Your Password : " << password << endl;
				break;

		case 13:
			for(int i=0;i<=13;i++){
					t=rand() % (enCok - enAz + 1 ) + enAz;
					password+=pass.at(t);
				} cout << "Şifreniz : " << password << endl;
				cout << "Your Password : " << password << endl;
			break;

		case 14:
			for(int i=0;i<=14;i++){
					t=rand() % (enCok - enAz + 1 ) + enAz;
					password+=pass.at(t);
				} cout << "Şifreniz : " << password << endl;
				cout << "Your Password : " << password << endl;
			break;

		case 15:
			for(int i=0;i<=15;i++){
					t=rand() % (enCok - enAz + 1 ) + enAz;
					password+=pass.at(t);
				} cout << "Şifreniz : " << password << endl;
				cout << "Your Password : " << password << endl;
			break;

		case 16:
			for(int i=0;i<=16;i++){
					t=rand() % (enCok - enAz + 1 ) + enAz;
					password+=pass.at(t);
				} cout << "Şifreniz : " << password << endl;
				cout << "Your Password : " << password << endl;
			break;

		default:
		cout << "Geçersiz bir sayı girdiniz. You entered an invalid number." << endl;

		}
	}

	else if(str==hayir || str==no){
		int max=17,min=8;
		sw=rand() % (max-min)+min;
		switch(sw){
				case 8:
					for(int i=0;i<=8;i++){
							t=rand() % (enCok - enAz + 1 ) + enAz;
							password+=pass.at(t);
						} cout << "Şifreniz : " << password << endl;
						cout << "Your Password : " << password << endl;
						break;
				case 9:
					for(int i=0;i<=9;i++){
							t=rand() % (enCok - enAz + 1 ) + enAz;
							password+=pass.at(t);
						} cout << "Şifreniz : " << password << endl;
						cout << "Your Password : " << password << endl;
						break;
				case 10:
					for(int i=0;i<=10;i++){
							t=rand() % (enCok - enAz + 1 ) + enAz;
							password+=pass.at(t);
						} cout << "Şifreniz : " << password << endl;
						cout << "Your Password : " << password << endl;
						break;

				case 11:
					for(int i=0;i<=11;i++){
							t=rand() % (enCok - enAz + 1 ) + enAz;
							password+=pass.at(t);
						} cout << "Şifreniz : " << password << endl;
						cout << "Your Password : " << password << endl;
						break;
				case 12:
					for(int i=0;i<=12;i++){
							t=rand() % (enCok - enAz + 1 ) + enAz;
							password+=pass.at(t);
						} cout << "Şifreniz : " << password << endl;
						cout << "Your Password : " << password << endl;
						break;

				case 13:
					for(int i=0;i<=13;i++){
							t=rand() % (enCok - enAz + 1 ) + enAz;
							password+=pass.at(t);
						} cout << "Şifreniz : " << password << endl;
						cout << "Your Password : " << password << endl;
					break;

				case 14:
					for(int i=0;i<=14;i++){
							t=rand() % (enCok - enAz + 1 ) + enAz;
							password+=pass.at(t);
						} cout << "Şifreniz : " << password << endl;
						cout << "Your Password : " << password << endl;
					break;

				case 15:
					for(int i=0;i<=15;i++){
							t=rand() % (enCok - enAz + 1 ) + enAz;
							password+=pass.at(t);
						} cout << "Şifreniz : " << password << endl;
						cout << "Your Password : " << password << endl;
					break;

				case 16:
					for(int i=0;i<=16;i++){
							t=rand() % (enCok - enAz + 1 ) + enAz;
							password+=pass.at(t);
						} cout << "Şifreniz : " << password << endl;
						cout << "Your Password : " << password << endl;
					break;

				default:
				cout << "Geçersiz bir sayı girdiniz. You entered an invalid number." << endl;

				}
	}
	else cout << "Geçersiz değer. Invalid value" << endl;

	return 0;
}
