// some lookup tables

unsigned char baudot_figures[] = {
0x00,
' ',
'1',
'2',
'3',
'4',
'5',
'6',
'7',
'8',
'9',
'0',
'-',
7,
'$',
'!',
'&',
'#',
39,
'(',
')',
'"',
'/',
':',
';',
'?',
',',
'.',
13, // CR
10, // LF
};

unsigned char baudot_letters[] = {
0x00,
' ',
'Q', // 1
'W', // 2
'E', // 3
'R', // 4
'T', // 5
'Y', // 6
'U', // 7
'I', // 8
'O', // 9
'P', // 0
'A', // -
'S', // BELL
'D', // $
'F', // !
'G', // &
'H', // #
'J', // '
'K', // (
'L', // )
'Z', // "
'X', // /
'C', // :
'V', // ;
'B', // ?
'N', // ,
'M', // .
13, // CR
10, // LF
};


unsigned char baudot[] = {
0x0,
0x4,
0x1d,
0x19,
0x10,
0xa,
0x1,
0x15,
0x1c,
0xc,
0x3,
0xd,
0x18,
0x14,
0x12,
0x16,
0xb,
0x5,
0x1a,
0x1e,
0x9,
0x11,
0x17,
0xe,
0xf,
0x13,
0x6,
0x7,
0x2,
0x8,
0x1b,
0x1f,
};
