//
//  SlideCell.h
//  SlideStack
//
//  Created by Nemetschek A-Team on 3/23/17.
//  Copyright © 2017 Nemetschek. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PublicProtocols.h"



@interface SlideCell : UIView

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UITextView *descriptionTextView;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@property (nonatomic, weak) id <SlideCellDelegate> delegate;
@property NSInteger *cellState;

+(SlideCell*) getCell;

-(void)setDescription:(NSString *)description;
-(void)setImage:(UIImage *)image;
-(void)setTitle:(NSString *)title;

@end

