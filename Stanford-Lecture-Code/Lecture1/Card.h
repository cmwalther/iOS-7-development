//
//  Card.h
//  Card
//
//  Created by Charly Walther on 5/23/14.
//  Copyright (c) 2014 Charly Walther. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

-(int)match:(NSArray *)otherCards;

@end
