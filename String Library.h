#pragma once
#include <iostream>
#include <vector>

using namespace std;

class ClsString
{
private:

	string _Text;

public:

	ClsString()
	{
		_Text = "";
	}

	ClsString(string Text)
	{
		_Text = Text;
	}

	string GetText()
	{
		return _Text;
	}

	void SetText(string Text)
	{
		_Text = Text;
	}

	_declspec(property(get = GetText, put = SetText)) string Text;

	static short Length(string S1)
	{
		return S1.length();
	}

	short Length()
	{
		return _Text.length();
	}

	static short CountWords(string S1)
	{
		short Count = 0;
		string sWord;
		short Pos = 0;
		string Delim = " ";

		while ((Pos = S1.find(Delim)) != std::string::npos)
		{
			sWord = S1.substr(0, Pos);

			if (sWord != "")
			{
				Count++;
			}

			S1.erase(0, Pos + Delim.length());
		}

		if (S1 != "")
		{
			Count++;
		}

		return Count;
	}

	short CountWords()
	{
		return CountWords(_Text);
	}

	static string UpperFirstLetterOfEachword(string S1)
	{
		bool IsFirstLetter = true;

		for (int i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ' && IsFirstLetter)
			{
				S1[i] = toupper(S1[i]);
			}

			IsFirstLetter = (S1[i] == ' ' ? true : false);
		}

		return S1;
	}

	string UpperFirstLetterOfEachword()
	{
		return UpperFirstLetterOfEachword(_Text);
	}

	static string LowerFirstLetterOfEachword(string S1)
	{
		bool IsFirstLetter = true;

		for (int i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ' && IsFirstLetter)
			{
				S1[i] = tolower(S1[i]);
			}

			IsFirstLetter = (S1[i] == ' ' ? true : false);
		}

		return S1;
	}

	string LowerFirstLetterOfEachword()
	{
		return LowerFirstLetterOfEachword(_Text);
	}

	static string UpperAllString(string S1)
	{
		for (int i = 0; i < S1.length(); i++)
		{
			S1[i] = toupper(S1[i]);
		}

		return S1;
	}

	string UpperAllString()
	{
		return UpperAllString(_Text);
	}

	static string LowerAllString(string S1)
	{
		for (int i = 0; i < S1.length(); i++)
		{
			S1[i] = tolower(S1[i]);
		}

		return S1;
	}

	string LowerAllString()
	{
		return LowerAllString(_Text);
	}

	static char InvertLetterCase(char Char1)
	{
		return isupper(Char1) ? tolower(Char1) : toupper(Char1);
	}

	static string InvertAllLetterCase(string S1)
	{
		for (int i = 0; i < S1.length(); i++)
		{
			S1[i] = InvertLetterCase(S1[i]);
		}

		return S1;
	}

	string InvertAllLetterCase()
	{
		return InvertAllLetterCase(_Text);
	}

	enum enWhatToCount { SmallLetters = 0, CapitalLetters = 1, All = 2 };

