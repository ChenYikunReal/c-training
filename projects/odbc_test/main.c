#include<stdio.h>
#include<windows.h>
#include<sql.h>
#include<sqlext.h>
#include<sqltypes.h>

int main(){
    SQLRETURN ret;
    SQLHENV henv;//SQLHANDLE henv
    SQLHDBC hdbc;//SQLHANDLE hdbc
    SQLHSTMT hstmt;//SQLHANDLE hstmt
    ret=SQLAllocHandle(SQL_HANDLE_ENV,NULL,&henv);//申请环境句柄
    ret=SQLSetEnvAttr(henv,SQL_ATTR_ODBC_VERSION,(SQLPOINTER)SQL_OV_ODBC3,SQL_IS_INTEGER);//设置环境属性
    ret=SQLAllocHandle(SQL_HANDLE_DBC,henv,&hdbc);//申请数据库连接句柄
    ret=SQLConnect(hdbc,(SQLCHAR*)"mysql-test",SQL_NTS,(SQLCHAR*)"root",SQL_NTS,(SQLCHAR*)"123456",SQL_NTS);//连接数据库
    ret=SQLAllocHandle(SQL_HANDLE_STMT,hdbc,&hstmt);//申请SQL语句句柄
    if(ret==SQL_SUCCESS || ret==SQL_SUCCESS_WITH_INFO)
        printf("success!\n");
    else printf("error!\n");
    return 0;
}
