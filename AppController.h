//
//  AppController.h
//  SpeakLine
//
//  Created by Bryan Koroleski on 10/6/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface AppController : NSObject {

    IBOutlet NSTextField *textField;
    IBOutlet NSButton *start;
    IBOutlet NSButton *stop;
    NSSpeechSynthesizer *synth;
    
}

- (IBAction)sayIt:(id)sender;
- (IBAction)stopIt:(id)sender;

@end
