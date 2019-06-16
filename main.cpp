#include <iostream>
#include <fstream>
#include<cstdlib>

#include <termios.h>
#include <unistd.h>
#include <stdio.h>

#include <numeric>
#include <cmath>
#include <vector>
//#include <random>

#define pi 3.141592


#include <iostream>
//using namespace std;

//#include "test1.h"
//#include <iostream>

int main()
{
  int i = 1;
  int *p = &i;
  *p = 2;
  std::cout << "i: " << i << std::endl;
}

//int main()
//{
//  first_space::func();
//  second_space::func();
//}

//class Vector
//{
//public:
//    Vector(int a1, int a2, int a3, int a4)
//    {
//        m_nGril[0] = a1 ; m_nGril[1] = a2 ;
//        m_nGril[2] = a3 ; m_nGril[3] = a4 ;
//    }
//    int& operator[](int nIndex) ; // 重载数组下标运算符"[]"
//private:
//    int m_nGril[4] ;
//};
////重载数组下标运算符"[]"：
//
//int& Vector::operator[](int nIndex)
//{
//    if (nIndex < 0 || nIndex >= 4) // 数组越界检查
//    {
//        cout << "数组下标越界！" << endl ;
//        return m_nGril[0] ;
//    }
//    return m_nGril[nIndex];
//}
////测试代码：

//int main()
//{
//    Vector vt(0, 1, 2, 3);
//    cout << vt[2] << endl;
//    vt[3] = vt[2];
//    cout << vt[3] << endl;
//    vt[2] = 22;
//    cout << vt[2] << endl;
//
//    return 0;
//}

/* reads from keypress, doesn't echo */
//int getch(void)
//{
//    struct termios oldattr, newattr;
//    int ch;
//    tcgetattr( STDIN_FILENO, &oldattr );
//    newattr = oldattr;
//    newattr.c_lflag &= ~( ICANON | ECHO );
//    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
//    ch = getchar();
//    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
//    return ch;
//}

/* reads from keypress, echoes */
//int getche(void)
//{
//    struct termios oldattr, newattr;
//    int ch;
//    tcgetattr( STDIN_FILENO, &oldattr );
//    newattr = oldattr;
//    newattr.c_lflag &= ~( ICANON );
//    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
//    ch = getchar();
//    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
//    return ch;
//}

//int main()
//{
////    std::string s;
////    std::cin >> s;
////    if (s == "a")
////        std::cout << "left" << std::endl;
////    if (s == "d")
////        std::cout << "right" << std::endl;
//    while (1)
//    {
//        if (getch() == 'a')
//            std::cout << "left" << std::endl;
//        else
//        if (getch() == 's')
//            std::cout << "right" << std::endl;
//    }
//
//    return 0;
//}


//int main()
//{
////    std::srand(time(NULL));
//    for (int i = 0; i < 10; ++i)
//    {
////        double r = (68.556*std::rand()/RAND_MAX - 32.768);
//    std::srand(time(NULL));
//    int a = std::rand();
//        int b = (a%2 == 1) ? 1: -1;
//        std::cout << a << " " << b << std::endl;
//        usleep(500000); //1000ms
//    }
//    return 0;
//}

//int main()
//{

//    std::string s ="Hello world";
//
//    for (auto & c : s)
//    {
//        std::cout << "One character: " << c << "\n";
//    }

//    std::vector<double> v;
//    std::ifstream infile;
//    infile.open("../data.txt");
//    double tmp;
//    while(not infile.eof())
//    {
//        infile>>tmp;
////        std::cout << "tmp: " << tmp << std::endl;
//        v.push_back(tmp);
//    }
//
//    std::cout << v.size() << std::endl;
//    for(int i = 0; i < v.size(); i++)
//    {
//        std::cout << v[i] << " ";
//        if((i+1)%5 == 0)
//        {
//            std::cout << std::endl;
//        }
//    }
//
//    infile.close();

