//
//  SSViewController.h
//  SSToolkit
//
//  Created by Sam Soffes on 7/14/10.
//  Copyright 2010 Sam Soffes. All rights reserved.
//
//  TODO: Support iPhone and iPhone 4
//

#import "SSModalViewController.h"

@interface SSViewController : UIViewController <SSModalViewController> {

	SSViewController *_modalParentViewController;
	id<SSModalViewController> _customModalViewController;
	BOOL _dismissCustomModalOnVignetteTap;
	CGSize _contentSizeForViewInCustomModal;
	
	UIView *_modalContainerView;
	UIImageView *_modalContainerBackgroundView;
	UIButton *_vignetteButton;
}

@property (nonatomic, assign) SSViewController *modalParentViewController;
@property (nonatomic, retain, readonly) UIViewController *customModalViewController;
@property (nonatomic, assign) BOOL dismissCustomModalOnVignetteTap;
@property (nonatomic, assign) CGSize contentSizeForViewInCustomModal;

- (void)layoutViews;
- (void)layoutViewsWithOrientation:(UIInterfaceOrientation)orientation;

- (void)presentCustomModalViewController:(id<SSModalViewController>)viewController;
- (void)presentCustomModalViewController:(id<SSModalViewController>)viewController animated:(BOOL)animated;
- (void)dismissCustomModalViewController;
- (void)dismissCustomModalViewController:(BOOL)animated;

- (void)customModalWillAppear:(BOOL)animated;
- (void)customModalDidAppear:(BOOL)animated;
- (void)customModalWillDisappear:(BOOL)animated;
- (void)customModalDidDisappear:(BOOL)animated;

@end
