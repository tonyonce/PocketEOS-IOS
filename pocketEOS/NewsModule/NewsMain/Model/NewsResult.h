//
//  NewsResult.h
//  pocketEOS
//
//  Created by oraclechain on 2017/12/27.
//  Copyright © 2017年 oraclechain. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NewsResult : NSObject

@property(nonatomic, strong) NSString *message;


@property(nonatomic, strong) NSNumber *code;
@property(nonatomic, strong) NSMutableArray *data;

@end
