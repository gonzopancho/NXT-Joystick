//
//  MRNXTCommand.h
//  NXTKit
//
//  Copyright Matt Rajca 2010. All rights reserved.
//

#import "MRNXTConstants.h"

typedef void (^MRNXTResponseBlock) (id response);

@interface MRNXTCommand : NSObject {
  @private
	MRNXTResponseBlock _responseBlock;
}

@property (copy) MRNXTResponseBlock responseBlock;

- (Class)responseClass;

- (NXTCommandType)type; /* default is 'direct' */
- (uint8_t)identifier;
- (NSData *)data;

- (uint8_t)telegramType; /* don't override */

@end
