#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int total_customers[1000]; // total size
    int index = 0;
    string first_nameArray[total_customers] = {"Faiq", "Junaid", "Haiqa", "Ammar", "Hasnain", "Savaira"};
    string last_nameArray[total_customers] = {"Din", "Arshad", "Khalid", "Haider", "Dogar", "Eman"};
    int ageArray[total_customers] = {19, 20, 21, 22, 23, 24};
    int phone_numberArray[total_customers] = {5551, 5552, 5553, 5554, 5555, 5556};
    int Government_IDArray[total_customers] = {231, 325, 764, 873, 936, 841};
    int Email_AddressArray[total_customers] = {"@1", "@2", "@3", "@4", "@5", "@6"};
    string genderArray[total_customers] = {"Male", "Male", "Female", "Male", "Male", "Female"};
    string nationalityArray[total_customers] = {"Pakistani", "Saudi", "Japani", "Korean", "African", "Chinese"};
    string residential_AddressArray[total_customers] = {"Green street", "Brown street", "Red street", "Blue street", "Black street", "Orange street"};
    string account_typeArray[total_customers] = {"A", "B", "C", "D", "E", "F"}; // Savings,Current etc.
    float account_numberArray[total_customers] = {222, 223, 224, 225, 226, 227};
    float branch_codeArray[total_customers] = {28 - "A", 29 - "B", 30 - "C", 31 - "D", 32 - "E", 33 - "F"};
    string Nameorder[i];
    // CRUD Create, Read, Update, Delete
    while (true)
    // main header of Bank Management System
    {

        system("cls");
        cout << "|=============================================|" << endl;
        cout << "|==========Bank Management System=============|" << endl;
        cout << "|=============================================|" << endl;

        cout << "User menu" << endl;
        cout << "1.Admin" << endl;
        cout << "2.Customer" << endl;
        cout << "3.To Exit" << endl;
        cout << "Choose option:";
        int userOption;
        cin >> userOption;

        cout << "You choose" << userOption << endl;
        if (userOption == "1")
        {
            // write here the admin code
            int count_attempt = 0;
            for (int i = 0; i <= 3; i++)
                system("cls");
            cout << "Admin menu:Login attempt" << i + 1 << endl;
            cout << "Enter the username:";
            string username;
            cin >> username;
            cout << "Enter password:";
            string password;
            cin >> password;
            if (username == "admin" && password == "1234")
            {
                cout << "Login successful!" << endl;
                while (true)
                {
                    system("cls");

                    cout << "1.Show all customers" << endl;
                    cout << "2.Search customer" << endl;
                    cout << "3.Update customer record" << endl;
                    cout << "4.Generate balance" << endl;
                    cout << "5.Upgrade customer balance" << endl;
                    cout << "6,Show customers net worth" << endl;
                    cout << "7.Delete record by name" << endl;
                    cout << "8.Logout" << endl;
                    int adminoption;
                    cin >> adminoption;
                    if (adminoption == "1")
                    {
                        if (nameArray[i] != "")
                        {
                            cout << "First_name\tLast_name\tAge\tPhone_number\tGovernment_ID\tEmail_address\tGender\tNationality\tResidentialAddress\tAccountNumber\tAccounttype\tBranchcode" << endl;
                        }
                        for (int i = 0; i < index, i++)
                        {
                            cout << first_nameArray[i] << "\t" << last_nameArray[i] << "\t" << ageArray[i] << "\t" << phone_numberArray[i] << "\t" << Government_ID[i] << "\t" << Email_Address[i] << "\t" << Gender[i] << "\t" << Nationality[i] << "\t" << residential_Address[i] << "\t" << account_number[i] << "\t" << account_type[i] << "\t" << branch_code[i] << endl;
                        }
                    }
                    else if (adminoption == "2")
                    {
                        // search customer by name
                        cout << "Enter the name you want to search:" << endl;
                        string name;
                        cin >> name;
                        bool found = false;
                        int foundindex = -1;
                        for (int i = 0; i < index; i++)
                        {
                            if (last_nameArray[i] == last_name)
                                foundindex = i;
                            found = true;
                        }
                    }
                    if (found == false)
                    {
                        cout << "Record not found against customer name" << last_name << endl;
                    }
                    else
                    {
                        cout << "First_name\tLast_name\tAge\tPhone_number\tGovernmentID\tEmailAddress\tGender\tNationality\tResidentialAddress\tAccount_number\tAccount_type\tBranch_code" << endl;
                        cout << first_nameArray[foundindex] << "\t" << last_nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << phone_numberArray[foundindex] << "\t" << Government_ID[foundindex] << "\t" << Email_Address[foundindex] << "\t" << Gender[foundindex] << "\t" << Nationality[foundindex] << "\t" << residential_Address[foundindex] << "\t" << account_number[foundindex] << "\t" << account_type[foundindex] << "\t" << branch_code[foundindex] << endl;
                    }
                }
                else if (adminoption == "3")
                {
                    // Update customer record
                    cout << "Enter the name you want to update record of:" << endl;
                    string name;
                    cin >> name;
                    bool found = false;
                    int foundindex = -1;
                    for (int i = 0; i < index; i++)
                    {
                        if (last_nameArray[i] == last_name)
                            foundindex = i;
                        found = true;
                    }
                }
                if (found == true)
                {
                    cout << "=============Old Record============" << endl;
                    cout << "First_name\tLast_name\tAge\tPhone_number\tGovernmentID\tEmailAddress\tGender\tNationality\tResidentialAddress\tAccount_number\tAccount_type\tBranch_code" << endl;
                    cout << first_nameArray[foundindex] << "\t" << last_nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << phone_numberArray[foundindex] << "\t" << Government_ID[foundindex] << "\t" << Email_Address[foundindex] << "\t" << Gender[foundindex] << "\t" << Nationality[foundindex] << "\t" << residential_Address[foundindex] << "\t" << account_number[foundindex] << "\t" << account_type[foundindex] << "\t" << branch_code[foundindex] << endl;
                }
            }

            cout << "Enter new record to update" << endl;
            cout << "Welcome to Bank Management System Customer Menu" << endl;
            cout << "Enter your first name:";
            string first_names;
            cin >> first_names;
            cout << "Enter your last name:";
            string last_names;
            cin >> last_names;
            cout << "Enter your age:";
            int age;
            cin >> age;
            cout << "Enter your phone number:";
            int phone_numbers;
            cin >> phone_numbers;
            cout << "Enter your Government ID:";
            int Government_IDs;
            cin >> Government_IDs;
            cout << "Enter your Email Address:";
            int Email_Address;
            cin >> Email_Address;
            cout << "Enter your gender:";
            string genders;
            cin >> genders;
            cout << "Enter your nationality:";
            string nationalitys;
            cin >> nationalitys;
            cout << "Enter your residential address:";
            string residential_address;
            cin >> residential_address;
            cout << "Enter your account type:";
            float account_types;
            cin >> account_types;
            cout << "Enter your account number:";
            float account_numbers;
            cin >> account_numbers;
            cout << "Enter your branch code:";
            float branch_codes;
            cin >> branch_codes;
            first_nameArray[foundindex] = first_name;
            last_nameArray[foundindex] = last_name;
            ageArray[foundindex] = age;
            phone_numberArray[foundindex] = phone_number;
            Government_IDArray[foundindex] = Government_ID;
            Email_AddressArray[foundindex] = Email_Address;
            genderArray[foundindex] = gender;
            nationalityArray[foundindex] = nationality;
            residential_AddressArray[foundindex] = residential_Address;
            account_typeArary[foundindex] = account_type; // Savings,Current etc.
            account_numberArray[foundindex] = account_number;
            branch_codeArray[foundindex] = branch_code;
        }
        else
        {
            cout << "Record not found against given name" << endl;
        }
        else if (adminoption == "4")
        {
            // Generate balance
            for (int i = 0; i < index, i++)
            {
            }
            // sorting the data on the basis of alaphabets
            for (int i = 0; i < index; i++)
            {
                for (int j = i + 1; j < index; j++)
                {
                    if (alphabeticalorder[i] < alphabeticalorder[j])
                    {
                        // swapping first names
                        string temp = first_nameArray[i];
                        first_nameArray[i] = first_nameArray[j];
                        first_nameArray[j] = temp;
                        // swapping last names
                        string temp = last_nameArray[i];
                        last_nameArray[i] = last_nameArray[j];
                        last_nameArray[j] = temp;
                        // Swapping ages
                        int temp = ageArray[i];
                        ageArray[i] = ageArray[j];
                        ageArray[j] = temp;
                        // Swapping phone numbers
                        int temp = phone_numberArray[i];
                        phone_numberArray[i] = phone_numberArray[j];
                        phone_numberArray[j] = temp;
                        // Swapping Government IDs
                        int temp = Government_IDArray[i];
                        Government_IDArray[i] = Government_IDArray[j];
                        phone_numberArray[j] = temp;
                        // Swapping Genders
                        int temp = genderArray[i];
                        genderArray[i] = genderArray[j];
                        genderArray[j] = temp;
                        // Swapping nationalitys
                        string temp = nationalityArray[i];
                        nationalityArray[i] = nationalityArray[j];
                        nationalityArray[j] = temp;
                        // Swapping Residential Address
                        string temp = residential_AddressArray[i];
                        residential_AddressArray[i] = residential_AddressArray[j];
                        residential_AddressArray[j] = temp;
                        // Swapping Account Type
                        float temp = account_typeArray[i];
                        account_typeArray[i] = account_typeArray[j];
                        account_typeArray[j] = temp;
                        // Swapping Account Numbers
                        float temp = account_numberArray[i];
                        account_numberArray[i] = account_numberArray[j];
                        account_numberArray[j] = temp;
                        // Swapping Branch codes
                        float temp = branch_codeArray[i];
                        temp = branch_codeArray[i] = temp = branch_codeArray[j];
                        temp = branch_codeArray[j] = temp;
                    }
                }
            }
        }
        else if (adminoption == "5")
        {
            // Upgrading customer balance
            cout << "Enter the name you want to upgrade record of" << endl;
            string name;
            cin >> name;
            bool found = false;
            int foundindex = -1;
            for (int i = 0; i < index; i++)
            {
                if (last_nameArray[i] == last_name)
                    foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            cout << "=============Old Record============" << endl;
            cout << "First_name\tLast_name\tAge\tPhone_number\tGovernmentID\tEmailAddress\tGender\tNationality\tResidentialAddress\tAccount_number\tAccount_type\tBranch_code" << endl;
            cout << first_nameArray[foundindex] << "\t" << last_nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << phone_numberArray[foundindex] << "\t" << Government_ID[foundindex] << "\t" << Email_Address[foundindex] << "\t" << Gender[foundindex] << "\t" << Nationality[foundindex] << "\t" << residential_Address[foundindex] << "\t" << account_number[foundindex] << "\t" << account_type[foundindex] << "\t" << branch_code[foundindex] << endl;
        }
    }

    cout << "Enter new balance to ugrade" << endl;
    cout << "Welcome to Bank Management System Customer Menu" << endl;
    cout << "Enter your first name:";
    string first_names;
    cin >> first_names;
    cout << "Enter your last name:";
    string last_names;
    cin >> last_names;
    cout << "Enter your age:";
    int age;
    cin >> age;
    cout << "Enter your phone number:";
    int phone_numbers;
    cin >> phone_numbers;
    cout << "Enter your Government ID:";
    int Government_IDs;
    cin >> Government_IDs;
    cout << "Enter your Email Address:";
    int Email_Address;
    cin >> Email_Address;
    cout << "Enter your gender:";
    string genders;
    cin >> genders;
    cout << "Enter your nationality:";
    string nationalitys;
    cin >> nationalitys;
    cout << "Enter your residential address:";
    string residential_address;
    cin >> residential_address;
    cout << "Enter your account type:";
    float account_types;
    cin >> account_types;
    cout << "Enter your account number:";
    float account_numbers;
    cin >> account_numbers;
    cout << "Enter your branch code:";
    float branch_codes;
    cin >> branch_codes;
    first_nameArray[foundindex] = first_name;
    last_nameArray[foundindex] = last_name;
    ageArray[foundindex] = age;
    phone_numberArray[foundindex] = phone_number;
    Government_IDArray[foundindex] = Government_ID;
    Email_AddressArray[foundindex] = Email_Address;
    genderArray[foundindex] = gender;
    nationalityArray[foundindex] = nationality;
    residential_AddressArray[foundindex] = residential_Address;
    account_typeArary[foundindex] = account_type; // Savings,Current etc.
    account_numberArray[foundindex] = account_number;
    branch_codeArray[foundindex] = branch_code;
}
else
{
    cout << "Record not found for given name" << endl;
}
else if (adminoption == "6")
{
    // Show customer's net worth by name
    cout << "Enter the name you want to find net worth of" << endl;
    string name;
    cin >> name;
    bool found = false;
    int foundindex = -1;
    for (int i = 0; i < index; i++)
    {
        if (last_nameArray[i] == last_name)
            foundindex = i;
        found = true;
    }
}
if (found == true)
{
    cout << "First_name\tLast_name\tAge\tPhone_number\tGovernmentID\tEmailAddress\tGender\tNationality\tResidentialAddress\tAccount_number\tAccount_type\tBranch_code" << endl;
    cout << first_nameArray[foundindex] << "\t" << last_nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << phone_numberArray[foundindex] << "\t" << Government_ID[foundindex] << "\t" << Email_Address[foundindex] << "\t" << Gender[foundindex] << "\t" << Nationality[foundindex] << "\t" << residential_Address[foundindex] << "\t" << account_number[foundindex] << "\t" << account_type[foundindex] << "\t" << branch_code[foundindex] << endl;
}
cout << "Welcome to Bank Management System Customer Menu" << endl;
cout << "Enter your first name:";
string first_names;
cin >> first_names;
cout << "Enter your last name:";
string last_names;
cin >> last_names;
cout << "Enter your age:";
int age;
cin >> age;
cout << "Enter your phone number:";
int phone_numbers;
cin >> phone_numbers;
cout << "Enter your Government ID:";
int Government_IDs;
cin >> Government_IDs;
cout << "Enter your Email Address:";
int Email_Address;
cin >> Email_Address;
cout << "Enter your gender:";
string genders;
cin >> genders;
cout << "Enter your nationality:";
string nationalitys;
cin >> nationalitys;
cout << "Enter your residential address:";
string residential_address;
cin >> residential_address;
cout << "Enter your account type:";
float account_types;
cin >> account_types;
cout << "Enter your account number:";
float account_numbers;
cin >> account_numbers;
cout << "Enter your branch code:";
float branch_codes;
cin >> branch_codes;
first_nameArray[foundindex] = first_name;
last_nameArray[foundindex] = last_name;
ageArray[foundindex] = age;
phone_numberArray[foundindex] = phone_number;
Government_IDArray[foundindex] = Government_ID;
Email_AddressArray[foundindex] = Email_Address;
genderArray[foundindex] = gender;
nationalityArray[foundindex] = nationality;
residential_AddressArray[foundindex] = residential_Address;
account_typeArary[foundindex] = account_type; // Savings,Current etc.
account_numberArray[foundindex] = account_number;
branch_codeArray[foundindex] = branch_code;
}
else
{
    cout << "Record not found for given name" << endl;
}
{
    else if (adminoption == "7")
    {
        // Delete record by name
        cout << "Enter the name you want to delete record of" << endl;
        string name;
        cin >> name;
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < index; i++)
        {
            if (last_nameArray[i] == last_name)
                foundindex = i;
            found = true;
        }
    }
    if (found == true)
    {
        first_nameArray[foundindex] = "";
        last_nameArray[foundindex] = "";
        ageArray[foundindex] = ";" phone_numberArray[foundindex] = "";
        Government_IDArray[foundindex] = "";
        Email_AddressArray[foundindex] = "";
        genderArray[foundindex] = "";
        nationalityArray[foundindex] = "";
        residential_AddressArray[foundindex] = "";
        account_typeArary[foundindex] = ""; // Savings,Current etc.
        account_numberArray[foundindex] = "";
        branch_codeArray[foundindex] = ""
    }
    else
    {
        cout << "Record not found" << endl;
    }
}
else if (adminoption == "8")
{
    break;
}
else
{
    cout << "Wrong option selected" << endl;
}
cout << "Press any key to continue.." << endl;
getch();
cout << "Press any key to continue.." << endl;
getch();
break;

