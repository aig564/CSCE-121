#include <iostream>
#include <vector>
using namespace std;
int main()
{
	cout<<"Which amendment?\n";
	int x=0;

	vector<string> amendment;
        amendment.push_back("Amendment one prohibits the making of any law respecting an establishment of religion, impeding the free exercise of religion, abridging the freedom of speech, infringing on the freedom of the press, interfering with the right to peaceably assemble or prohibiting the petitioning for a governmental redress of grievances.\n\n");
	amendment.push_back("The second amendment protects the right to keep and bear arms.\n\n");
	amendment.push_back("The third amendment places restrictions on the quartering of soldiers in private homes without the owner's consent, prohibiting it during peacetime.\n\n");
	amendment.push_back("The fouth amendment prohibits unreasonable searches and seizures and sets out requirements for search warrants based on probable cause as determined by a neutral judge or magistrate.\n\n");
	amendment.push_back("The fifth amendment sets out rules for indictment by grand jury and eminent domain, protects the right to due process, and prohibits self-incrimination and double jeopardy.\n\n");
	amendment.push_back("The sixth amendment protects the right to a fair and speedy public trial by jury, including the rights to be notified of the accusations, to confront the accuser, to obtain witnesses and to retain counsel.\n\n");
	amendment.push_back("The seventh amendment provides for the right to trial by jury in certain civil cases, according to common law.\n\n");
	amendment.push_back("The eighth amendment prohibits excessive fines and excessive bail, as well as cruel and unusual punishment.\n\n");
	amendment.push_back("The ninth amendment protects rights not enumerated in the Constitution.\n\n");
	amendment.push_back("The tenth amendment reinforces the principle of federalism by stating that the federal government possesses only those powers delegated to it by the states or the people through the Constitution.\n\n");
        amendment.push_back("The eleventh amendment makes states immune from suits from out-of-state citizens and foreigners not living within the state borders; lays the foundation for sovereign immunity.\n\n");
	amendment.push_back("The twelfth amendment revises presidential election procedures.\n\n");
        amendment.push_back("The thirteenth  amendment abolishes slavery, and involuntary servitude, except as punishment for a crime.\n\n");
	amendment.push_back("The fourteenth amendment defines citizenship, contains the Privileges or Immunities Clause, the Due Process Clause, the Equal Protection Clause, and deals with post-Civil War issues.\n\n");
        amendment.push_back("The fifteenth amendment prohibits the denial of the right to vote based on race, color, or previous condition of servitude.\n\n");
        amendment.push_back("The sixteenth amentment permits Congress to levy an income tax without apportioning it among the states or basing it on the United States Census.\n\n");
        amendment.push_back("The 17th amendment establishes the direct election of United States Senators by popular vote.\n\n");
        amendment.push_back("The 18th amendment prohibited the manufacturing or sale of alcohol within the United States.\n\n");
        amendment.push_back("The 19th amendment prohibits the denial of the right to vote based on sex.\n\n");
        amendment.push_back("The 20th amendment changes the date on which the terms of the President and Vice President (January 20) and Senators and Representatives (January 3) end and begin.\n\n");
        amendment.push_back("The 21st amdnement repeals the 18th Amendment and prohibits the transportation or importation into the United States of alcohol for delivery or use in violation of applicable laws.\n\n");
        amendment.push_back("The 22nd amendment limits the number of times that a person can be elected president: a person cannot be elected president more than twice, and a person who has served more than two years of a term to which someone else was elected cannot be elected more than once.\n\n");
        amendment.push_back("The 23rd amendment grants the District of Columbia electors (the number of electors being equal to the least populous state) in the Electoral College.\n\n");
        amendment.push_back("The 24th amendment prohibits the revocation of voting rights due to the non-payment of a poll tax or any other tax.\n\n");
        amendment.push_back("The 25th amendment addresses succession to the Presidency and establishes procedures both for filling a vacancy in the office of the Vice President, as well as responding to Presidential disabilities.\n\n");
        amendment.push_back("The 26th amendment prohibits the denial of the right of US citizens, eighteen years of age or older, to vote on account of age.\n\n");
        amendment.push_back("The 27th amendment delays laws affecting Congressional salary from taking effect until after the next election of representatives.\n\n");
	amendment.push_back("I'm sorry, I don't know that amendment. Please try again.\n\n");
while(cin>>x)
	{			
		if(x>27||x<1)
		cout<<amendment[27];
		cout<<amendment[x-1];
		cout<<"Which amendment?\n";
	}
}