//    char f[]="../data.txt",buf[1024]={'\0'};
//    std::ifstream inf(f,std::ios_base::in);
//    std::string line;
//    while(!inf.eof())
//    {
//        inf.getline(buf,1024);
//        std::cout<<buf<<std::endl;
//    }

//    std::ifstream input("../data.txt");
//    std::string result;
//    std::string line;
//
//    while (std::getline(input, line))
//    {
//        result += line;
//    }
//
//    std::cout << result << std::endl;
//    double fitnessDirection;
//    double distProjection = 0.069826;
//    double distPath = 0.080086;
//    double alpha = 0.511679;
//    double ksi = 1.0;
//    double penalty = 0.000392;
//    fitnessDirection = std::abs(distProjection) / distPath *
//                       (distProjection / (alpha + ksi) - penalty);
//    fitnessDirection = 0.05 + fitnessDirection;
//    std::cout << fitnessDirection << std::endl;

//    std::srand(time(NULL));
//    int randomInter = std::rand();
//    double r = (double)(randomInter % 2000000) / 1000000;
//    std::cout << std::fixed << "randomInter = " << r << std::endl;
//    std::random_device rd;
//    for (int i= 0; i < 20; ++i)
//    {
//        double angle = pi * ((double) rd() / RAND_MAX -1);
//        std::cout << angle << std::endl;
//    }
//
//    std::vector<double> fitnesses(3);
//    std::cout << fitnesses.size() << std::endl;
//    double fitness1 = 0.002188;
//    double fitness2 = 0.004204;
//    double fitness3 = -0.002783;
////    double fitness4 = 0.004204;
////    double fitness5 = 0.002188;
//
//    fitnesses[0] = fitness1;
//    fitnesses[1] = fitness2;
//    fitnesses[2] = fitness3;
////    fitnesses[3] = fitness4;
////    fitnesses[4] = fitness5;
//
//    double fitnessesSum = std::accumulate(fitnesses.begin(),
//                                          fitnesses.end(),
//                                          0.0);
//    std::cout << std::fixed << "fitnessesSum  = " <<fitnessesSum<<std::endl;
//    double fitnessesMean = fitnessesSum / fitnesses.size();
//    std::cout << "fitnessesMean = " << fitnessesMean << std::endl;
//    //count the number of values more than average
//    int numPositive = 0;
//    int numNegative = 0;
//    double sumPositive = 0.0;
//    double sumNegative = 0.0;
//    for (int i = 0; i < fitnesses.size(); ++ i)
//    {
//        if (fitnesses[i] > 0)
//        {
//            numPositive = numPositive + 1;
//            sumPositive = sumPositive + fitnesses[i];
//        }
//        else
//        {
//            numNegative = numNegative + 1;
//            sumNegative = sumNegative + fitnesses[i];
//        }
//    }
//    std::cout << "numPositive = " << numPositive << std::endl;
//    std::cout << "sumPositive = " << sumPositive << std::endl;
//    std::cout << "numNegative = " << numNegative << std::endl;
//    std::cout << "sumNegative = " << sumNegative << std::endl;
//
//    //std::cout << "numMoreAver = " << numMoreAver << std::endl;
//    double sq_sum = std::inner_product(fitnesses.begin(),
//                                       fitnesses.end(),
//                                       fitnesses.begin(),
//                                       0.0);
//    double std_dev = std::sqrt(sq_sum/fitnesses.size() - fitnessesMean * fitnessesMean);
//    std::cout << "stdDeviation  = " << std_dev << std::endl;
//    double fitness;
//    if(numPositive > numNegative)
//    {
//        fitness = sumPositive/numPositive + fitnessesMean - 0.1 * std_dev;
//    }
//    else
//    {
//        fitness = sumNegative/numNegative + fitnessesMean - 0.1 * std_dev;
//    }
//
//    std::cout <<std::fixed << "fitness       = " << fitness << std::endl;


//    std::vector<double> fitnesses(3);
//
//    double fitness1 = -0.002188;
//    double fitness2 = 0.004204;
//    double fitness3 = -0.001783;

