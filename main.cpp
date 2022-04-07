#include "class.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int arr[9] = {200000000,123000222,221001005,115678441,115678341,333221440,214151626,1113339999,222626444};
    std::string st[5] = {"123456777","222111331","444111221","44848944","123919955"};
	LinkedListInt li;
	LinkedListString li2;
    li = create_linkedlist_int(arr,9);
    li2 = create_linkedlist_str(st,5); 
    li.show();
    li2.show();
    system("pause");
    return 0;

}
