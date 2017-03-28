/**
 * Unit Tests for Piezas
**/

#include <gtest/gtest.h>
#include "Piezas.h"
 
class PiezasTest : public ::testing::Test
{
	protected:
		PiezasTest(){} //constructor runs before each test
		virtual ~PiezasTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(PiezasTest, sanityCheck)
{
	ASSERT_TRUE(true);

}
TEST(PiezasTest, one)
{
	Piezas x;
i	int result = x.reset();
	ASSERT_EQ(result, Blank);
}

TEST(PiezasTest, two)
{
	Piezas x;
	int result = x.dropPiece(1);
	ASSERT_EQ(result, X);
}


TEST(PiezasTest, three)
{
	Piezas x;
	int result = x.dropPiece(5);
	ASSERT_EQ(result, Invalid);
}


TEST(PiezasTest, four)
{
	Piezas x;
	int result = x.dropPiece(E);
	ASSERT_EQ(result, Invalid);
}

TEST(PiezasTest, five)
{
	Piezas x;
	int result = x.pieceAt(1,1);
	ASSERT_EQ(result, Blank);
}

TEST(PiezasTest, six)
{
	Piezas x;
	int result = x.pieceAt(5,5);
	ASSERT_EQ(result, Invalid);
}

TEST(PiezasTest, seven)
{
	Piezas x;
	int result = x.gamestate();
	ASSERT_EQ(result, Invalid);
}



