//    double fitness1 = 0.040982;
//    double fitness2 = 0.008196;
//    double fitness3 = 0.008492;
//
//    double fitness1 = 0.037292;
//    double fitness2 = 0.007458;
//    double fitness3 = 0.009147;
//    double fitness4 = 0.004204;
//    double fitness5 = 0.002188;
//
//    fitnesses[0] = fitness1;
//    fitnesses[1] = fitness2;
//    fitnesses[2] = fitness3;
////    fitnesses[3] = fitness4;
////    fitnesses[4] = fitness5;
//    int numPositive = 0;
//    int numNegative = 0;
//    double sumPositive = 0.0;
//    double sumNegative = 0.0;
//    for (int i = 0; i < fitnesses.size(); ++i)
//    {
//        if (fitnesses[i] > 0)
//        {
//            numPositive = numPositive + 1;
//            sumPositive = sumPositive + fitnesses[i];
//        }
//        else
//        {
//            numNegative = numNegative + 1;
//            sumNegative = sumNegative + fitnesses[i];
//        }
//    }
//    std::cout << "numPositive = " << numPositive
//              << ", sumPositive = " << sumPositive
//              << ", numNegative = " << numNegative
//              << ", sumNegative = " << sumNegative << std::endl;
//
//    std::cout << fitnesses.size() << std::endl;
//
//    double fitnessesSum = sumPositive * (double)numPositive / fitnesses.size() +
//                          (double)numNegative / fitnesses.size() * sumNegative;
//
////    double fitnessesSum = std::accumulate(fitnesses.begin(),
////                                          fitnesses.end(),
////                                          0.0);
//    std::cout << std::fixed << "fitnessesSum  = " <<fitnessesSum<<std::endl;
//    double fitnessesMean = fitnessesSum / fitnesses.size();
//    std::cout << "fitnessesMean = " << fitnessesMean << std::endl;
//
//    //std::cout << "numMoreAver = " << numMoreAver << std::endl;
//    double sq_sum = std::inner_product(fitnesses.begin(),
//                                       fitnesses.end(),
//                                       fitnesses.begin(),
//                                       0.0);
//    double std_dev = std::sqrt(sq_sum/fitnesses.size() -
//                               fitnessesMean * fitnessesMean);
//    std::cout << "stdDeviation  = " << std_dev << std::endl;
//
//    double fitness = fitnessesMean -  0.1 * std_dev;
//
//    std::cout <<std::fixed << "fitness       = " << fitness << std::endl;

    //double sum

//    std::ofstream fo;
//    fo.open("/Users/lan/.gazebo/plugins/cameraSingle_plugin/readtxt/data.txt",
//            std::ios::app);
//    bool stop = false;
//    while(!stop)
//    {
//        std::ofstream fo;
//        fo.open("/Users/lan/.gazebo/plugins/cameraSingle_plugin/readtxt/data.txt",
//                std::ios::trunc);
//        fo << 0.123 << std::endl;
//        //fo << 2000 << std::endl;
//        std::cout << "NO target! Searching" << std::endl;
//        //fo.close();
//
//        double a;
//        std::ifstream data;
//        data.open("/Users/lan/.gazebo/plugins/cameraSingle_plugin/readtxt/data.txt");
//        data >> a ;
//        //data.close();
//        usleep(1000000); //2000ms
//        std::cout << " a = " << a << std::endl;
//    }
//    return 0;
//}

//#include <iostream>
////#include <time.h>
////#include <stdio.h>
//
//int main(void)
//{
//    struct tm *local;
//    time_t t;
//    t=time(NULL);
//    local=localtime(&t);
//    printf("Local hour is: %d\n", local->tm_hour);
//    std::cout << "Local time is : " << local->tm_hour << " : " << local->tm_min << " : " << local->tm_sec << std::endl;
//    local=gmtime(&t);
//    printf("UTC hour is: %d\n", local->tm_sec);
//    while (1)
//    {
//        float vx = 2.0 * rand() / RAND_MAX - 1.0;
//        std::cout << "vx" << vx << std::endl;
//    }
//    //return 0;
//}