//
//  Overlay.h
//  Adblock Fast
//
//  Created by Brian Kennish on 10/10/15.
//  Copyright © 2015, 2016 Rocketship. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Overlay : UIButton

+ (Overlay *)open;
- (Overlay *)initWithHeight:(CGFloat)height
                       text:(NSAttributedString *)text
                  frameSize:(CGSize)frameSize;
- (void)open;
- (void)close;

@end
