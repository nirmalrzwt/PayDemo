//
//  PTKCard.h
//  PayTrek
//
//  Created by Apple on 24/06/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTKCard : NSObject

@property (nonatomic,strong) NSString *CardName;
@property (nonatomic,strong) NSString *CardNumber;
@property (nonatomic,strong) NSString *CardExpMonth;
@property (nonatomic,strong) NSString *CardExpYear;
@property (nonatomic,strong) NSString *CardCVV;

@end
