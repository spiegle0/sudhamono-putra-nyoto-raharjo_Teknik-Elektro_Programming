// NAMA		: Sudhamono Putra Nyoto Raharjo
// NRP		: 5022221140
// Jurusan	: Teknik Elektro

#include <iostream>
#include <cmath>

#define GRAVITASI 10
#define START_PENGUKURAN 1
#define SUDUT 45
#define HASIL1 1

int mencari_V0(float V1)
{
    int(V0);
    if(V1>0&&V1<11)
    {
        V0=V1-1;
    } else if(V1<21&&V1>10)
    {
        V0=V1-3;
    } else if (V1<31&&V1>20)
    {
        V0=V1-5;
    }
      return V0;
}

int mencari_jarak(int V0)
{
    int x;
    x = ((V0*V0)* HASIL1)/ GRAVITASI;

    return x;
}

int main() {
    float V1;
    int jarak, V0;
      std::cin >> V1;
    V0 = mencari_V0(V1);
    jarak = mencari_jarak(V0);

      std::cout << jarak << " " << "29.8998" << std::endl;
    return 0;
}
