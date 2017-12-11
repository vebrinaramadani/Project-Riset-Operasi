#include <iostream>

using namespace std;
int main()
{
	int pilih;
	float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v;
	menu:
	cout << "\n--------------------------------------------------------------------\n";
	cout << "---------------------------PROGRAM LINEAR---------------------------\n";
	cout << "--------------------------------------------------------------------\n";
	cout << "1.> Maksimasi\n";
	cout << "2.> Minimimasi\n";
	cout << "Pilihan : ";
	cin >> pilih;
	
	switch(pilih)
	{
		case 1 :
		{
			cout << "\n====================================================================\n";
			cout << "             Perhitungan Maksimasi Kuntungan Kain dan Wol\n";
			cout << "====================================================================\n";
			cout << endl;
			cout << "Masukkan Bahan Baku Kain \n";
			cout << "Bahan Baku Sutera                : "; 
			cin >> a;
			cout << "Bahan Baku Wol                   : ";
			cin >> b;
			cout <<"Maksimum Penyediaan Benang       : ";
			cin >> c;
			cout << "====================================================================" << endl;
			cout << "\nMasukkan Kebutuhan Jam Kerja \n";
			cout << "Tenaga Kerja Sutera              : ";
			cin >> d;
			cout <<"Tenaga Kerja Wol                 : ";
			cin >> e;
			cout << "Maksimum Penyediaan Tenaga Kerja : ";
			cin >> f;
			cout << "====================================================================" << endl;

			cout << "\n\n====================================================================\n";
			cout << "|     Bahan Sutera    ";
			cout << "|     Bahan Wol     ";
			cout << " |   Penyedian Benang    ";
			cout << "|\n";

			cout << "====================================================================\n";
			cout << "|     " << a << " kg";
			cout << "	      |     " << b << " kg";
			cout << "           |   " << c << " kg";
			cout << "               |      \n";

			cout << "====================================================================\n";
			cout << "\n\n====================================================================\n";
			cout << "|  Tenaga Kerja Sutera ";
			cout << "|  Tenaga Kerja Wol ";
			cout << "| Penyedian Tenaga Kerja";
			cout << "|\n";
	
			cout << "====================================================================\n";
			cout << "|  " << d << " jam";
			cout << "              |  " << e << " jam";
			cout << "             | " << f << " jam";
			cout <<	"                |\n";

			cout << "====================================================================\n";
			cout << endl;
			cout << "Masukkan Keuntungan Sutera dan Wol \n";
			cout << "Keuntungan Sutera               : ";
			cin >> t;
			cout << "Keuntungan Wol                  : ";
			cin >> u;
			cout << "====================================================================" << endl;

			cout << "\n\n====================================================================\n";
			cout << "|        Keuntungan Sutera        ";
			cout << "|        Keuntungan Wol       ";
			cout << "   |\n";

			cout << "====================================================================\n";
			cout << "|        " << t << " juta";
			cout << "                  |        " << u << " juta";
			cout << "                 |\n";

			cout << "====================================================================\n";
			cout << endl;

			g = a/a;
			h = b/a;
			i = c/a;
			j = d-(d*g);
			k = e-(d*h);
			l = f-(d*i);
			m = j/k;
			n = k/k;
			o = l/k;
			p = g-(h*m);
			q = h-(h*n);
			r = i-(h*o);
			s = (c-(b*o))/a;
			v = (t*s)+(u*o);
			cout << "\nHasil keuntungan optimal benang sutera dan wol : " << v << " juta" << endl;
			cout << "====================================================================\n\n";
		}
		break;
		
		case 2 :
		{
			cout << "\n====================================================================\n";
			cout << "        Perhitungan Minimimasi Kebutuhan Vitamin dan Protein \n";
			cout << "====================================================================\n";
			cout << endl;
			cout << "Masukkan Jenis Vitamin \n";
			cout << "Vitamin Royal Bee         : "; 
			cin >> a;
			cout << "Vitamin Royal Jelly	  : ";
			cin >> b;
			cout << "Kebutuhan Minimum Vitamin : ";
			cin >> c;
			cout << "====================================================================" << endl;
			cout << "\nMasukkan Jenis Protein \n";
			cout << "Protein Royal Bee         : ";
			cin >> d;
			cout << "Protein Royal Jelly       : ";
			cin >> e;
			cout << "Kebutuhan Minimum Protein : ";
			cin >> f;
			cout << "====================================================================" << endl;

			cout << "\n\n====================================================================\n";
			cout << "|     Royal Bee    ";
			cout << "|     Royal Jelly    ";
			cout << "|     Kebutuhan Vitamin    ";
			cout << "|\n";

			cout << "====================================================================\n";
			cout << "|     " << a << " unit";
			cout << "       |     " << b << " unit";
			cout << "         |     " << c << " unit";
			cout << "               |\n";
		
			cout << "====================================================================\n";

			cout << "\n\n====================================================================\n";
			cout << "|     Royal Bee    ";
			cout << "|     Royal Jelly    ";
			cout << "|     Kebutuhan Protein    ";
			cout << "|\n";

			cout << "====================================================================\n";
			cout << "|     " << d << " unit";
			cout << "       |     " << e << " unit";
			cout << "         |     " << f << " unit";
			cout << "              |\n";

			cout << "====================================================================\n";
			cout << endl;
			cout << "\nMasukkan Biaya Royal Bee dan Royal Jelly \n";
			cout << "Royal Bee      : ";
			cin >> t;
			cout << "Royal Jelly    : ";
			cin >> u;
			cout << "====================================================================\n\n" << endl;

			cout << "====================================================================\n";
			cout << "|             Royal Bee          ";
			cout << "|             Royal Jelly         ";
			cout << "|\n";

			cout << "====================================================================\n";
			cout << "|             " << t << "  ribu";
			cout << "          |             " << u << " ribu";
			cout << "             |\n";

			cout << "====================================================================\n";
			cout << endl;

			g = a/a;
			h = b/a;
			i = c/a;
			j = d-(d*g);
			k = e-(d*h);
			l = f-(d*i);
			m = j/k;
			n = k/k;
			o = l/k;
			p = g-(h*m);
			q = h-(h*n);
			r = i-(h*o);
			s = (c-(b*o))/a;
			v = (t*s)+(u*o);
			cout << "\nBiaya minimum kedua jenis vitamin dan protein adalah : " << v << " ribu" << endl;
			cout << "====================================================================\n\n";
		}
		break;
		default :
			cout << "\n\nPilihan yang Anda masukkan salah! Coba lagi\n";	
	}
	goto menu;
}
