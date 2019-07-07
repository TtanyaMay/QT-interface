#include <iostream>
#include "Base.h"
#include <stdio.h>
#include <string>

// static int callback(void *NotUsed, int argc, char **argv, char **ColName) {
//    int i;
//    for(i = 0; i<argc; i++) {
//       printf("%s = %s\n", ColName[i], argv[i] ? argv[i] : "NULL");
//    }
//    printf("\n");
//    return 0;
// }

// int main()
// {
//     sqlite3 *db;
//     char *zErrMsg = 0;

//     int arg = 23445;

//     std::string name ="paul";
//     std::string name_en = "paul2";
//     std::string birthday = "12334";
//     std::string group = "234";
//     std::string data_from = "1234";
//     std::string data_to = "12345";
//     std::string expelled = "123445";

//     auto s = std::to_string(arg);

//     int rc = sqlite3_open("Department.db", &db);

//     if( rc ) {
//       fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
//       return(0);
//    } else {
//       fprintf(stderr, "Opened database successfully\n");
//    }

//    std::string sql = "INSERT INTO Students (ST_ID, NAME_UA, NAME_EN, BIRTHDAY, PROGRAM, DATE_FROM, DATE_TO, EXPELLED) VALUES ('" + s + "', '" + name + "', '" + name_en + "', '" + birthday + "', '" + group + "', '" + data_from + "', '" + data_to + "', '" + expelled  + "');";
//    const char *sql2 = sql.c_str();

//    std::cout << sql2;

//    rc = sqlite3_exec(db, sql2, callback, 0, &zErrMsg);
//    return 0;
// }

int main()
{
   I_Database db;
   int id = 12344;
   std::string name_ua = "АФГГ";
   std::string name_eu = "EFFF";
   std::string birthdayS = "1992.02.02";
   std::string groupS = "222";
   std::string groupEnS = "222EN";
   std::string data_fromS = "1232.213.123";
   std::string data_fromEnS = "23131.12313.123";
   std::string data_toS = "1233.123.123";
   std::string data_toEnS = "31313";
   std::string expelledS = "NONE2";
   std::string expelledEn = "None3";

   db.InsertIntoStudents(id, name_ua, name_eu, birthdayS, groupS, groupEnS, data_fromS, data_fromEnS, data_toS, data_toEnS, expelledS, expelledEn);

   return 0;

}