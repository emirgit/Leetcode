/*
Time C.
0ms Beats 100.00%
Space C.
5.47 MB Beats 100.00%
*/


int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize) {
    int cWanted = 0, sWanted = 0;

    for(int i = 0; i < studentsSize; i++){
        if (students[i])
            sWanted++;
        else
            cWanted++;
    }

    for(int i = 0; i < sandwichesSize; i++){
        if (sandwiches[i]){
            if(sWanted)
                sWanted--;
            else
                break;
        }
        else{
            if(cWanted)
                cWanted--;
            else
                break;
        }

    }

    return cWanted + sWanted;
}