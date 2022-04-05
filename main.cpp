#include "class.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
    nodeint n6(200000000);
    nodeint n7(123000222);
    nodeint n8(221001005);
    nodeint n9(115678441);
    nodeint n10(115678341);        
    node n1("200000000");
    node n2("123000222");
    node n3("221001005");
    node n4("115678441");
    node n5("115678341");
    LinkedListString li;
    LinkedListInt li2;
    li.add(n1);
    li.show();
    li.add(n2);
    li.show();
	li.add(n3);
	li.show();
    li.add(n4);
    li.show();
    li.add(n5);
    li.show();
    li2.add(n6);
    li2.show();
    li2.add(n7);
    li2.show();
    li2.add(n8);
    li2.show();
    li2.add(n9);
    li2.show();
    li2.add(n10);
    li2.show();
    return 0;

}
