//
//  DALabeledCircularProgressView.h
//  DACircularProgressExample
//
//  Created by Josh Sklar on 4/7/14.
//  Copyright (c) 2014 Shout Messenger. All rights reserved.
//

#import "DACircularProgressView.h"

@interface DALabeledCircularProgressView : DACircularProgressView

/**
 UILabel placed right on the DACircularProgressView.
 */
@property (strong, nonatomic) UILabel *progressLabel;

@end
