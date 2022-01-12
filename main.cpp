#include <iostream>
#include <vector>
#include <string>



class Node
{
    bool numType;
    int numValue;
    char opValue;
    Node* parent;
    Node* leftSon;
    Node* rightSon;


public:
    Node();
    Node(Node* par, bool numType, int numValue, char opValue);

    bool get_numType(){return numType;}
    int get_num(){return numValue;}
    char get_op(){return opValue;}
    Node* get_rightSon(){return rightSon;}
    Node* get_leftSon(){return leftSon;}
    Node* get_parent(){return parent;}

    void get_numType(bool t){numType = t;}
    void get_num(int n){numValue = n;}
    void get_op(char o){opValue = o;}
    void get_rightSon( Node* rs){rightSon = rs;}
    void get_leftSon(Node* ls){leftSon = ls;}
    void get_parent(Node* p){parent = p;}
};

Node::Node()
{
    numType = true;
    numValue = 0;
    opValue = '.';
    parent = 0;
    leftSon = 0;
    rightSon = 0;
}


Node::Node(Node* par, bool t, int n, char o)
{
    numType = t;
    numValue = n;
    opValue = o;
    parent = par;
    leftSon = 0;
    rightSon = 0;
}

class BinT
{
    Node* root;

public:

    BinT(Node* ro);
    BinT();

    Node* get_root{return root;}
    void set_root(Node* ro){root = ro;}
};

BinT::BinT(Node* ro)
{
    root = ro;
}

BinT::BinT()
{
    root = nullptr;
}



int main()
{
    std::string typeStr;

    std::cin >> typeStr;

    BinT main;

    std::string informaition;

    std::getline(std::cin, information);

    if(typeStr == "prefix")
    {
        if(information[0] <= '9' && information[0] >= '0')
        {
            int n = 0;
            for(int i = 0; i < information.size(); i ++)
            {
                n *= 10;
                n += ((int)information[i] - 48);
            }

            Node base(true, n, '.');

            main.set_root(&base);
        }
        else
        {
            Node base(false, 0, information[0]);

            main.set_root(&base);

            information.erase(0, 2);

            Node* nowAt = main.get_root();

            int nowAtString = 0;

            int transCycleNumber = 0;

            while(nowAtString < information.size())
            {
                if(information[nowAtString] <= '9' && information[nowAtString] >= '0')
                {
                    transCycleNumber *= 10;
                    transCycleNumber += ((int)information[nowAtString] - 48);
                }

                if(information[nowAtString] == ' ')
                {
                    base.set_
                }



            }


        }



    }

}
