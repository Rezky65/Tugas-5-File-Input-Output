// Merekam atau menulis File Text
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
 main()
{

cout << "Latihan Merekam data ke file\n";
ofstream latihan ("datateks.txt");
for (int i=1; i<=10; i++)
{
latihan << "Belajar File" << endl;
}
cout << "Data telah selesai direkam"<< endl;
latihan.close();
getch();
}
