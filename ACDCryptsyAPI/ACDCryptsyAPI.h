//
//  CryptsyModel.h
//  iCryptsy
//
//  Created by Blake Schwendiman on 12/24/13.
//  Copyright 2013 Viking Rick's, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^CryptsyAPISuccessBlock)(id response);
typedef void (^CryptsyAPIErrorBlock)(NSError *error);


@interface ACDCryptsyAPI : NSObject

- (id)initWithApiKey:(NSString *)apiKey andSecret:(NSString *)secret;
- (void)apiQuery:(NSString *)method params:(NSDictionary *)params success:(CryptsyAPISuccessBlock)success error:(CryptsyAPIErrorBlock)error;

@end
