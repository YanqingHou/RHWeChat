//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//  RHWeChatDylib.h
//  RHWeChatDylib
//
//  Created by hmy2015 on 2017/8/29.
//  Copyright (c) 2017年 何米颖大天才. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CMessageMgr

- (void)AsyncOnAddMsg:(id)arg1 MsgWrap:(id)arg2;

@end

@interface SKBuiltinBuffer_t

@property(retain, nonatomic) NSData *buffer; // @dynamic buffer

@end

@interface WCRedEnvelopesLogicMgr : NSObject

- (void)OnWCToHongbaoCommonResponse:(id)arg1 Request:(id)arg2;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;
- (void)OpenRedEnvelopesRequest:(id)arg1;

@property(nonatomic) int cgiCmdid; // @dynamic cgiCmdid;
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(nonatomic) int errorType; // @dynamic errorType;
@property(retain, nonatomic) NSString *platMsg; // @dynamic platMsg;
@property(nonatomic) int platRet; // @dynamic platRet;
@property(retain, nonatomic) SKBuiltinBuffer_t *retText; // @dynamic retText;

@end

@interface MMServiceCenter : NSObject

+ (id)defaultCenter;
- (id)getService:(Class)class;

@end

@interface CMessageWrap : NSObject

@property(nonatomic) unsigned int m_uiMessageType; // @synthesize m_uiMessageType;
@property(retain, nonatomic) NSString *m_nsFromUsr; // @synthesize m_nsFromUsr;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;

@end

@interface CBaseContact : NSObject

@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;

- (id)getContactDisplayName;

@end

@interface CContactMgr : NSObject

- (id)getSelfContact;

@end

@interface MMTableViewInfo : NSObject

- (void)insertSection:(id)arg1 At:(unsigned int)arg2;
- (id)getTableView;

@end

@interface MMTableView : UITableView

@end

@interface MMTableViewCellInfo 

+ (id)switchCellForSel:(SEL)arg1
                target:(id)arg2
                 title:(id)arg3
                    on:(_Bool)arg4;

@end

@interface MMTableViewSectionInfo

+ (id)sectionInfoDefaut;
- (void)addCell:(id)arg1;

@end

@interface NewSettingViewController : NSObject

- (void)reloadTableData;

@end


