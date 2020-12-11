#include <iostream>
using namespace std;
int main (){
	
int secHonor, studHonor, gradeSum=0, averageHold,  holdAve, holdRank, loop =1 ;	
	cout << "Input Number of Sections:  "; cin >> secHonor; 
	cout << "=====================================\n";
	int honorArray [secHonor][50];
	
int secSize[secHonor], secAve[secHonor], secRank[secHonor];
	
	for (int x = 0; x <secHonor; x++){ 
	cout << "Number of students with honors from SECTION " << x+1 << "  :    "; cin >> studHonor;
		secSize[x] = studHonor;
				secRank[x] = x+1;
				//grade input//
			for(int y = 0; y < studHonor; y++){
				cout << "\tStudent "<< y+1 << " : "; cin >> honorArray[x][y];
			}
	cout << endl;
	}
	
	//display//
	cout << "\n=============================================\n";
	cout << "   Section     Class Ave\tStudent Grades\n";
	cout << "=============================================\n";
	
	for (int x = 0; x < secHonor; x++){
        gradeSum = 0; //Reset 0 kada loop para maayos pagcompute ng average
        for (int y = 0; y < secSize[x]; y++){
            gradeSum += honorArray[x][y]; //para makuha summation ng bawat section
        } 
        secAve[x] = gradeSum/secSize[x];

        cout << "\t" << x+1 << " |\t" << secAve[x] << " |" << "\t"; //cout average nung bawat section
        //cout ng bawat grade
        for (int y = 0; y < secSize[x]; y++){
            cout << honorArray[x][y] << "  ";
        }
        cout << endl;
	}


cout << "\n\n ========================================\n";
cout << " \t   CLASS RANKING\n";
cout<< "===========================================\n";


//arranging

	while (loop < 0){
	loop = 0;
	for (int x = 0; x < secHonor-1;x++){
		if(secAve[x] <secAve[x+1]){
			holdAve = secAve[x]; holdRank = secRank[x]; //declaration
			secAve[x]= secAve[x+1]; secRank [x] = secRank[x+1];
			secAve[x+1] = holdAve; secRank[x+1] = holdRank;
			loop++;
		}
		
	}
}
	for (int x = 0; x < secHonor; x++){
		cout << "Rank " << x+1 << " : " << "\t" << "SECTION" << secRank[x]<< " | CLASS AVERAGE " << secAve[x]<<endl;
	}

cout << " ============================================\n";
cout << "Highest Class Average: " << secAve[0]<<endl;
cout << "Lowest Class Average: " <<secAve[secHonor-1];



	return 0;
}
