//
//  ViewController.h
//  ky_connect
//
//  Created by SwedeN Connectivity AB on 01/04/16.
//  Copyright © 2016 ky. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FBSDKLoginKit/FBSDKLoginKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet FBSDKLoginButton *loginButton;
@end

