#include <iostream>
#include <thread>
#include <chrono>

using namespace std

// Fungsi text
void renkiefek() {
    string nomordigital = "01"
    int panjangnmr = nomordigital.length()

    for (int i = 0 i < 100 ++i) {
        for (int j = 0 j < 50 ++j) {
            cout << nomordigital[rand() % panjangnmr]
        }
        cout << endl
        this_thread::sleep_for(chrono::milliseconds(30))
    }
}

// Fungsi untuk menampilkan animasi ledakan
void meledak() {
    string duarmemek = "   . . .\n"
                       " \\       /\n"
                       " - o - o -\n"
                       " /       \\\n"
                       "   '   '\n"

    cout << "\033[2J\033[11H" 
    cout << duarmemek
    this_thread::sleep_for(chrono::milliseconds(500))
}

// Fungsi Animasi
void animasiBurung() {
    string burung = " ^>^ "
    for (int i = 0 i < 5 ++i) {
        cout << "\033[2J\033[11H" 
        for (int j = 0 j < i ++j) {
            cout << endl
        }
        cout << burung << endl
        this_thread::sleep_for(chrono::milliseconds(200))
    }
}
/*
BY RENKI
*/
int main() {
    string logo =
        "██████╗ ███████╗███╗   ██╗██╗  ██╗██╗           \n"
        "██╔══██╗██╔════╝████╗  ██║██║ ██╔╝██║\n"
        "██████╔╝█████╗  ██╔██╗ ██║█████╔╝ ██║\n"
        "██╔══██╗██╔══╝  ██║╚██╗██║██╔═██╗ ██║\n"
        "██║  ██║███████╗██║ ╚████║██║  ██╗██║\n"
        "╚═╝  ╚═╝╚══════╝╚═╝  ╚═══╝╚═╝  ╚═╝╚═╝\n"


    renkiefek()


    cout << logo


    animasiBurung()


    meledak()


    cout << "\033[2J\033[11H"


    cout << logo

    return 0
}
    
