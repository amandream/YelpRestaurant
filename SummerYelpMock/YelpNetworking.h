//
//  YelpNetworking.h
//  SummerYelpMock
//
//  Created by mac on 2017/8/26.
//  Copyright © 2017年 msw. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YelpDataModel.h"

@class YelpDataModel;

@import CoreLocation;

typedef void (^RestaurantCompletionBlock)(NSArray<YelpDataModel *> *dataModelArray);

@interface YelpNetworking : NSObject

+ (YelpNetworking *)sharedInstance;

- (void)fetchRestaurantsBasedOnLocation:(CLLocation *)location term:(NSString *)term parameters:(NSDictionary *)parameters completionBlock:(RestaurantCompletionBlock)completionBlock;

@end


