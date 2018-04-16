//
//  PassWordTool.h
//
//  Created by CY on 16/1/9.
//

#import <Foundation/Foundation.h>
typedef void (^KeychainSuccessBolck)(id data);
typedef void (^KeychainFailBolck)(OSStatus status);

@interface WWJKeychainManager : NSObject
/**
 *    @brief    存储用户数据
 *
 *    @param     info     用户信息
 */
+(void)saveKeychainInfoWithKey:(NSString *)key data:(NSDictionary *)info success:(KeychainSuccessBolck)successBlock fail:(KeychainFailBolck)failBlock;

/**
 *    @brief    读取用户数据
 */
+(void)loadKeychainInfoWithKey:(NSString *)key Success:(KeychainSuccessBolck)successBlock fail:(KeychainFailBolck)failBlock;

/**
 *    @brief    删除用户数据
 */
+(void)deleteKeychainInfoWithKey:(NSString *)key Success:(KeychainSuccessBolck)successBlock fail:(KeychainFailBolck)failBlock;

@end
