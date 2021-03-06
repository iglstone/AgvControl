//
//  AppMacro.h
//  HitProject
//
//  Created by 郭龙 on 15/11/6.
//  Copyright (c) 2015年 郭龙. All rights reserved.
//

#ifndef HitProject_AppMacro_h
#define HitProject_AppMacro_h

//监听端口
#define LISTEN_PORT 1234;
#define UDPBIND_PORT 8080;
#define UDPSTA_PORT 8081;

//robotName
//小红
#define ROBOTNAME_RED                       @"小红"

//小蓝
#define ROBOTNAME_BLUE                      @"小蓝"

//小金
#define ROBOTNAME_GOLD                      @"小金"

//typedef NS_ENUM(NSInteger, ROBOTNAME) {
//    ROBOTNAME_
//};


//notification
//连接成功
#define NOTICE_CONNECTSUCCESS               @"NOTICE_CONNECTSUCCESS"

//连接成功
#define NOTICE_LOGOUTSUCCESS                @"NOTICE_LOGOUTSUCCESS"

//连接失败
#define NOTICE_CONNECTFAIL                  @"NOTICE_CONNECTFAIL"

//连接失败
#define NOTICE_RESETPASSWORD                @"NOTICE_RESETPASSWORD"

//失去连接
#define NOTICE_DISCONNECT                   @"NOTICE_DISCONNECT"

//选择桌数
#define NOTICE_PICKDESKNUM                  @"NOTICE_PICKDESKNUM"

//选择歌曲数
#define NOTICE_PICKSONGNUM                  @"NOTICE_PICKSONGNUM"

//提示再发一次
#define NOTICE_TRYAGIAN                     @"NOTICE_TRYAGIAN"

//声音变化
#define NOTICE_VOICECHANGE                  @"NOTICE_VOICECHANGE"

//进入前台
#define NOTICE_FORGRAOUND                   @"NOTICE_FORGRAOUND"

//进入后台
#define NOTICE_BACKGROUND                   @"NOTICE_BACKGROUND"

//进入后台
#define NOTICE_CHANGEROBOTNAME              @"NOTICE_CHANGEROBOTNAME"

//没有robot的通知
#define NOTICE_NOROBOT                      @"NOTICE_NOROBOT"

#define NOTICE_OPEN_LOCAL_VIEW              @"NOTICE_OPEN_LOCAL_VIEW"

#define NOTICE_CLOSE_WEBVIEW                @"NOTICE_CLOSE_WEBVIEW"

//popview桌号确认修改按钮
#define NOTICE_POPVIEW_CONFIRM              @"NOTICE_POPVIEW_CONFIRM"

//popview歌曲确认修改按钮
#define NOTICE_SONGPOPVIEW_CONFIRM          @"NOTICE_SONGPOPVIEW_CONFIRM"

//change the socke mode and speed
#define NOTICE_CONFIG_MODE_SPEEDN          @"NOTICE_CONFIG_MODE_SPEEDN"

//post power notification
#define NOTICE_POWERNOTIFICATION           @"NOTICE_POWERNOTIFICATION"

//nsdefaut KEY
#define NSDEFAULT_REMEMBERCODE              @"NSDEFAULT_REMEMBERCODE"
#define NSDEFAULT_USERNAME                  @"NSDEFAULT_USERNAME"
//#define NSDEFAULT_REDROBOTIP                @"NSDEFAULT_REDROBOTIP"
//#define NSDEFAULT_BLUEROBOTIP               @"NSDEFAULT_BLUEROBOTIP"
//#define NSDEFAULT_GOLDROBOTIP               @"NSDEFAULT_GOLDROBOTIP"
#define NSDEFAULT_PickupDeskNum             @"NSDEFAULT_PickupDeskNum"
#define NSDEFAULT_PickupSongsNum            @"NSDEFAULT_PickupSongsNum"

#endif







