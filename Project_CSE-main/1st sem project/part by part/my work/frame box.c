void bigbox_shape()
{


    /// uporer horizontal line
    int x = 22;
    int y = 5;
    gotoxy(x,y);
    int len = 71;
    for (int i = 0; i < len; i++) {
        printf(MAGENTA"%c"RESET ,0+2500);
    }
    ///bamer vertical line
    int x1 = 22;
    int st_y2= 6;
    int end_y2 = 25;
    for (int y22 = st_y2; y22 <= end_y2; y22++) {
        gotoxy(x1,y22);
        printf( MAGENTA "''" RESET);
    }
    ///daner vertical line
    int x2 = 91;
    int st_y3= 6;
    int end_y3= 25;
    for (int y33 = st_y3; y33<= end_y3; y33++) {
        gotoxy(x2,y33);
        printf( MAGENTA "''" RESET);
    }
    ///nicher horizontal line
    int x3= 22;
    int y3 = 25;
    gotoxy(x3,y3);
    int len2 = 71;
    for (int i2 = 0; i2 < len2; i2++) {
        printf(MAGENTA"%c"RESET, 0+2500);
    }
}
