/*                                      48 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────┬────────────────────────╮ ╭────────────────────────────────────────────────────╮
  │  0   1   2   3   4   5 │  6   7   8   9  10  11 │ │ TR1 TR2 TR3 TR4 TR5 TR6 TR7 TR8 TR9 TR10 TR11 TR12 │
  │ 12  13  14  15  16  17 │ 18  19  20  21  22  23 │ │ MR1 MR2 MR3 MR4 MR5 MR6 MR7 MR8 MR9 MR10 MR11 MR12 │
  │ 24  25  26  27  28  29 │ 30  31  32  33  34  35 │ │ BR1 BR2 BR3 BR4 BR5 BR6 BR7 BR8 BR9 BR10 BR11 BR12 │
  │ 36  37  38  39  40  41 │ 42  43  44  45  46  47 │ │ TH1 TH2 TH3 TH4 TH5 TH6 TH7 TH8 TH9 TH10 TH11 TH12 │
  ╰────────────────────────┴────────────────────────╯ ╰────────────────────────────────────────────────────╯ */

#pragma once

// top row
#define TR1  0
#define TR2  1
#define TR3  2
#define TR4  3
#define TR5  4
#define TR6  5
#define TR7  6
#define TR8  7
#define TR9  8
#define TR10 9
#define TR11 10
#define TR12 11

// middle row
#define MR1  12
#define MR2  13
#define MR3  14
#define MR4  15
#define MR5  16
#define MR6  17
#define MR7  18
#define MR8  19
#define MR9  20
#define MR10 21
#define MR11 22
#define MR12 23

// bottom row
#define BR1  24
#define BR2  25
#define BR3  26
#define BR4  27
#define BR5  28
#define BR6  29
#define BR7  30
#define BR8  31
#define BR9  32
#define BR10 33
#define BR11 34
#define BR12 35

// thumb row
#define TH1  36
#define TH2  37
#define TH3  38
#define TH4  39
#define TH5  40
#define TH6  41
#define TH7  42
#define TH8  43
#define TH9  44
#define TH10 45
#define TH11 46
#define TH12 47

// key positions
#define KEYS_L TR1 TR2 TR3 TR4 TR5 MR1 MR2 MR3 MR4 MR5 BR1 BR2 BR3 BR4 BR5
#define KEYS_R TR8 TR9 TR10 TR11 TR12 MR8 MR9 MR10 MR11 MR12 BR8 BR9 BR10 BR11 BR12
#define THUMBS TH3 TH4 TH5 TH8 TH9 TH10

// layers
#define AL 0
#define FN 1
#define RT 2
#define NV 3

// key names
#define ___ &none
#define VVV &trans
#define SP SPACE

// modifiers
#define LCT LEFT_CONTROL
#define RCT RIGHT_CONTROL
#define LAL LEFT_ALT
#define RAL RIGHT_ALT
#define LCM LEFT_GUI
#define RCM RIGHT_GUI
#define LSH LEFT_SHIFT
#define RSH RIGHT_SHIFT

// to navigate through spaces
#define GL LC(LEFT)
#define GU LC(UP)
#define GR LC(RIGHT)

// combo speeds
#define COMBO_FAST 30
#define COMBO_NORM 50
#define COMBO_SLOW 90
