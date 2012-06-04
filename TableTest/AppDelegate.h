//
//  AppDelegate.h
//  TableTest
//
//  Created by Cory Hymel on 6/1/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate, NSTableViewDelegate, NSTableViewDataSource> {
    NSMutableArray *iPodVolumes, *songs;
}

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (weak) IBOutlet NSTableView *table;
@property (weak) IBOutlet NSTextField *textField;
@property (weak) IBOutlet NSButton *saveButton;

@property (nonatomic, retain) NSMutableArray *iPodVolumes, *songs;
- (IBAction)saveNewText:(id)sender;

- (IBAction)tableTapped:(id)sender;
- (IBAction)saveAction:(id)sender;

@end
