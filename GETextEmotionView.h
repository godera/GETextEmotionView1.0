//
//  GETextEmotionView.h
//  CBEmotionView
//
//  Created by sunyanliang on 13-9-7.
//  Copyright (c) 2013年. All rights reserved.
//
//ARC
//GETextEmotionView 1.0版。该版先分析、拆分，然后绘图。会多占用一倍左右内存
/*
 -usage:(now just supports for chinese characters)
 
 //Example1-for common use:
 GETextEmotionView* emotionView = [[GETextEmotionView alloc] initWithFrame:CGRectMake(0, 0, 160, 0)];//no need to set height,sizeToFit can reset it.
 emotionView.emotionString = @"an emotion stringan emotion stringan emotion string";
 emotionView.font = [UIFont systemFontOfSize:20];
 [self.view addSubview:emotionView];
 [emotionView sizeToFit];
 
 //Example2-for cell use:
 if (_emotionView == nil) {
 _emotionView = [[GETextEmotionView alloc] initWithFrame:CGRectMake(10, 6, 300, 0)];//no need to set height,sizeToFit can reset it.
 _emotionView.textColor = [UIColor colorWithRed:95.0/255.0 green:86.0/255.0 blue:70.0/255.0 alpha:1];
 [self.contentView addSubview:_emotionView];
 }
 _desc.emotionString = describeValue;
 */
#import <UIKit/UIKit.h>

@interface GETextEmotionView : UIView

@property (strong, nonatomic) UIFont* font;
@property (strong, nonatomic) UIColor* textColor;
@property (copy, nonatomic) NSString* emotionString;
@property (assign, nonatomic) BOOL heightAutosizing;
@property (assign, nonatomic) float rowInterval;

//not exact.use below addSubview:
-(void)sizeToFit;

@end
