#include <iostream>

using namespace std;

int main()
{

    string rac1 = "PC-01";
    int ramGB =16;
    bool ssd1 = true;

    cout << "Racunalo: " << rac1 << " ima " << ramGB << " rama i ima ssd: " << ssd1 << endl;

     rac1 = "PC-02";
     ramGB =8;
     ssd1 = true;

    cout << "Racunalo: " << rac1 << " ima " << ramGB << " rama i ima ssd: " << ssd1 << endl;

     rac1 = "PC-03";
     ramGB =32;
     ssd1 = true;

    cout << "Racunalo:" << rac1 << " ima " << ramGB << " rama i ima ssd: " << ssd1 << endl;

     rac1 = "PC-04";
     ramGB =8;
     ssd1 = false;

    cout << "Racunalo: " << rac1 << " ima " << ramGB << " rama i ima ssd: " << ssd1 << endl;

     rac1 = "PC-05";
     ramGB =16;
     ssd1 = false;

    cout << "Racunalo: " << rac1 << " ima " << ramGB << " rama i ima ssd: " << ssd1 << endl;
    return 0;
}
