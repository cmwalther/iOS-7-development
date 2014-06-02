//
//  Group.h
//  BrowseMeetup
//
//  Created by Charly Walther on 5/27/14.
//  Copyright (c) 2014 TAMIM Ziad. All rights reserved.
//  Adapted for learning purporses by Charly Walther
//

#import <Foundation/Foundation.h>

@interface Group : NSObject
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *description;
@property (strong, nonatomic) NSString *who;
@property (strong, nonatomic) NSString *country;
@property (strong, nonatomic) NSString *city;
@end