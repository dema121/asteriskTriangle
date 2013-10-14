#include <iostream>

using namespace std;
int nrighe;
int main()
{

    cout<<"Inserire numero di base: ";
    cin>>nrighe;
    cout<<endl;
    for (int ir=0; ir<nrighe; ir++){
        for (int ic=0; ic<nrighe-ir;ic++){
            cout<<" ";
        }
        for(int ia=0; ia<=ir;ia++){
            cout<<"* ";
        }
        cout<<endl;
    }
    char anotherCheck;
    cout<<"Vuoi eseguire un'altro triangolo? y,n ";
    cin>>anotherCheck;
    if (anotherCheck=='y'){
        main();
    }
    return 0;
}
