//
//  MWMEnum.h
//  MindwaveApptranslateToSwift
//
//  Created by IOS Directed Study on 3/2/18.
//  Copyright © 2018 IOS Directed Study. All rights reserved.
//

#ifndef MWMEnum_h
#define MWMEnum_h
enum TGMWMConfigCMD : Int {
case _ChangeNotchTo_50
case _ChangeNotchTo_60
}


enum LoggingOptions : Int {
case _Raw = 1
    static let _Processed: LoggingOptions = 1 << 1
}


enum TGBleExceptionEvent : Int {
case tgBleUnexpectedEvent = 0
case tgBleConfigurationModeCanNotBeChanged = 1
case tgBleFailedOtherOperationInProgress = 2
case tgBleConnectFailedSuspectKeyMismatch = 3
case tgBlePossibleResetDetect = 4
case tgBleNewConnectionEstablished = 5
case tgBleStoredConnectionInvalid = 6
case tgBleConnectHeadSetDirectoryFailed = 7
case tgBleBluetoothModuleError = 8
case tgBleNoMfgDatainAdvertisement = 9
}

#endif /* MWMEnum_h */
