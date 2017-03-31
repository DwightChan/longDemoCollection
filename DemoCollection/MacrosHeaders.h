//
//  MacrosHeaders.h
//  DemoCollection
//
//  Created by 许龙 on 16/4/15.
//  Copyright © 2016年 许龙. All rights reserved.
//

#ifndef MacrosHeaders_h
#define MacrosHeaders_h


#define kScreenWidth    [UIScreen mainScreen].bounds.size.width

#define kScreenHeight   [UIScreen mainScreen].bounds.size.height

#define kJSPatchKey     @"99c3b3f8a9898f87"


/**
 *  配置文件用的Key
 */

#define kConfigTitle                     @"kConfigTitle"

#define kConfigImage                     @"kConfigImage"

#define kConfigSelector                  @"kConfigSelector"

#define kConfigPushVC                    @"kConfigPushVC"

#define kConfigCellHeight                @"kConfigCellHeight"

#define kConfigContent                   @"kConfigContent"


//Today
#define kTodayName                       @"kTodayName"

/**
 *  @author god~long, 16-04-28 16:04:18
 *
 *  颜色
 */

#define RandomColor   [UIColor colorWithRed:arc4random()%250/250.0 green:arc4random()%250/250.0 blue:arc4random()%250/250.0 alpha:1.0f]



#endif /* MacrosHeaders_h */