	static short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::CapitalLetters)
	{

		short Count = 0;

		if (WhatToCount == enWhatToCount::All)
		{
			return S1.length();
		}

		for (int i = 0; i < S1.length(); i++)
		{
			if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))
			{
				Count++;
			}

			if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
			{
				Count++;
			}
		}

		return Count;
	}

	static short CountCapitalLetters(string S1)
	{
		short Count = 0;

		for (int i = 0; i < S1.length(); i++)
		{
			if (isupper(S1[i]))
			{
				Count++;
			}
		}

		return Count;
	}

	short CountCapitalLetters()
	{
		return CountCapitalLetters(_Text);
	}

	static short CountSmallLetters(string S1)
	{
		short Count = 0;

		for (int i = 0; i < S1.length(); i++)
		{
			if (islower(S1[i]))
			{
				Count++;
			}
		}

		return Count;
	}

	short CountSmallLetters()
	{
		return CountSmallLetters(_Text);
	}

	static short CountSpecificeLetters(string S1, char Letter, bool MatchCase = true)
	{
		short Count = 0;

		for (int i = 0; i < S1.length(); i++)
		{
			if (MatchCase)
			{
				if (S1[i] == Letter)
				{
					Count++;
				}
			}
			else
			{
				if (tolower(S1[i]) == tolower(Letter))
				{
					Count++;
				}
			}
		}

		return Count;
	}

	short CountSpecificeLetters(char Letter, bool MatchCase = true)
	{
		return CountSpecificeLetters(_Text, Letter, MatchCase);
	}

	static bool IsVowel(char Char1)
	{
		Char1 = tolower(Char1);

		return (Char1 == 'i') || (Char1 == 'e') || (Char1 == 'a') || (Char1 == 'o') || (Char1 == 'u');
	}

	static short CountVowels(string S1)
	{
		short Count = 0;

		for (int i = 0; i < S1.length(); i++)
		{
			if (IsVowel(S1[i]))
			{
				Count++;
			}
		}

		return Count;
	}

	short CountVowels()
	{
		return CountVowels(_Text);
	}

	static vector <string> Split(string S1, string Delim)
	{
		vector <string> vString;

		short Pos = 0;
		string Sword;

		while ((Pos = S1.find(Delim)) != std::string::npos)
		{
			Sword = S1.substr(0, Pos);

			if (Sword != "")
			{
				vString.push_back(Sword);
			}

			S1.erase(0, Pos + Delim.length());

		}

		if (S1 != "")
		{
			vString.push_back(S1);
		}

		return vString;
	}

	vector <string> Split(string Delim)
	{
		return Split(_Text, Delim);
	}

	static string TrimLeft(string S1)
	{
		for (int i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ')
			{
				return S1.substr(i, S1.length() - i);
			}
		}

		return "";
	}

	string TrimLeft()
	{
		return TrimLeft(_Text);
	}

	static string TrimRight(string S1)
	{



		for (int i = S1.length(); i > 0; i--)
		{
			if (S1[i] != ' ')
			{
				return S1.substr(0, i + 1);
			}
		}

		return "";
	}

	string TrimRight()
	{
		return TrimRight(_Text);
	}

	static string Trim(string S1)
	{
		return (TrimLeft(TrimRight(S1)));
	}

	string Trim()
	{
		return Trim(_Text);
	}

	static string JoinString(vector <string> vString, string Delim)
	{
		string S = "";

		for (string s : vString)
		{
			S = S + s + Delim;
		}

		return S.substr(0, S.length() - Delim.length());
	}

	static string JoinString(string ArrString[], short Length, string Delim)
	{
		string S = "";

		for (int i = 0; i < Length; i++)
		{
			S = S + ArrString[i] + Delim;
		}

		return S.substr(0, S.length() - Delim.length());
	}

	static string ReversWrodsInString(string S1)
	{
		string s = "";
		vector <string> vString;

		vString = Split(S1, " ");

		vector <string>::iterator iter = vString.end();

		// Start from the end of the vector and move backward using the iterator
        // In each step, move one element back and add it to the result string
		while (iter != vString.begin())
		{
			--iter;

			s += *iter + " ";
		}

		return s.substr(0, s.length() - 1);
	}

	string ReversWrodsInString()
	{
		return ReversWrodsInString(_Text);
	}

	static string ReplaceWrodInString(string S1, string StringToReplace, string StringReplaceTo, bool MatchCase = true)
	{
		vector <string> vString = Split(S1, " ");

		for (string& Word : vString)
		{
			if (MatchCase)
			{
				if (Word == StringToReplace)
				{
					Word = StringReplaceTo;
				}
			}
			else
			{
				if (LowerAllString(Word) == LowerAllString(StringToReplace))
				{
					Word = StringReplaceTo;
				}
			}
		}

		return JoinString(vString, " ");
	}

	string ReplaceWrodInString(string StringToReplace, string StringReplaceTo)
	{
		return ReplaceWrodInString(_Text, StringToReplace, StringReplaceTo);
	}

	static string RemovePanctuations(string S1)
	{
		string s = "";

		for (int i = 0; i < S1.length(); i++)
		{
			if (!ispunct(S1[i]))
			{
				s += S1[i];
			}
		}

		return s;
	}

	string RemovePanctuations()
	{
		return RemovePanctuations(_Text);
	}
};