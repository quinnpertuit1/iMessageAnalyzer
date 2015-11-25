//
//  TemporaryDatabaseManager.h
//  iMessageAnalyzer
//
//  Created by Ryan D'souza on 11/25/15.
//  Copyright © 2015 Ryan D'souza. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <sqlite3.h>

#import "MessageManager.h"

#import "Message.h"
#import "Person.h"
#import "Statistics.h"

@interface TemporaryDatabaseManager : NSObject

- (instancetype) initWithPerson:(Person*)person messages:(NSMutableArray*)messages;


#pragma GET_MESSAGES

- (NSMutableArray*) getAllMessagesForPerson:(Person *)person;
- (NSMutableArray*) getAllMessagesForPerson:(Person *)person startTimeInSeconds:(long)startTimeInSeconds endTimeInSeconds:(long)endTimeInSeconds;
- (NSMutableArray*) getAllMessagesForPerson:(Person*)person onDay:(NSDate*)day;


#pragma GET_COUNTS

- (int) getConversationMessageCountStartTime:(int)startTime endTime:(int)endTime;
- (int) getOtherMessagesCountStartTime:(int)startTime endTime:(int)endTime;

- (int) getMySentMessagesCountInConversationStartTime:(int)startTime endTime:(int)endTime;
- (int) getMySentOtherMessagesCountStartTime:(int)startTime endTime:(int)endTime;

- (int) getReceivedMessagesCountInConversationStartTime:(int)startTime endTime:(int)endTime;
- (int) getReceivedOtherMessagesCountStartTime:(int)startTime endTime:(int)endTime;

@end