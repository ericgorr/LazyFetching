//
//  Item.h
//  LazyFetching
//
//  Created by Eric Gorr on 5/19/13.
//  Copyright (c) 2013 Eric Gorr. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Shelf;

@interface Item : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) Shelf *parent;

@end