else
{
    cout << "Username or password is invalid!" << endl;
}

cout << "Press any key to continue.." << endl;
getch();
}
else if (userOption == 2)
{
    // write here the customer code
    system("cls");
    cout << "Welcome to Bank Management System Customer Menu" << endl;
    cout << "Enter your first name:";
    string first_names;
    cin >> first_names;
    cout << "Enter your last name:";
    string last_names;
    cin >> last_names;
    cout << "Enter your age:";
    int age;
    cin >> age;
    cout << "Enter your phone number:";
    int phone_numbers;
    cin >> phone_numbers;
    cout << "Enter your Government ID:";
    int Government_IDs;
    cin >> Government_IDs;
    cout << "Enter your Email Address:";
    int Email_Address;
    cin >> Email_Address;
    cout << "Enter your gender:";
    string genders;
    cin >> genders;
    cout << "Enter your nationality:";
    string nationalitys;
    cin >> nationalitys;
    cout << "Enter your residential address:";
    string residential_address;
    cin >> residential_address;
    cout << "Enter your account type:";
    float account_types;
    cin >> account_types;
    cout << "Enter your account number:";
    float account_numbers;
    cin >> account_numbers;
    cout << "Enter your branch code:";
    float branch_codes;
    cin >> branch_codes;
    first_nameArray[index] = first_name;
    last_nameArray[index] = last_name;
    ageArray[index] = age;
    phone_numberArray[index] = phone_number;
    Government_IDArray[index] = Government_ID;
    Email_AddressArray[index] = Email_Address;
    genderArray[index] = gender;
    nationalityArray[index] = nationality;
    residential_AddressArray[index] = residential_Address;
    account_typeArary[index] = account_type; // Savings,Current etc.
    account_numberArray[index] = account_number;
    branch_codeArray[index] = branch_code;
    index++;
    cout << "Your data have been saved" << endl;
    cout << "Press any key to continue.." << endl;
    getch();
}
else if (userOption == 3)
{
    break;
}
else
{
    cout << "You choose wrong option" << endl;
}
// end of our main while loop
cout << endl
     << "Thanks for using this software;
}
