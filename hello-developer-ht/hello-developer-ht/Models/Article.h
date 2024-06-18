//
//  Article.h
//  hello-developer-ht
//
//  Created by Runhua Huang on 2024/6/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ImageContent : NSObject
@property (strong, nonatomic) NSString *url;
@property (assign, nonatomic) NSUInteger width;
@end

@interface DescriptionContent : NSObject
@property (strong, nonatomic) NSString *scheme;
@property (strong, nonatomic) NSString *description;
@end

@interface Article : NSObject
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *subtitle;
@property (copy, nonatomic) ImageContent *imageContent;
@property (copy, nonatomic) DescriptionContent *descriptionContent;
@end

NS_ASSUME_NONNULL_END
