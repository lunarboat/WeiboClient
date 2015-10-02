//
//  comment.h
//  WeiboClient
//
//  Created by lunarboat on 15/10/1.
//  Copyright © 2015年 lunarboat. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UsersInfo.h"

@interface Comment : NSObject

@property (nonatomic, copy) NSString *created_at;
@property (nonatomic, copy) NSString *idStr;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, retain) UsersInfo *user;

@end
