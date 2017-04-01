//
//  Check.h
//  正则表达式
//
//  Created by 启微时代 on 2017/3/20.
//  Copyright © 2017年 启微时代. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Check : NSObject
+ (BOOL)checkTelNumber:(NSString *) telNumber;
+ (BOOL)checkPassword:(NSString *) password;
+ (BOOL)checkUserName : (NSString *) userName;
+ (BOOL)checkUserIdCard: (NSString *) idCard;
+ (BOOL)checkEmployeeNumber : (NSString *) number;
+ (BOOL)checkURL : (NSString *) url;
@end
