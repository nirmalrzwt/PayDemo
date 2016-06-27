//
//  PTKClient.m
//  PayTrek
//
//  Created by Apple on 24/06/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import "PTKClient.h"
#import "PTKCard.h"

static NSString *UserName;
static NSString *Password;
static NSString *PTKDefaultPublishableKey;

@implementation PTKClient

+ (void)setClientUserName:(nonnull NSString *)username Password:(nonnull NSString *)password PublisherKey:(nonnull NSString *)publishableKey{
    UserName = username;
    Password = password;
    PTKDefaultPublishableKey = publishableKey;
}

@end
