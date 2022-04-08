#include <iostream>
#include <set>
#include <fstream>
#include <istream>
#include "d_graph.h"
#include "d_util.h"

using namespace std;

int main(){
filebuf file;
set<char> t;
graph<char> A;
file.open("graphA.dat",ios::in);
istream file2(&file);
file2 >> A;
file.close();
cout << A << endl;
A.insertEdge('F','D',1);
A.eraseVertex('B');
A.eraseEdge('A','D');
cout << "Input a vertex: ";
char ver;
cin >> ver;
cout << endl;
t = A.getNeighbors(ver);
set<char>::iterator setIter = t.begin();
while(setIter != t.end()){
cout << *setIter << " ";
setIter++;
}
cout << endl << endl;
A.insertVertex('G');
A.insertEdge('G','C',1);
A.insertEdge('G','F',1);
A.insertEdge('D','G',1);
cout << A << endl;
    return 0;
}
