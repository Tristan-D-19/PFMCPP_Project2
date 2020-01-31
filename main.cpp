#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 int
 bool
 char
 double 
 float
 unsigned int
 
 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function

3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */
struct Arm 
{

};
//2)
void variableDeclarations()
{
    //example:
    
    int length = 10;
    int score = 20; 
    int height = -11; 
 
    char nameOfSchool [] = {'r', 'o', 'v', 'e', 'r'};
    char firstIntitial = 't';
    char classRoom [] = {'1', 'E'};

    float frequency = 67.897652;
    float exactMiles = 3.6456;
    float pointsInPercentage = 2.534;

    double refund = 3.53;
    double cashAllowance = 2000.324;
    double distanceTraveled = 1.3515;

    bool isReady = true;
    bool isFloating = true;
    bool isEmpty = true;

    unsigned int volumeOfStock = 3400;
    unsigned int popultionEstimatedToDie = 78;
    unsigned int stepsTaken = 5000;

    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void openShop(int storeOwnerId, int shopId, char region= 'u')
{ 
 
    ignoreUnused(storeOwnerId, shopId, region );
}


/*
 2)
 */
double rotateArm(int armLength = 5  , double degrees = 30)
{ 
    ignoreUnused(armLength, degrees );
    return 0;
}
/*
 3)
 */
bool grabItem(float direction, bool gripped= false )
{ 
    ignoreUnused(direction, gripped);
    return true;
}
/*
 4)
 */

int countSheep(int stableId, int stableSize=0)
{ 
    ignoreUnused(stableId, stableSize);
    return 0;
}
/*
 5)
 */
bool blendMix(int trackNumber, bool blendSuccess = false)
{
    ignoreUnused(trackNumber, blendSuccess);
    return blendSuccess;
}
/*
 6)
 */
void panTrack(char direction, float amountOfPan = 0)
{ 
    ignoreUnused(direction, amountOfPan);
}
/*
 7)
 */
float highPassFilter(double cutOffFreq = 500)
{ 
    ignoreUnused(cutOffFreq);
    return {};
}
/*
 8)
 */
float lowPassFilter(double cutOffFreq = 200)
{ 
    ignoreUnused(cutOffFreq);
    return {};
}
/*
 9)
 */
bool createTrack(int inputChannel, int outputChannel = 0)
{ 
    ignoreUnused(inputChannel, outputChannel);
    return false;
}
/*
 10)
 */
void createBounce(double audioFormat = 44.1, int bounceChannel = 0)
{ 
    ignoreUnused(audioFormat, bounceChannel);
}


int main()
{
    //example of calling that function
    rentACar(6, 2);   
    //1)
    openShop( 1,  1,  'l');
    //2)
    rotateArm(4, 45);
    //3)
    grabItem(-22, true);
    //4)
    countSheep(9,400);
    //5)
    blendMix(22, true);
    //6)
    panTrack('l', 333.55f);
    //7)
    highPassFilter(555.66);
    //8)
    lowPassFilter(100.456);
    //9)
    createTrack(3, 0);
    //10)
    createBounce();
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
