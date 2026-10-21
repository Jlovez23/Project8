
include libraries

## UML
```mermaid
classDiagram

class student{
    -str Fname
    -str Lname
    -int Credit hours
    -date* DOB
    -date* grad date
    -address* address
    +student()
    +~student()
    +void init(studentstr)
    +void printStudent()
    +string getLname()
    +string getFname()
    +int getCredit()
}

class date{
    -str dateString
    -int day
    -int month
    -int year
    +date()
    +void init(dateString)
    +void print(dateString)
}

class address{
    -str Street
    -str City
    -str State
    -str Zip code
    +address()
    +void init(street,city,state,zip)
    +void printAddress(street,city,state,zip)
}

address --|> student
date --|> student
```

## Address::Address()
```
string street=""
string city=""
string state=""
string zip=""
```

## Address::init(street,city,state,zip)
```
address::street=street
address::city=city
address::state=state
address::zip=zip
```

## Address::printAddress()
```
print all address details with prompt of "address detail: " and new line
```

## Date::Date()
```
string dateString=""
string day=""
string month=""
string year=""
```

## Date::init(dateString)
```
for parser with /
    Date::month=parser

for parser with /
    Date::day=parser

for parser
    Date::year=parser
```

## Date::printDate(dateString)
```
print date with respective headers of "date info" + Date::attributes and new line
```

## Student::Student()
```
string Fname=""
string Lname=""
int creditHours=0
string DOB=Date*
string gradDate=Date*
string Address=Address*
```

## Student::~Student()
```
delete DOB*
delete gradDate*
delete Address*
```

## Student::init(Studentstr)
```
for parse with ,
    Student::Fname = parse
for parse with ,
    Student::Lname = parse
for parse 
    Student::creditHours = parse
```

## Student::printStudent()
```
print data with appropriate data header like "First Name: " plus Student::Fname data
```

## Main
```
create prototypes for functions

int main function
    
    use loadStudents()

    create a while using keepGoing
        use menu() to print the string dialogue

        request input and put input into response

        if response == 0
            keepGoing = false

        if response == 1
            use showStudentNames() using student reference

        if response == 2
            use printStudents() using student reference
    
        if response == 3
            use findStudent() using student reference

std::string menu()
    print menu options

void delStudent()
    for each item in the student vector
        delete student        

void loadStudents()
    
    
```
