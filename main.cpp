#include "Class.h"
#include "Course.h"
#include "Schedule.h"
#include "Student.h"
#include "Subject.h"
#include "Reader.h"

#include <string>
#include <fstream>

using namespace std;

int main(void)
{

        Course course = Course();

        string filePath_1 = "C:\\Users\\Asus\\CLionProjects\\untitled\\classes_per_uc.csv";
        string filePath_2 = "C:\\Users\\Asus\\CLionProjects\\untitled\\classes.csv";
        string filePath_3 = "C:\\Users\\Asus\\CLionProjects\\untitled\\students_classes.csv";


        course = read_3(filePath_3,read_2(filePath_2,read_1(filePath_1,course)));// o input do 1 ficheiro ja funciona :D
        //read_2(filePath_2); // o input do 2 ficheiro ja funciona :D
        //read_3(filePath_3); // agora ja so falta guardar todos os conteudos nos sitios, fazer mais funçoes e tambem a interface grafica.
        return 0;
}


