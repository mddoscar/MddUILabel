//
//  MddUILabel.h
//  ChildrenLocation
//
//  Created by szalarm on 15/10/31.
//  Copyright © 2015年 szalarm. All rights reserved.
//

#import <UIKit/UIKit.h>

#pragma mark 排列
typedef enum
{
    VerticalAlignmentTop = 0, // default
    VerticalAlignmentMiddle,
    VerticalAlignmentBottom,
} VerticalAlignment;

/*
 可排列标签
 lbl_mylabel = [[MddUILabel alloc] initWithFrame:CGRectMake(20, 50, 150, 600)];
 UIColor *color = [UIColor colorWithPatternImage:[UIImage imageNamed:@"halfTransparent.png"]];//使用半透明图片作为label的背景色
 lbl_mylabel.backgroundColor = color;
 lbl_mylabel.textAlignment = NSTextAlignmentLeft;//(ios 6)UITextAlignmentLeft;
 lbl_mylabel.textColor = UIColor.whiteColor;
 lbl_mylabel.lineBreakMode = NSLineBreakByWordWrapping;//(ios6)UILineBreakModeWordWrap;
 lbl_mylabel.numberOfLines = 0;
 [lbl_mylabel setVerticalAlignment:VerticalAlignmentTop];
 [self addSubview:lbl_mylabel];
 */
@interface MddUILabel : UILabel
{
@private
    VerticalAlignment _verticalAlignment;
}

@property (nonatomic) VerticalAlignment verticalAlignment;

@end
