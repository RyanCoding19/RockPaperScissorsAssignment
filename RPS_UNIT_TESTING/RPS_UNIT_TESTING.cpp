#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "main.h"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSUNITTESTING
{
	TEST_CLASS(RPSUNITTESTING)
	{
	public:
		TEST_METHOD(Player1_RockBeats_Scissors)
		{
			char Player1[] = { 'r', 'o', 'c', 'k', '\0' };
			char Player2[] = { 's', 'c', 'i', 's', 's', 'o', 'r', 's', '\0' };
			char Expected[] = "Player1";
			char* result = actualGame(Player1, Player2);

			Assert::AreEqual(Expected, result);
		}
		TEST_METHOD(Player1_ScissorsBeats_Paper)
		{
			char Player1[] = { 's', 'c', 'i', 's', 's', 'o', 'r', 's', '\0' };
			char Player2[] = { 'p', 'a', 'p', 'e', 'r', '\0' };
			char Expected[] =  "Player1";
			char* result = actualGame(Player1, Player2);

			Assert::AreEqual(Expected, result);
		}
		TEST_METHOD(Player1_PaperBeats_Rock)
		{
			char Player1[] = { 'p', 'a', 'p', 'e', 'r', '\0' };
			char Player2[] = { 'r', 'o', 'c', 'k', '\0' };
			char Expected[] = "Player1";
			char* result = actualGame(Player1, Player2);

			Assert::AreEqual(Expected, result);
		}
		TEST_METHOD(Player2_RockBeats_Scissors)
		{
			char Player2[] = { 'r', 'o', 'c', 'k', '\0' };
			char Player1[] = { 's', 'c', 'i', 's', 's', 'o', 'r', 's', '\0' };
			char Expected[] = "Player2";
			char* result = actualGame(Player1, Player2);

			Assert::AreEqual(Expected, result);
		}
		TEST_METHOD(Player2_ScissorsBeats_Paper)
		{
			char Player2[] = {'s', 'c', 'i', 's', 's', 'o', 'r', 's', '\0'};
			char Player1[] = {'p', 'a', 'p', 'e', 'r', '\0'};
			char Expected[] = "Player1";
			char* result = actualGame(Player1, Player2);

			Assert::AreEqual(Expected, result);
		}
		TEST_METHOD(Player2_PaperBeats_Rock)
		{
			char Player2[] = { 'p', 'a', 'p', 'e', 'r', '\0' };
			char Player1[] = { 'r', 'o', 'c', 'k', '\0' };
			char Expected[] = "Player2";
			char* result = actualGame(Player1, Player2);

			Assert::AreEqual(Expected, result);
		}
		TEST_METHOD(Player1_Player2_Draw)
		{
			char Player1[] = "rock";
			char Player2[] = "rock";
			char Expected[] = "Draw";
			
			char* result = actualGame(Player1, Player2);


			Assert::AreEqual(Expected, result);
		}
		TEST_METHOD(Player1_Player2_Invalid)
		{
			char  Player1[] = "bbbbb";
			char Player2 = NULL;
			char Expected[] = "Invalid";

			char* result = actualGame(Player1, &Player2);
			
			Assert::AreEqual(Expected, result);
		}
	};
}
