import headers and libraries

create prototypes for functions

int main function
    ifstream inFile
    string studentdata
    string currentline
    open inFile "studentdata.csv"
    create a while using getline inFile and using currentline
        stringstream lineParser currentline
        step through the currentline seperating things into studentdata 
        initialize student using studentdata
