//
//  CKCalendarCalendarCellColors.h
//   MBCalendarKit
//
//  Created by Moshe Berman on 4/10/13.
//  Copyright (c) 2013 Moshe Berman. All rights reserved.
//

/*
 
 Defines standard colors for MBCalendarCalendarView. These were grabbed using the
 color picker in Photoshop CS6 on OS X. There's a gradient across the calendar,
 from the top down, so the colors change slightly by row.
 
 Selected Blue: #1980e5
 Normal Gray (Top Row): #e2e2e4
 Normal Gray (Bottom Row): #cccbd0
 
 Text Gradient Top Color: #2b3540
 Text Gradient Bottom Color: #495a6d
 
 */


#ifndef MBCalendarKit_CKCalendarCalendarCellColors_h
#define MBCalendarKit_CKCalendarCalendarCellColors_h

#import "NSString+Color.h"

#define kCalendarColorBlue [@"#cb0000" toColor]
#define kCalendarColorLightGray [@"#fef2e2" toColor]
#define kCalendarColorDarkGray [@"#efdabe" toColor]

#define kCalendarColorBluishGray [@"#dcad6e" toColor]
#define kCalendarColorTodayShadowBlue [@"#bb925e" toColor]
#define kCalendarColorSelectedShadowBlue [@"#8a0101" toColor]

#define kCalendarColorDarkTextGradient [@"#000000" toColor]
#define kCalendarColorLightTextGradient [@"#000000" toColor]

#define kCalendarColorCellBorder [@"#b09e86" toColor]
#define kCalendarColorSelectedCellBorder [@"#b09e86" toColor]


#endif
