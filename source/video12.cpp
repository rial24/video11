
#include "libffmpeg1.h"
using namespace std;

int main()
{
    av_register_all();
	avcodec_register_all();
	avdevice_register_all();
	cout<<"\nall required functions are registered successfully"<<endl;  

    cout<<"proce1"<<endl;

    return 0;
}