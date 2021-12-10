#include <iostream>
using namespace std;

int main(){
	//Stajyer IDleri (numaraları) 50 ile 150 arasinda (bu sayilar dahil) ve 5 in katlari olan sayilarken (50,55 ...)
	//Tam zamanli calisanlarin IDleri (numaraları) 3000 ile 3600 arasinda ve 3e bolunebilen sayilardir (3000,3003...)
	//flag=1 ise stajyer 0 ise tam zamanli
	cout << "Merhaba, Lutfen ID’nizi giriniz:" << endl;
	int id,flag=0,urun,adet;//tam sayi olarak kullanilacak degerler
	double ucret,ekle,x;//ucret girilen sayi veya urun fiyati*adet kusuratli olabilir.
	while(true){//geçerli id girisi icin sonsuz döngü
		cin >> id ;
	if(id>=50 && id<=150){//stajyer id secenegi
		if(id%5==0){
			flag=1;//stajyer olduguna karar verme
			break;//donguden cikma
		}
		else{ cout << "Geçersiz id. Lütfen tekrar giriniz." << endl;}
	}
	else if(id>=3000 && id<=3600){// tam zamanlı id secenegi
		if(id%3==0){
			flag=2;//tam zamanlı olduguna karar verme
			break;//donguden cikmak
		}
		else{ cout << "Geçersiz id. Lütfen tekrar giriniz" << endl;}
	}
	else{// geceersiz id
		cout << "Geçersiz id. Lütfen tekrar giriniz" << endl;
	}
	}
	switch(flag){//aldigimiz degere gore otomat fiyat belirleme
	case 1:{//stajyer fiyatlari
	cout << "Hosgeldiniz." << endl;
	cout << "Su icin 1 e basin (1 TL)" << endl;
	cout << "Cikolata icin 2'ye basin (2TL)" << endl;
	cout << "Maske icin 3'e basin (1TL)" << endl;
	cin >> urun;
	if(urun==1){//su secilirse
		cout << urun << "- (su) seçtiniz" << endl;
		cout << "Lutfen adeti giriniz." << endl;
		cin >> adet;
		x=1*adet;
		cout << adet <<" adet urun icin " << x << "TL odemeyi yapiniz." << endl;
		cin >> ucret;
		while(true){
			if(ucret>=x){
				cout << "Odemeniz alinmistir." << endl;
				cout << "Para üstünüz:" << ucret-x << endl;
				cout << "Tesekkurler. Yine bekleriz." << endl;
				break;
		}
			else{
				cout << "Yetersiz ücret girdiniz ekleme yapınız." << endl;
				cout << "Lütfen para ekleyiniz." << endl;
				cin >> ekle;
				cout << "Yeni bakiyeniz " << ucret+ekle << endl;
				ucret+=ekle;
			}
		}


	}
	else if(urun==2){//cikolata secilirse
		cout << urun << "- (cikolata) seçtiniz" << endl;
				cout << "Lutfen adeti giriniz." << endl;
				cin >> adet;
				x=2*adet;
				cout << adet <<" adet urun icin " << x << "TL odemeyi yapiniz." << endl;
				cin >> ucret;
				while(true){
					if(ucret>=x){
						cout << "Odemeniz alinmistir." << endl;
						cout << "Para üstünüz:" << ucret-x << endl;
						cout << "Tesekkurler. Yine bekleriz." << endl;
						break;
				}
					else{
						cout << "Yetersiz ücret girdiniz ekleme yapınız." << endl;
						cout << "Lütfen para ekleyiniz." << endl;
						cin >> ekle;
						cout << "Yeni bakiyeniz " << ucret+ekle << endl;
						ucret+=ekle;
					}
				}
	}
	else if(urun==3){//maske sevilirse
		cout << urun << "- (maske) seçtiniz" << endl;
						cout << "Lutfen adeti giriniz." << endl;
						cin >> adet;
						x=1*adet;
						cout << adet <<" adet urun icin " << x << "TL odemeyi yapiniz." << endl;
						cin >> ucret;
						while(true){
							if(ucret>=x){
								cout << "Odemeniz alinmistir." << endl;
								cout << "Para üstünüz:" << ucret-x << endl;
								cout << "Tesekkurler. Yine bekleriz." << endl;
								break;
						}
							else{
								cout << "Yetersiz ücret girdiniz ekleme yapınız." << endl;
								cout << "Lütfen para ekleyiniz." << endl;
								cin >> ekle;
								cout << "Yeni bakiyeniz " << ucret+ekle << endl;
								ucret+=ekle;
							}
						}
	}
	break;}
	case 2:{//tam zamanli fiyatlari
		cout << "Hosgeldiniz." << endl;
		cout << "Su icin 1 e basin (1.5 TL)" << endl;
		cout << "Cikolata icin 2'ye basin (3 TL)" << endl;
		cout << "Maske icin 3'e basin (1TL)" << endl;
		cin >> urun;
		if(urun==1){//su secilirse
				cout << urun << "- (su) seçtiniz" << endl;
				cout << "Lutfen adeti giriniz." << endl;
				cin >> adet;
				x=1.5*adet;
				cout << adet <<" adet urun icin " << x << "TL odemeyi yapiniz." << endl;
				cin >> ucret;
				while(true){
					if(ucret>=x){
						cout << "Odemeniz alinmistir." << endl;
						cout << "Para üstünüz:" << ucret-x << endl;
						cout << "Tesekkurler. Yine bekleriz." << endl;
						break;
				}
					else{
						cout << "Yetersiz ücret girdiniz ekleme yapınız." << endl;
						cout << "Lütfen para ekleyiniz." << endl;
						cin >> ekle;
						cout << "Yeni bakiyeniz " << ucret+ekle << endl;
						ucret+=ekle;
					}
				}


			}
			else if(urun==2){//cikolata secilirse
				cout << urun << "- (cikolata) seçtiniz" << endl;
						cout << "Lutfen adeti giriniz." << endl;
						cin >> adet;
						x=3*adet;
						cout << adet <<" adet urun icin " << x << "TL odemeyi yapiniz." << endl;
						cin >> ucret;
						while(true){
							if(ucret>=x){
								cout << "Odemeniz alinmistir." << endl;
								cout << "Para üstünüz:" << ucret-x << endl;
								cout << "Tesekkurler. Yine bekleriz." << endl;
								break;
						}
							else{
								cout << "Yetersiz ücret girdiniz ekleme yapınız." << endl;
								cout << "Lütfen para ekleyiniz." << endl;
								cin >> ekle;
								cout << "Yeni bakiyeniz " << ucret+ekle << endl;
								ucret+=ekle;
							}
						}
			}
			else if(urun==3){//maske sevilirse
				cout << urun << "- (maske) seçtiniz" << endl;
								cout << "Lutfen adeti giriniz." << endl;
								cin >> adet;
								x=1*adet;
								cout << adet <<" adet urun icin " << x << "TL odemeyi yapiniz." << endl;
								cin >> ucret;
								while(true){
									if(ucret>=x){
										cout << "Odemeniz alinmistir." << endl;
										cout << "Para üstünüz:" << ucret-x << endl;
										cout << "Tesekkurler. Yine bekleriz." << endl;
										break;
								}
									else{
										cout << "Yetersiz ücret girdiniz ekleme yapınız." << endl;
										cout << "Lütfen para ekleyiniz." << endl;
										cin >> ekle;
										cout << "Yeni bakiyeniz " << ucret+ekle << endl;
										ucret+=ekle;
									}
								}
	}
	}
	default: break;
}
}
