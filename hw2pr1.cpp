#include <iostream>
using namespace std;
int main()
{
	cout<<"Which amendment?\n";
	int x=0;
	
	while(cin>>x)
	{

	switch(x)
	{
		case 1:
		cout<<"\nAmendment one prohibits the making of any law respecting an establishment of religion, impeding the free exercise of religion, abridging the freedom of speech, infringing on the freedom of the press, interfering with the right to peaceably assemble or prohibiting the petitioning for a governmental redress of grievances.\n\n";
		break;
		case 2:
		cout<<"/nThe second amendment protects the right to keep and bear arms.\n\n";
		break;
		case 3:
		cout<<"\nThe third amendment places restrictions on the quartering of soldiers in private homes without the owner's consent, prohibiting it during peacetime.\n\n";
		break;
		case 4:
		cout<<"\nThe fouth amendment prohibits unreasonable searches and seizures and sets out requirements for search warrants based on probable cause as determined by a neutral judge or magistrate.\n\n";
		break;
		case 5:
		cout<<"\nThe fifth amendment sets out rules for indictment by grand jury and eminent domain, protects the right to due process, and prohibits self-incrimination and double jeopardy.\n\n";
		break;
		case 6:
		cout<<"\nThe sixth amendment protects the right to a fair and speedy public trial by jury, including the rights to be notified of the accusations, to confront the accuser, to obtain witnesses and to retain counsel.\n\n";
		break;
		case 7:
		cout<<"\nThe seventh amendment provides for the right to trial by jury in certain civil cases, according to common law.\n\n";
		break;
		case 8:
		cout<<"\nThe eighth amendment prohibits excessive fines and excessive bail, as well as cruel and unusual punishment.\n\n";
		break;
		case 9:
		cout<<"\nThe ninth amendment protects rights not enumerated in the Constitution.\n\n";
		break;
		case 10:
		cout<<"\nThe tenth amendment reinforces the principle of federalism by stating that the federal government possesses only those powers delegated to it by the states or the people through the Constitution.\n\n";
		break;
		case 11:
		cout<<"\nThe eleventh amendment makes states immune from suits from out-of-state citizens and foreigners not living within the state borders; lays the foundation for sovereign immunity.\n\n";
		break;
		case 12:
		cout<<"\nThe twelfth amendment revises presidential election procedures.\n\n";
		break;
		case 13:
		cout<<"\nThe thirteenth  amendment abolishes slavery, and involuntary servitude, except as punishment for a crime.\n\n";
		break;
		case 14:
		cout<<"\nThe fourteenth amendment defines citizenship, contains the Privileges or Immunities Clause, the Due Process Clause, the Equal Protection Clause, and deals with post-Civil War issues.\n\n";
		break;
		case 15:
		cout<<"\nThe fifteenth amendment prohibits the denial of the right to vote based on race, color, or previous condition of servitude.\n\n";
	break;
		case 16:
		cout<<"\nThe sixteenth amentment permits Congress to levy an income tax without apportioning it among the states or basing it on the United States Census.\n\n";
		break;
		case 17:
		cout<<"\nThe 17th amendment establishes the direct election of United States Senators by popular vote.\n\n";
		break;
		case 18:
		cout<<"\nThe 18th amendment prohibited the manufacturing or sale of alcohol within the United States.\n\n";
		break;
		case 19:
		cout<<"\nThe 19th amendment prohibits the denial of the right to vote based on sex.\n\n";
		break;
		case 20:
		cout<<"\nThe 20th amendment changes the date on which the terms of the President and Vice President (January 20) and Senators and Representatives (January 3) end and begin.\n\n";
		break;
		case 21:
		cout<<"\nThe 21st amdnement repeals the 18th Amendment and prohibits the transportation or importation into the United States of alcohol for delivery or use in violation of applicable laws.\n\n";
		break;
		case 22:
		cout<<"\nThe 22nd amendment limits the number of times that a person can be elected president: a person cannot be elected president more than twice, and a person who has served more than two years of a term to which someone else was elected cannot be elected more than once.\n\n";
		break;
		case 23:
		cout<<"\nThe 23rd amendment grants the District of Columbia electors (the number of electors being equal to the least populous state) in the Electoral College.\n\n";
		break;
		case 24:
		cout<<"\nThe 24th amendment prohibits the revocation of voting rights due to the non-payment of a poll tax or any other tax.\n\n";
		break;
		case 25:
		cout<<"\nThe 25th amendment addresses succession to the Presidency and establishes procedures both for filling a vacancy in the office of the Vice President, as well as responding to Presidential disabilities.\n\n";
		break;
		case 26:
		cout<<"\nThe 26th amendment prohibits the denial of the right of US citizens, eighteen years of age or older, to vote on account of age.\n\n";
		break;
		case 27:
		cout<<"\nThe 27th amendment delays laws affecting Congressional salary from taking effect until after the next election of representatives.\n\n";
		break;
		default:
		cout<<"\nI'm sorry, I don't know that amendment. Please try again.\n\n";
		break;
	}

	cout<<"Which amendment?\n";
	}
}
