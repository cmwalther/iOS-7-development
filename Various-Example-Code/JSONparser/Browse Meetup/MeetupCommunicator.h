//
//  MeetupCommunicator.h
//  BrowseMeetup
//
//  Created by Charly Walther on 5/27/14.
//  Copyright (c) 2014 TAMIM Ziad. All rights reserved.
//  Adapted for learning purporses by Charly Walther
//

#import <Foundation/Foundation.h>

#import <CoreLocation/CoreLocation.h>

@protocol MeetupCommunicatorDelegate;

@interface MeetupCommunicator : NSObject
@property (weak, nonatomic) id<MeetupCommunicatorDelegate> delegate;

- (void)searchGroupsAtCoordinate:(CLLocationCoordinate2D)coordinate;
@end