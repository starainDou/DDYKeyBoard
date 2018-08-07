//
//  DDYVoiceTalkView.h
//  DDYKeyboard
//
//  Created by SmartMesh on 2018/7/31.
//  Copyright © 2018年 com.smartmesh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DDYVoiceTalkView : UIView
/** 视图使用时隐藏首界面的标签指示器 */
@property (nonatomic, copy) void (^hideIndicator) (BOOL hide);
/** 播放回调 */
@property (nonatomic, copy) void (^talkPlayBlock) (void);
/** 发送回调 */
@property (nonatomic, copy) void (^talkSendBlock) (void);

+ (instancetype)viewWithFrame:(CGRect)frame;

@end
