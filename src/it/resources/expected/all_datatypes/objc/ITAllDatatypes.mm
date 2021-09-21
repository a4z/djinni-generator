// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from all_datatypes.djinni

#import "ITAllDatatypes.h"


@implementation ITAllDatatypes

- (nonnull instancetype)initWithBooleanData:(BOOL)booleanData
                               integer8Data:(int8_t)integer8Data
                              integer16Data:(int16_t)integer16Data
                              integer32Data:(int32_t)integer32Data
                              integer64Data:(int64_t)integer64Data
                                float32Data:(float)float32Data
                                float64Data:(double)float64Data
                                 stringData:(nonnull NSString *)stringData
                                 binaryData:(nonnull NSData *)binaryData
                                   dateData:(nonnull NSDate *)dateData
                                   listData:(nonnull NSArray<NSNumber *> *)listData
                                    setData:(nonnull NSSet<NSNumber *> *)setData
                                    mapData:(nonnull NSDictionary<NSNumber *, NSNumber *> *)mapData
                               optionalData:(nullable NSNumber *)optionalData
                                   enumData:(ITEnumData)enumData
{
    if (self = [super init]) {
        _booleanData = booleanData;
        _integer8Data = integer8Data;
        _integer16Data = integer16Data;
        _integer32Data = integer32Data;
        _integer64Data = integer64Data;
        _float32Data = float32Data;
        _float64Data = float64Data;
        _stringData = [stringData copy];
        _binaryData = [binaryData copy];
        _dateData = dateData;
        _listData = [listData copy];
        _setData = [setData copy];
        _mapData = [mapData copy];
        _optionalData = optionalData;
        _enumData = enumData;
    }
    return self;
}

+ (nonnull instancetype)allDatatypesWithBooleanData:(BOOL)booleanData
                                       integer8Data:(int8_t)integer8Data
                                      integer16Data:(int16_t)integer16Data
                                      integer32Data:(int32_t)integer32Data
                                      integer64Data:(int64_t)integer64Data
                                        float32Data:(float)float32Data
                                        float64Data:(double)float64Data
                                         stringData:(nonnull NSString *)stringData
                                         binaryData:(nonnull NSData *)binaryData
                                           dateData:(nonnull NSDate *)dateData
                                           listData:(nonnull NSArray<NSNumber *> *)listData
                                            setData:(nonnull NSSet<NSNumber *> *)setData
                                            mapData:(nonnull NSDictionary<NSNumber *, NSNumber *> *)mapData
                                       optionalData:(nullable NSNumber *)optionalData
                                           enumData:(ITEnumData)enumData
{
    return [(ITAllDatatypes*)[self alloc] initWithBooleanData:booleanData
                                                 integer8Data:integer8Data
                                                integer16Data:integer16Data
                                                integer32Data:integer32Data
                                                integer64Data:integer64Data
                                                  float32Data:float32Data
                                                  float64Data:float64Data
                                                   stringData:stringData
                                                   binaryData:binaryData
                                                     dateData:dateData
                                                     listData:listData
                                                      setData:setData
                                                      mapData:mapData
                                                 optionalData:optionalData
                                                     enumData:enumData];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p booleanData:%@ integer8Data:%@ integer16Data:%@ integer32Data:%@ integer64Data:%@ float32Data:%@ float64Data:%@ stringData:%@ binaryData:%@ dateData:%@ listData:%@ setData:%@ mapData:%@ optionalData:%@ enumData:%@>", self.class, (void *)self, @(self.booleanData), @(self.integer8Data), @(self.integer16Data), @(self.integer32Data), @(self.integer64Data), @(self.float32Data), @(self.float64Data), self.stringData, self.binaryData, self.dateData, self.listData, self.setData, self.mapData, self.optionalData, @(self.enumData)];
}

@end
