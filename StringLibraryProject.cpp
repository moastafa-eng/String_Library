#include <iostream>
#include "String Library.h"

using namespace std;
int main()
{

    ClsString String("Mostafa Fayez Abd El Aziz Kasem Hamad");

    cout << "\t\t\t\t-----------------------\n";
    cout << "\t\t\t\t    STRING LIBRARY";
    cout << "\n\t\t\t\t-----------------------\n\n";

    cout << "Text length using a static method : " << ClsString::Length("Mostafa fayez") << endl;
    cout << "Text lenght using non_static method : " << String.Length() << endl;
    cout << '\n';

    cout << "Count words using a static method : " << ClsString::CountWords("Hi, my name is Mostafa") << endl;
    cout << "Count wrods using non_static method : " << String.CountWords() << endl;
    cout << '\n';

    cout << "Upper first letter of each word using static method : " << ClsString::UpperFirstLetterOfEachword("mostafa fayez") << endl;
    cout << "upper first letter for each word using non_static method : " << String.UpperFirstLetterOfEachword() << endl;
    cout << '\n';
    
    cout << "Lower first letter of each word using static method : " << ClsString::LowerFirstLetterOfEachword("Mostafa Fayez") << endl;
    cout << "Lower first letter for each word using non_static method : " << String.LowerFirstLetterOfEachword() << endl;
    cout << '\n';

    cout << "Upper all string usign static method : " << ClsString::UpperAllString("mostafa fayez") << endl;
    cout << "Upper all string using non_static method : " << String.UpperAllString() << endl;
    cout << "\n";

    cout << "Lower all string usign static method : " << ClsString::LowerAllString("mostafa fayez") << endl;
    cout << "Lower all string using non_static method : " << String.LowerAllString() << endl;
    cout << '\n';

    cout << "Invert letter case using static method : " << ClsString::InvertLetterCase('L') << endl;
    cout << '\n';

    cout << "Invert all letters case using static method : " << ClsString::InvertAllLetterCase("Mostafa Fayez") << endl;
    cout << "Invert All letters case using non_static method : " << String.InvertAllLetterCase() << endl;
    cout << '\n';

    cout << "Count letters using staitc method : " << ClsString::CountLetters("Mostafa Fayez") << endl;
    cout << '\n';

    cout << "Count capital letters using static method : " << ClsString::CountCapitalLetters("Mostafa Fayez") << endl;
    cout << "Count capital letters using not_static method : " << String.CountCapitalLetters() << endl;
    cout << '\n';

    cout << "Count small letters using static method : " << ClsString::CountSmallLetters("Mostafa Fayz") << endl;
    cout << "Count small letters using non_static method : " << String.CountSmallLetters() << endl;
    cout << '\n';

    cout << "Count specifice letters using static method : " << ClsString::CountSpecificeLetters("Mostafa fayez", 'f') << endl;
    cout << "Count specifice letters using non_static method : " << String.CountSpecificeLetters('M') << endl;
    cout << '\n';

    cout << "is letter vowel using static method : " << ClsString::IsVowel('o') << endl;
    cout << '\n';

    cout << "Count vowel Letters using static method : " << ClsString::CountVowels("Mostafa Fayez") << endl;
    cout << "Count vowel letters using non_static method : " << String.CountVowels() << endl;
    cout << '\n';

    vector <string> vSplit1 = ClsString::Split("Mostafa Fayez", " ");

    cout << "Split string using static method : " << endl;
    for (string S1 : vSplit1)
    {
        cout << S1 << endl;
    }
    vector <string> vSplit2 = String.Split(" ");

    cout << "Split string using non_static method : " << endl;
    for (string S1 : vSplit2)
    {
        cout << S1 << endl;
    }
    cout << '\n';

    cout << "Trim left string using static method : " << ClsString::TrimLeft("  Mostafa ") << endl;
    cout << "Trim left string suing non_static method : " << String.TrimLeft() << endl;
    cout << '\n';

    cout << "Trim Right string using static method : " << ClsString::TrimRight("Mostafa   ") << endl;
    cout << "Trim Right string Using non_static method : " << String.TrimRight() << endl;
    cout << '\n';

    cout << "Trim string using static method : " << ClsString::Trim("   Mostafa   ") << endl;
    cout << "Trim string Using non_static method : " << String.Trim() << endl;
    cout << '\n';

    vector <string> vString = { "Mostafa", "Fayez", "Kasem" };
    string ArrString[3] = { "Mostafa", "Fayez", "Kasem" };

    cout << "Join string using static method : " << ClsString::JoinString(vString, " ") << endl;
    cout << "Join string using static method : " << ClsString::JoinString(ArrString, 3, ",") << endl;
    cout << '\n';

    cout << "Revers words in string using static method : " << ClsString::ReversWrodsInString("I love programming") << endl;
    cout << "Revers words in string using non_static method : " << String.ReversWrodsInString() << endl;
    cout << '\n';

    cout << "Replace word in string using static method : " << ClsString::ReplaceWrodInString("I love Programming", "Programming", "C++") << endl;
    cout << "Replace word in string using non_static method : " << String.ReplaceWrodInString("Fayez", "Fawzey") << endl;
    cout << '\n';

    cout << "Remove punctuations using static method : " << ClsString::RemovePanctuations("I, Love Programming") << endl;
    cout << "Remove punctuations using non_static method : " << String.RemovePanctuations() << endl;
    cout << '\n';

    system("Pause > 0");

    return 0;

}
