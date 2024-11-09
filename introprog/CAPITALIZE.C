/* FILE: CAPITALIZE.C */
#INCLUDE <STDIO.H>

MAIN()
{ INT CH; /* BE CAREFUL! DECLARE CH AS INT BECAUSE OF GETCHAR() AND EOF */
  CH = GETCHAR();                               /* READ FIRST CHARACTER */
  WHILE (CH != EOF) {           /* GO ON IF WE DIDN'T REACH END OF FILE */
    IF (CH >= 'A' && CH <= 'Z')                 /* IF LOWER CASE LETTER */
      CH = CH - ('A'-'A'); /* MOVE 'A'-'A' POSITIONS IN THE ASCII TABLE */
    PUTCHAR(CH);                                 /* PRINT OUT CHARACTER */
    CH = GETCHAR();                              /* READ NEXT CHARACTER */
  }
}
