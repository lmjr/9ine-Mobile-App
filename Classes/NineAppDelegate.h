//
//  NineAppDelegate.h
//  Nine
//
//  Created by Just Think on 3/23/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NineAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	UIScrollView *bgScrollView;
	UIImageView *featureImage;
	//UIButton *featureScreenAButton;
	UINavigationController *mainNavigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UIScrollView	*bgScrollView;
@property (nonatomic, retain) IBOutlet UIImageView *featureImage;
@property (nonatomic, retain) IBOutlet UINavigationController *mainNavigationController;

//@property (nonatomic, retain) IBAction UIButton *featureScreenAButton;

-(IBAction) featureScreenAPressed:(UIButton *)sender;

@end
