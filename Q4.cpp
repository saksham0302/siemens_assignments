#include<bits/stdc++.h>

using namespace std;

//base class
class Engineering {

    public:

    //choice1 is used to ask reader whether he wants to continue reading more
    char choice1;

    //default constructor
    Engineering() {

        cout<<"Engineering is the use of scientific principles to design and build machines, structures, and other items, including bridges, tunnels, roads, vehicles, and buildings. The discipline of engineering encompasses a broad range of more specialized fields of engineering, each with a more specific emphasis on particular areas of applied mathematics, applied science, and types of application."<<endl;
        cout<<"\nMain branches of engineering: \n1. Computer Science Engineering \n2. Civil Engineering \n3. Electrical Engineering \n4. Mechanical Engineering \n5. Bioengineering"<<endl;
        cout<<"\nDo you want to know more about Computer science Engieering? (y/n) ";
        cin>>choice1;
    }
};

//derived from class Engieering
class computerSci : public Engineering {

    public:

    //choice2 is used to ask reader whether he wants to continue reading more
    char choice2;

    //default constructor
    computerSci() {

        if (choice1 == 'y') {

            cout<<"\nComputer Science Engineering (CSE) encompasses a variety of topics that relates to computation, like analysis of algorithms, programming languages, program design, software, and computer hardware. Computer Science engineering has roots in electrical engineering, mathematics, and linguistics. In the past Computer Science was taught as part of mathematics or engineering departments & in the recent days it has emerged as a separate engineering field."<<endl;
            cout<<"\nWithin CSE domain there are different areas you can work in, for example: \n1. Data Science\n2. Cyber Security\n3. Full Stack Web Development\n4. Machine Learning\n5. Software Methodologies and Testing"<<endl;
            cout<<"\nDo you want to know what is Data Science? (y/n) ";
            cin>>choice2;
        }

        else if (choice1 == 'n')
            cout<<"\nThat is engineering in brief!!"<<endl;
    }
};

//derived from class computerSci
class dataScience : public computerSci {

    public:

    //default constructor
    dataScience() {

        if (choice1 == 'y' && choice2 == 'y') {
            
            cout<<"\nData science is an interdisciplinary field that uses scientific methods, processes, algorithms and systems to extract knowledge and insights from noisy, structured and unstructured data, and apply knowledge from data across a broad range of application domains. Data science is related to data mining, machine learning and big data.";
            cout<<"\nAnd a data scientist is someone who creates programming code and combines it with statistical knowledge to create insights from data.";
        }

        else
            cout<<"\nThank You!!!!"<<endl;
    }
};

int main() {

    //initializing object to call constructors
    dataScience DS;

    return 0;
}