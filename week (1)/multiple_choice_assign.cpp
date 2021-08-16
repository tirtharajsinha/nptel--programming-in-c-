#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    char s[]="string";
    char* cp=s;
    for(;*cp!='\0';cp++);
    int i=cp-s;
    cout << i;
    return 0;
}

/*
int main()
{
    int size=3,c=65;
    vector<char> vc(size,'A');
    for (int i=1;i<=3;i++){
        vc.push_back(65+i);

    }
    vc.resize(10,88);
    vc.resize(8);
    for(int i=0;i<vc.size();i++){
        cout << vc[i] << " ";
    }

    return 0;
}
*/
// next
/*
struct sqr_share{int p;};
struct rect_share{int p,q;};
struct tri_share{int p,q,r;};

struct geoShape{
    enum type{SQR,REC,TRI};
    union shape{
        sqr_share s1;
        rect_share s2;
        tri_share s3;

    };
    type t;
    shape s;

};

int main(){
    // sizeof(int)=4;
    cout << sizeof(sqr_share) << "\n";
    cout << sizeof(rect_share) << "\n";
    cout << sizeof(tri_share) << "\n";
    cout << sizeof(geoShape) << "\n";

}
*/

/*
int main(){
    int data[]={1,2,3,4,5};
    int *data_list[5]={data+1,data+2,data+3,data+4,data};
    cout << *data_list[0] << " "<< data_list;
    int **data_ptr=data_list;
    cout << **(data_ptr+2)<<" - ";
    cout <<*++data_ptr[2];
    return 0;
}


int main()
{
    int data[]={10,20,30,40,50};
    for(int i=0;i<1;i++){
        int j=data[i];
        cout << data <<"\n"<< *(data+5) <<"\n"<< j <<"\n"<< *(data+4-i)<<"\n";
        replace(data,data+5,j,*(data+4-i));
        replace(&data[1+i],&data[5],&data[4-i],j);
        // replace
    }
    for(int i=0;i<5;++i){
        cout << data[i] << " ";
    }
    return 0;
}


*/



