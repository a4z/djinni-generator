// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from my_record.djinni

#import "ITMyRecord.h"


NSString * __nonnull const ITMyRecordStringConst = @"Constants can be put here";

@implementation ITMyRecord

- (nonnull instancetype)initWithId:(int32_t)id
                              info:(nonnull NSString *)info
                             store:(nonnull NSSet<NSString *> *)store
                              hash:(nonnull NSDictionary<NSString *, NSNumber *> *)hash
{
    if (self = [super init]) {
        _id = id;
        _info = [info copy];
        _store = [store copy];
        _hash = [hash copy];
    }
    return self;
}

+ (nonnull instancetype)myRecordWithId:(int32_t)id
                                  info:(nonnull NSString *)info
                                 store:(nonnull NSSet<NSString *> *)store
                                  hash:(nonnull NSDictionary<NSString *, NSNumber *> *)hash
{
    return [(ITMyRecord*)[self alloc] initWithId:id
                                            info:info
                                           store:store
                                            hash:hash];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p id:%@ info:%@ store:%@ hash:%@>", self.class, (void *)self, @(self.id), self.info, self.store, self.hash];
}

@end
