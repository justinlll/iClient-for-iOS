//
//  TransferSolutionResult.h
//  MapView
//
//  Created by supermap on 15-3-3.
//
//
/**
 * Class: TransferSolutionResult 
 * 换乘分析结果类。
 * 
 * Inherits from:
 *  - <NSObject>
 */
@class TransferSolution;
@class TransferGuide;

#import <Foundation/Foundation.h>

@interface TransferSolutionResult : NSObject
/**
 * APIProperty: defaultGuide
 * {TransferGuide} 默认的乘车方案的引导信息。
 */
@property(nonatomic,retain) TransferGuide *defaultGuide;
/**
 * APIProperty: transferSolution
 * {NSMutableArray} 乘车方案集合。
 */
@property(nonatomic,retain) NSMutableArray *transferSolution;
/**
 * Constructor: TransferSolutionResult
 *      换乘分析结果类。
 *
 * Parameters:
 *      dict - {NSDictionary} 对象。
 */
-(instancetype)initWithDict:(NSDictionary *)dict;
@end
