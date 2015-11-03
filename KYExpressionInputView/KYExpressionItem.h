//
//  KYExpressionItem.h
//  KYCustomExpressionView
//
//  Created by YamatoKira on 15/11/2.
//  Copyright © 2015年 YamatoKira. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KYExpressionData.h"
#import "KYExpressionPackageProtocol.h"


@interface KYExpressionItem : NSObject <KYExpressionData>

// inital method
+ (instancetype)itemWithImage:(UIImage *)image url:(NSString *)url;

+ (instancetype)itemWithData:(NSData *)data url:(NSString *)url;

+ (instancetype)itemWithEmoji:(NSString *)emoji;

+ (instancetype)deleteItem;

- (instancetype)initWithData:(NSData *)data url:(NSString *)url;

- (instancetype)initWithImage:(UIImage *)image url:(NSString *)url;

- (instancetype)initWithEmoji:(NSString *)emoji;

@end
