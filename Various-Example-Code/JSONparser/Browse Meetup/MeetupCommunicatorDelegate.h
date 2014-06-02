//
//  MeetupCommunicatorDelegate.h
//  BrowseMeetup
//
//  Created by Charly Walther on 5/27/14.
//  Copyright (c) 2014 TAMIM Ziad. All rights reserved.
//  Adapted for learning purporses by Charly Walther
//

#import <Foundation/Foundation.h>

@protocol MeetupCommunicatorDelegate
- (void)receivedGroupsJSON:(NSData *)objectNotation;
- (void)fetchingGroupsFailedWithError:(NSError *)error;
@end
