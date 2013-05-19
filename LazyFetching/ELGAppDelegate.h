//
//  ELGAppDelegate.h
//  LazyFetching
//
//  Created by Eric Gorr on 5/19/13.
//  Copyright (c) 2013 Eric Gorr. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ELGAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow*			window;
@property (assign) IBOutlet NSArrayController*	shelfController;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction) saveAction:(id)sender;
- (IBAction) infoAction:(id)sender;


@end
