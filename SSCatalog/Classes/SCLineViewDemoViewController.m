//
//  SCLineViewDemoViewController.m
//  SSCatalog
//
//  Created by Sam Soffes on 4/19/10.
//  Copyright 2010 Sam Soffes, Inc. All rights reserved.
//

#import "SCLineViewDemoViewController.h"
#import <SSToolkit/SSToolkit.h>

@implementation SCLineViewDemoViewController

#pragma mark -
#pragma mark Class Methods
#pragma mark -

+ (NSString *)title {
	return @"Line View";
}


#pragma mark -
#pragma mark UIViewController
#pragma mark -

- (void)viewDidLoad {
	[super viewDidLoad];
	self.title = [[self class] title];
	self.view.backgroundColor = [UIColor groupTableViewBackgroundColor];
	
	SSLineView *lineView1 = [[SSLineView alloc] initWithFrame:CGRectMake(20.0, 20.0, 280.0, 2.0)];
	[self.view addSubview:lineView1];
	[lineView1 release];
	
	SSLineView *lineView2 = [[SSLineView alloc] initWithFrame:CGRectMake(20.0, 42.0, 280.0, 2.0)];
	lineView2.lineColor = [UIColor blueColor];
	[self.view addSubview:lineView2];
	[lineView2 release];
}

@end
