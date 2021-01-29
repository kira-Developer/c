#include <stdio.h>
#include <string.h>
#include <mysql/mysql.h>
#include <stdlib.h>
int connect(char* host , char* user ,  char* password , char* database , int port);
main () {
    MYSQL_RES* res;
    MYSQL_ROW row;
    MYSQL * con = connect("localhost" , "root" , "" , "dars" ,3307);
    if (mysql_query(con, "select * from users")) {
        fprintf(stderr, "%s\n", mysql_error(con));
        exit(1);
    }

    res = mysql_use_result(con);


    while ((row = mysql_fetch_row(res)) != NULL)
        printf("%s \n", row[2]);

    /* close connection */
    mysql_free_result(res);
    mysql_close(con);
    return 0;

}

connect(char* host , char* user ,  char* password , char* database , int port) {
    MYSQL *conn;
    conn = mysql_init(NULL);
    if(! mysql_real_connect(conn , host , user , password , database ,port , NULL ,0)){
        fprintf(stderr , "%s\n" , mysql_error(conn));
        exit(1);
    }
    printf("is connecting with database !\n");
    return conn;

}