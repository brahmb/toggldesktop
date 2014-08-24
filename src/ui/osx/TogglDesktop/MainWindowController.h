//
//  MainWindowController.h
//  Toggl Desktop on the Mac
//
//  Created by Tambet Masik on 9/24/13.
//  Copyright (c) 2013 TogglDesktop developers. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "kopsik_api.h"

@interface MainWindowController : NSWindowController
@property IBOutlet NSView *contentView;
@property IBOutlet NSTextField *errorLabel;
@property IBOutlet NSBox *troubleBox;
@property IBOutlet NSButton *closeTroubleBoxButton;
@property BOOL isNetworkIssue;
@property (strong) IBOutlet NSView *mainView;
@end
