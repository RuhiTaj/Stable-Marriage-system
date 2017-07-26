
#include "whattotest.cpp"
#include <gtest/gtest.h>

::testing::AssertionResult ArraysMatch(int expected[],
                                       int *actual,int s){
    for (int i=0; i < s; ++i){
        if (expected[i] != *(actual+i)){
            return ::testing::AssertionFailure() << "array[" << i
                << "] (" << *(actual+i) << ") != expected[" << i
                << "] (" << expected[i] << ")";
        }
    }
    return ::testing::AssertionSuccess();
}

::testing::AssertionResult ArraysMatch2(int expected[100][100],
                                       int** actual,int s,int t){
    for (int i=0; i < s; ++i){
    	for(int j=0;j < t; ++j)
    	{
        	if (expected[i][j] != *(*(actual+i)+j)){
        	    return ::testing::AssertionFailure() << "array[" << i
        	        << "]"<<"[" << j<< "] (" << *(*(actual+i)+j) << ") != expected[" << i
        	        << "]"<<"["<<j<<"] (" << expected[i][j] << ")";
        	}
        }
    }
    return ::testing::AssertionSuccess();
}

 TEST(MaxFuntionTest,2positive)
 {
 	EXPECT_EQ(4, max(4,3));
 }

 TEST(MaxFuntionTest,2negative)
 {
 	EXPECT_EQ(-5, max(-5,-10));	
 }

 TEST(MaxFuntionTest,1positive1negative)
 {
 	EXPECT_EQ(12, max(12,-5));
 	EXPECT_EQ(20, max(-10,20));
 }

TEST(giveResultTest,test1)
{
	int a[2]={0,1};
	int b[][100]={{2,3},{2,3},{0,1},{0,1}};
	EXPECT_TRUE(ArraysMatch(a,giveResult(2,b),2));
	//giveResult(2,b)
}

TEST(giveResultTest,test2)
{
	int a[4]={3,0,1,2};
	int b[][100]={{6,5,7,4},
				  {5,6,7,4},
				  {7,5,6,4},
				  {7,5,4,6},
				  {2,3,0,1},
				  {0,2,3,1},
				  {2,1,0,3},
				  {2,1,3,0}};
	EXPECT_TRUE(ArraysMatch(a,giveResult(4,b),4));
	//giveResult(2,b)
}

TEST(giveResultTest,test3)
{
	int a[3]={0,2,1};
	int b[][100]={{3, 4, 5}, 
				  {5, 4, 3}, 
				  {3, 4, 5}, 
				  {1, 0, 2}, 
				  {0, 2, 1},
 				  {1, 0, 2}};
	EXPECT_TRUE(ArraysMatch(a,giveResult(3,b),3));
	//giveResult(2,b)
}

TEST(stableMarriageTest,test1)
{
	int a[4][100]={{2,3},
				   {3,2},
				   {0,1},
				   {1,0}};
	EXPECT_TRUE(ArraysMatch2(a,stableMarriage(1),4,2)); 
}

TEST(stableMarriageTest,test2)
{
	int a[8][100]={{6,5,7,4},
				   {5,6,7,4},
				   {7,5,6,4},
				   {7,5,4,6},
				   {2,3,0,1},
				   {0,2,3,1},
				   {2,1,0,3},
				   {2,1,3,0}};
	EXPECT_TRUE(ArraysMatch2(a,stableMarriage(2),8,4)); 
}

TEST(stableMarriageTest,test3)
{
	int a[6][100]={{3, 4, 5}, 
				   {5, 4, 3}, 
				   {3, 4, 5}, 
				   {1, 0, 2}, 
				   {0, 2, 1},
 				   {1, 0, 2}};

 				   // {{3, 4, 5}, 
				   // {3, 4, 5}, 
				   // {4, 3, 5}, 
				   // {2, 0, 1}, 
				   // {2, 1, 0},
 				   // {1, 0, 2}};

	EXPECT_TRUE(ArraysMatch2(a,stableMarriage(3),6,3)); 
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}




// TEST(SquareRootTest, PositiveNos) { 
//     ASSERT_EQ(6, squareRoot(36.0));
//     ASSERT_EQ(18.0, squareRoot(324.0));
//     ASSERT_EQ(25.4, squareRoot(645.16));
//     ASSERT_EQ(0, squareRoot(0.0));
// }
 
// TEST(SquareRootTest, NegativeNos) {
//     ASSERT_EQ(-1.0, squareRoot(-15.0));
//     ASSERT_EQ(-1.0, squareRoot(-0.2));
// }
