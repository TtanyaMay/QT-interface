#include "Base.h"
#include <stdlib.h>

static int callback(void *NotUsed, int argc, char **argv, char **ColName) {
    int i;
   for(i = 0; i<argc; i++) {
      printf("%s = %s\n", ColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

void I_Database::InsertIntoStudents(
      int         st_id,
      std::string name,
      std::string name_en,
      std::string birthday,
      std::string group,
      std::string groupEN,
      std::string data_from,
      std::string data_fromEN,
      std::string data_to,
      std::string data_toEn,
      std::string expelled,
      std::string expelledEn
   )
{
    sqlite3 *db;
    char *zErrMsg = 0;
    std::string st_idS = std::to_string(st_id);

    int rc = sqlite3_open("Department.db", &db);

    if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      } 
    else {
      fprintf(stderr, "Opened database successfully\n");
      }
   
    std::string sql = "INSERT INTO Students (ST_ID, NAME_UA, NAME_EN, BIRTHDAY, PROGRAM, DATE_FROM, DATE_TO, EXPELLED)" 
    "VALUES (" + st_idS + ", '" + name + "', '" + name_en + "', '" + birthday + "', '" + group + "', '" + groupEN + 
    "', '" + data_from + "', '" + data_fromEN + "', '" + data_to + "', '" + data_toEn + "', '" + expelled  + "', '" + expelledEn + "');";

    const char *sql2 = sql.c_str();

    rc = sqlite3_exec(db, sql2, callback, 0, &zErrMsg);
}

void I_Database::UpdateIntoStudents(
      int         st_id,
      int         ST_IDS,
      std::string name,
      std::string name_en,
      std::string birthday,
      std::string group,
      std::string groupEN,
      std::string data_from,
      std::string data_fromEN,
      std::string data_to,
      std::string data_toEn,
      std::string expelled,
      std::string expelledEn
   )
   {
    sqlite3 *db;
    char *zErrMsg = 0;
    std::string st_idS = std::to_string(st_id);
    std::string st_idT = std::to_string(ST_IDS);

    int rc = sqlite3_open("Department.db", &db);

    if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      } 
    else {
      fprintf(stderr, "Opened database successfully\n");
      }
   
    std::string sql = "UPDATE INTO Students SET" + st_idS + ", '" + name + "', '" + name_en + "', '" + birthday + "', '" + group + "', '" + groupEN + 
    "', '" + data_from + "', '" + data_fromEN + "', '" + data_to + "', '" + data_toEn + "', '" + expelled  + "', '" + expelledEn + "' WHERE ST_ID = " + st_idT;

    const char *sql2 = sql.c_str();

    rc = sqlite3_exec(db, sql2, callback, 0, &zErrMsg);

   }

   void I_Database::DeleteFromStudent(int st_id)
   {

   }