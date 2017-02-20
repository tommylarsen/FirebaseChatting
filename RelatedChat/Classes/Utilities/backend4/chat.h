//
// Copyright (c) 2016 Ryan
//

#import <Foundation/Foundation.h>

#import "DBRecent.h"
#import "DBUser.h"

//-------------------------------------------------------------------------------------------------------------------------------------------------
NSDictionary*	StartPrivateChat		(DBUser *dbuser2);

//-------------------------------------------------------------------------------------------------------------------------------------------------
NSDictionary*	StartMultipleChat		(NSArray *userIds);

//-------------------------------------------------------------------------------------------------------------------------------------------------
NSDictionary*	StartGroupChat			(FObject *group);

//-------------------------------------------------------------------------------------------------------------------------------------------------
NSDictionary*	RestartRecentChat		(DBRecent *dbrecent);

