#include <iostream>
using namespace std;

// Şifre tanımlama
string girisiki;
int giris;
string sifre;

int main() {
    cout << "                      -------------------------" << endl;
    cout << "                   HACK Tool Yapımcı (X BY HACKER)" << endl;
    cout << "                            version: 1.1.1" << endl;
    cout << "                      -------------------------" << endl;  
    
    cout << "Lütfen Şifreyi giriniz: ";
    cin >> sifre;

    if (sifre == "XBYHACKER:)") {
        cout << "Giriş yapıldı!!! Not: Bu uygulamaya girdiniz an sorumluluk bizde değil sizde!!!" << endl;
        cout << "SİZİN YAPTIKLARINIZDAN BİZ SORUMLU DEĞİLİZ!!! EĞİTİM AMAÇLI!!!" << endl << endl;
        cout << "-----TOOL'LAR-----" << endl;

        cout << "1. ZPHİSHER Tool " << endl;
        cout << "2. Vürüs apk Tool" << endl;
        cout << "3. DDOS Tool" << endl;
        cout << "4. SQLMAP Tool (YENİ !!!)" << endl;
        cout << "5. Word list Tool (YENİ !!!)" << endl;
        cout << "6. VİRUSLU mesaj Tool (YAPIMDA)" << endl;
        cout << "7. X BY HACKER VİRÜSÜ (YAPIMDA!!!)" << endl;
        cout << "8. YENİLİKLER !!!" << endl;
        cout << "Lütfen bir tane tool seçiniz: ";
        cin >> giris;

        switch (giris) {
            case 1:
                cout << "ZPHİSHER TOOL İÇİN" << endl;
                cout << "Şu linki kopyalayın: https://github.com/htr-tech/zphisher" << endl;
                cout << "------------------------------Adımlar------------------------------" << endl;
                cout << "1. apt update" << endl;
                cout << "2. apt upgrade" << endl;
                cout << "3. pkg install" << endl;
                cout << "4. git clone (link'i yapıştırın)" << endl;
                cout << "5. ls" << endl;
                cout << "6. cd zphisher" << endl;
                cout << "7. bash zphisher.sh" << endl;
                cout << "8. Buraya kadar kanala abone ol X BY HACKER, sorun varsa yorumlara yazın." << endl;
                break;

            case 2:
                cout << "VİRUS APK TOOL İÇİN" << endl;
                cout << "Şu linki kopyalayın: https://github.com/Devil-Tigers/TigerVirus.git" << endl;
                cout << "------------------------------Adımlar------------------------------" << endl;
                cout << "1. apt update" << endl;
                cout << "2. apt upgrade -y" << endl;
                cout << "3. pkg install git -y" << endl;
                cout << "4. git clone (link'i yapıştırın)" << endl;
                cout << "5. ls" << endl;
                cout << "6. cd TigerVirus" << endl;
                cout << "7. bash TigerVirus.sh" << endl;
                cout << "8. Buraya kadar kanala abone ol X BY HACKER, sorun varsa yorumlara yazın." << endl;
                break;

            case 3:
                cout << "DDOS TOOL İÇİN" << endl;
                cout << "Şu linki kopyalayın: https://github.com/Bhai4You/Mr.Bat.git" << endl;
                cout << "------------------------------Adımlar------------------------------" << endl;
                cout << "1. apt update && apt upgrade" << endl;
                cout << "2. apt install python2" << endl;
                cout << "3. apt install git" << endl;
                cout << "4. git clone (link'i yapıştırın)" << endl;
                cout << "5. cd Mr.bat" << endl;
                cout << "6. chmod +x mr-bat.py" << endl;
                cout << "7. python2 mr-bat.py" << endl;
                cout << "8. Buraya kadar kanala abone ol X BY HACKER, sorun varsa yorumlara yazın." << endl;
                break;

            case 4:
                cout << "SQLMAP TOOL İÇİN" << endl;
                cout << "------------------------------Adımlar------------------------------" << endl;
                cout << "1. apt update" << endl;
                cout << "2. apt upgrade" << endl;
                cout << "3. apt install python3" << endl;
                cout << "4. git clone https://github.com/sqlmapproject/sqlmap" << endl;
                cout << "5. cd sqlmap" << endl;
                cout << "6. python3 sqlmap.py" << endl;
                cout << "7. Buraya kadar kanala abone ol X BY HACKER, sorun varsa yorumlara yazın." << endl;
                break;

            case 5:
                cout << "WORD LİST TOOL İÇİN" << endl;
                cout << "link: (GEREKMEZ!!!)" << endl;
                cout << "1. pkg update " << endl;
                cout << "2. pkg upgrade " << endl;
                cout << "3. pkg install python (biraz uzun sürebilir.)" << endl;
                cout << "4. pip install wordlist" << endl;
                cout << "Word list oluşturmak için adımlar" << endl << endl;
                cout << "1. wordlist -m4 -M6 -o örnek.txt örnek123" << endl;
                cout << "2. ls" << endl;
                cout << "3. örnek.txt kopyalayın" << endl;
                cout << "4. cat örnek.txt" << endl;
                cout << "5. Buraya kadar kanala abone ol X BY HACKER, sorun varsa yorumlara yazın." << endl;
                break;

            case 6:
                cout << "VİRUSLU MESAJ İÇİN !!!" << endl;
                cout << "1. kolay virus" << endl;
                cout << "Lütfen seçiniz: ";
                cin >> girisiki;
                if (girisiki == "1") {
                    cout << "       kopyalayın VE HEDEF KİŞİYE ATIN SAKIN SİZ AÇMAYIN!!!: " << endl;
                    cout << "       BİR TANE SEÇİNİZ VEYA İKİSİDE OLUR"  << endl;
                    cout << "Mpj.tigerbomb.com" << endl;
                    cout << "https://images.app.goo.gl/akudJV6uUj8KtuKKA\n";
                    cout << "Buraya kadar kanala abone ol X BY HACKER, sorun varsa yorumlara yazın.";
                    break;
                }
                case 7:
                   cout << "YAPILIYOR..." << endl;
                   cout << "BAŞARISIZ. YAPIMDA!!!";
                   break;
                
                case 8:
                   cout << "YENİLİKLER !!!" << endl;
                   cout << "1. sqlmap YAPILDI !!!" << endl;
                   cout << "2. wordlist EKLENDİ !!!\n";
                   cout << "3. YENİLİKLER EKLENDİ !!!\n";
                   cout << "4. ANA MENU DÜZENLENDİ !!" << endl;
                   cout << "  X BY HACKER TARAFINDAN YAPILDI:)";
                break;

            default:
                cout << "GEÇERSİZ SEÇENEK !!!" << endl;
        }
    } else {
        cout << "ŞİFRE YANLIŞ!!!" << endl;
    }
}
