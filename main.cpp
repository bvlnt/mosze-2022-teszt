#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];           // elmaradt "_"
    std::cout << "1-100 ertekek duplazasa"; // elmaradt ";", idézőjel ' helyett
    for (int i = 0; i <= N_ELEMENTS; i++)   // hiányos ciklus vezérlő
    {
        b[i] = i * 2;
    }
    for (int i = 0; i <= N_ELEMENTS; i++) // hibás ciklus vezérlő
    {
        std::cout << "Ertek:"; // elmaradt ";"
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;                       // kell kezdőérték
    for (int i = 0; i < N_ELEMENTS; i++) // , helyett ; kell
    {
        atlag += b[i]; // elmaradt ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    std::cout << std::string(5,"*") <<
                "END" <<
                std::string(5,"*") <<
                std::endl;
    return 0;
}
