# **REQUIREMENTS**
## **INTRODUCTION** 
This is a two-player game where there are a certain number of stacks of candies. Each stack contains certain number of candies. The stacks are arranged in non-decreasing order from left to right based on the number of candies in each stack. Let the two players be named as Tom and Jerry. For every continuous subsequence of candies stacks, Tom and Jerry will play game on this subsequence of candies stacks, Tom plays first, and they play in turn. In one move, the player can choose one of the stacks and remove at least one candy from it keeping in mind the non-decreasing order of the candies stacks which needs to be maintained. The last person to make a valid move wins. We need to find the continuous subsequences of candies stacks that will make Tom win if both of them play optimally. The number of candies of each stack will be recovered after the game ends for each subsequences


#### **COST AND FEATURES AND TIMELINE**
No cost required to play the game.

##### **DEFINING OUR SYSTEM**
This is a two-player game where there are a certain number of stacks of candies. Each stack contains certain number of candies. The stacks are arranged in non-decreasing order from left to right based on the number of candies in each stack.

Let the two players be named as Tom and Jerry. For every continuous subsequence of candies stacks, Tom and Jerry will play game on this subsequence of candies stacks, Tom plays first, and they play in turn. In one move, the player can choose one of the stacks and remove at least one candy from it keeping in mind the non-decreasing order of the candies stacks which needs to be maintained. The last person to make a valid move wins.

We need to find the continuous subsequences of candies stacks that will make Tom win if both of them play optimally. The number of candies of each stack will be recovered after the game ends for each subsequences

## **SWOT ANALYSIS**
![R4](https://user-images.githubusercontent.com/101189588/161087442-90232568-ab86-4bdc-89e2-034142359b50.png)

### **4W's and 1'H**
**Who:**
This is a structured form of entertainment and will cater to all the young minds as an educational tool to nurture the brain. Thus, this game will as a tool of fun for the young generation to develop keen observation to dertermine the output of the game to win it.

**What:**
Most of the parents do not like that their wards would be adddicted to a game. But, This Candy Game is not addictive at all instead it nurtures the intelligence within an individual to solve it effectively. So, the game being cost-effective can be used by all persons of all ages.

**When:**
Humans irrespective of their age are always curious when it comes to a game which requires developing keen observation. So, such a game is welcomed at all times.

**Where:**
This game will meet the interests of all people of all nations.

**How:**
Many games are very expensive. This game being cost-effective can be purchased by all sections of the society. TBD


##### **Detail requirements**
 **High Level Requirements:**
|ID   |DESCRIPTION                                                |CATEGORY |STATUS     |
|-----|--------------------------------------------------------------|---------|--------|
|HLR01|The player who starts first needs to be noted              |Technical|Implemented|
|HLR02|The configuration of the stacks of candies need to be noted|Technical|Implemented|
|HLR03|The Hardware Implementation                                |Technical|Implemented|
|HLR04|Decision Making and keen observation                       |Technical|Implemented|

 **Low level Requirements:**
|ID   |DESCRIPTION                                    |CATEGORY |STATUS     |
|-----|-----------------------------------------------|---------|-----------|
|LLR01|The candies piles are in non-decreasing order  |Technical|Implemented|
|LLR02|This is a 2-playered game                      |Technical|Implemented|
|LLR03|The game should not be stuck in a loop         |Technical|Implemented|
|LLR04|Able to remove stack of candies for next move  |Technical|Implemented|
