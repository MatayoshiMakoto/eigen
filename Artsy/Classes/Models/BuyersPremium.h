#import "MTLModel.h"

@interface BuyersPremium : MTLModel <MTLJSONSerializing>

@property (nonatomic, copy, readonly) NSString *buyersPremiumID;

@end
