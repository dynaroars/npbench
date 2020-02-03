#include <iostream.h>
#include <fstream.h>

int main(int argc, char *argv[]) {

	int edge[1000][1000] = {0};
	int i,j,e;
	int Nr_vert, in_edges;
	char filename[50];
	char str1[5], str2[10], linetype;
	int temp;

	if ( argc != 2) {
		cout << "Usage: " << argv[0] << " datafile \n";
		return 1;
	}

	ifstream indata(argv[1]);
	ofstream outdata;
	strcpy(filename, argv[1]);
	strcat(filename, "-compliment.txt");
	outdata.open(filename);

	if ( !indata.is_open() ) {
		cout << "Could not open input file.\n";
		return 1;
	}

	if ( !outdata) {
		cout << "Could not open output file. \n";
		return 1;
	}

	indata >> str1 >> str2 >> Nr_vert >> in_edges;
	temp = ((Nr_vert)*(Nr_vert - 1))/ 2 ;
	e = temp - in_edges;
	outdata << str1 << ' ' << str2 << ' ' << Nr_vert << ' ' << e << endl;


	for (e = 0; e < in_edges; e++) {
		if (indata.eof()) {
			cout << "Invalid input file. Not enough edges.\n";
			return 1;
		}

		indata >> linetype >> i >> j;
		edge[i][j] = 1;
	}
	
	indata.close();

	for (i=1; i<= Nr_vert; i++) {
		for (j=i+1; j<= Nr_vert; j++) {
			if ((edge[i][j] != 1) && (i != j)) {
				outdata << "p" << ' ' << i << ' ' << j << endl;
			}
		}
	}
}
