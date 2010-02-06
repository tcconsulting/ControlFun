//
//  Control_FunViewController.h
//  Control Fun
//
//  Created by Troy Carter on 7/22/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Control_FunViewController : UIViewController {
	UITextField	*nameField;
	UITextField *numberField;

}

@property (nonatomic, retain) IBOutlet UITextField *nameField;
@property (nonatomic, retain) IBOutlet UITextField *numberField;

@end

