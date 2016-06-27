//
//  PTKClient.h
//  PayTrek
//
//  Created by Apple on 24/06/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTKClient : NSObject

+ (void)setClientUserName:(nonnull NSString *)username Password:(nonnull NSString *)password PublisherKey:(nonnull NSString *)publishableKey;

@end
