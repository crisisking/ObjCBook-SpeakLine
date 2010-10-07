//
//  AppController.m
//  SpeakLine
//
//  Created by Bryan Koroleski on 10/6/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//

#import "AppController.h"


@implementation AppController

- (id)init {
    if ((self = [super init])) {
        NSLog(@"init");
        synth = [[NSSpeechSynthesizer alloc] initWithVoice:nil];
    }
    
    return self;
}

- (IBAction)sayIt:(id)sender {
    NSString *string = [textField stringValue];
    if(![string length]) {
        NSLog(@"String from %@ is zero-length", textField);
        return;
    }
    
    [synth startSpeakingString:string];
    NSLog(@"Started saying %@", string);
}

- (IBAction)stopIt:(id)sender {
    NSLog(@"Stopping");
    [synth stopSpeaking];
}

- (void)dealloc {
    // Clean-up code here.
    [synth release];
    [super dealloc];
}

@end
