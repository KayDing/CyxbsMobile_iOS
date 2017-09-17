//
//  LZWeekScrollView.h
//  MoblieCQUPT_iOS
//
//  Created by 李展 on 2017/8/25.
//  Copyright © 2017年 Orange-W. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol LZWeekScrollViewDelegate <NSObject>

@required

- (void)eventWhenTapAtIndex:(NSInteger)index;

@end

@interface LZWeekScrollView : UIScrollView
@property (weak,nonatomic) id<LZWeekScrollViewDelegate> eventDelegate;
@property NSArray <NSString *> *titles;
@property (readonly) NSInteger currentIndex;

- (instancetype)initWithFrame:(CGRect)frame andTitles:(NSArray <NSString *> *)titles;

- (void)scrollToIndex:(NSInteger)index;

@end