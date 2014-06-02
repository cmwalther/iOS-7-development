//
//  MeetupCommunicator.m
//  BrowseMeetup
//
//  Created by Charly Walther on 5/27/14.
//  Copyright (c) 2014 TAMIM Ziad. All rights reserved.
//  Adapted for learning purporses by Charly Walther
//


#import "MeetupCommunicator.h"
#import "MeetupCommunicatorDelegate.h"

#define API_KEY @"4b5310281c2e543838b113e4f604229"
#define PAGE_COUNT 20

@implementation MeetupCommunicator

- (void)searchGroupsAtCoordinate:(CLLocationCoordinate2D)coordinate
{
    NSString *urlAsString = [NSString stringWithFormat:@"https://api.meetup.com/2/groups?lat=%f&lon=%f&page=%d&key=%@", coordinate.latitude, coordinate.longitude, PAGE_COUNT, API_KEY];
    NSURL *url = [[NSURL alloc] initWithString:urlAsString];
    NSLog(@"%@", urlAsString);
    
    NSLog(@"sending NSURL Request");
    [NSURLConnection sendAsynchronousRequest:[[NSURLRequest alloc] initWithURL:url] queue:[[NSOperationQueue alloc] init] completionHandler:^(NSURLResponse *response, NSData *data, NSError *error) {
        
        if (error) {
            NSLog(@"NSURL request error");
            [self.delegate fetchingGroupsFailedWithError:error];
        } else {
            NSLog(@"NSURL request success");
            [self.delegate receivedGroupsJSON:data];
        }
    }];
}

@end
