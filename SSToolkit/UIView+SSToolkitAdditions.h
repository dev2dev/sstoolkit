//
//  UIView+imageRepresentation.h
//  SSToolkit
//
//  Created by Sam Soffes on 2/15/10.
//  Copyright 2010 Sam Soffes. All rights reserved.
//

@interface UIView (imageRepresentation)

- (UIImage *)imageRepresentation;

- (void)hide;
- (void)show;

- (void)fadeOut;
- (void)fadeOutAndPerformSelector:(SEL)selector;
- (void)fadeOutAndPerformSelector:(SEL)selector withObject:(id)object;

- (void)fadeIn;
- (void)fadeInAndPerformSelector:(SEL)selector;
- (void)fadeInAndPerformSelector:(SEL)selector withObject:(id)object;

- (void)fadeAlphaTo:(CGFloat)targetAlpha;
- (void)fadeAlphaTo:(CGFloat)targetAlpha andPerformSelector:(SEL)selector;
- (void)fadeAlphaTo:(CGFloat)targetAlpha andPerformSelector:(SEL)selector withObject:(id)object;

@end
