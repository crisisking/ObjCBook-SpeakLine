//
//  SpeakLineAppDelegate.h
//  SpeakLine
//
//  Created by Bryan Koroleski on 10/6/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface SpeakLineAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (retain) IBOutlet NSWindow *window;

@end
