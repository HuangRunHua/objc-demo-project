//
//  DailyContent.h
//  hello-developer-ht
//
//  Created by Runhua Huang on 2024/6/18.
//

#import <Foundation/Foundation.h>
#import "Article.h"

NS_ASSUME_NONNULL_BEGIN

@interface DailyContent : NSObject
@property (nonatomic, strong) NSString *navigationTitle;
@property (nonatomic, strong) NSString *articleDate;
@property (nonatomic, strong) NSString *inlineArticleImage;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *subtitle;
@property (nonatomic, copy) NSArray<DailyContent *> *contents;
@end

NS_ASSUME_NONNULL_END
