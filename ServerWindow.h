//
//  ServerWindow.h
//  MultiGPU
//
//  Created by Stefano Pigozzi on 4/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface ServerWindow : NSWindow
- (NSRect)constrainFrameRect:(NSRect)frameRect toScreen:(NSScreen *)screen;
@end
