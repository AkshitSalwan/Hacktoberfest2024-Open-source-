#include<iostream>
#include<fstream>
#include<limits>
#include<string>

using namespace std;

int main(void){
    string opt;
    fstream *file = new fstream();

    file-> open("sample.txt",ios::app|ios::in);

    if(!file->is_open()){
        cerr<<"Unable to open the file\n";
        delete file;
        file= nullptr;
        return 0x0;
    }
    do{
        cout<<"Menu\n(W)rite\n(R)ead\n(Q)uit\n";
        getline(cin,opt);
        if(opt == "w"||opt == "W"){
            file->clear();
            file->seekp(0,ios::beg);
            string data;

            getline(*file,data);
            while(!file->eof()){
                cout<<data<<endl;
                getline(*file,data);
            }
        }
    }while(opt!="q"|| opt=="Q");
    file->close();
    delete file;
    file=nullptr;
    return 0x0;

}
