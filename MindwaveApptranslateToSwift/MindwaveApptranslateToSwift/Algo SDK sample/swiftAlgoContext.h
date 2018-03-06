//
//  swiftAlgoContext.h
//  MindwaveApptranslateToSwift
//
//  Created by IOS Directed Study on 2/27/18.
//  Copyright © 2018 IOS Directed Study. All rights reserved.
//

#ifndef swiftAlgoContext_h
#define swiftAlgoContext_h


import Foundation

struct _ALGO_SETTING {
    var xRange: Float = 0.0
    var plotMinY: Float = 0.0
    var plotMaxY: Float = 0.0
    var interval: Int = 0
    var minInterval: Int = 0
    var maxInterval: Int = 0
    var bcqThreshold: Int = 0
    var bcqValid: Int = 0
    var bcqWindow: Int = 0
}
typealias ALGO_SETTING = _ALGO_SETTING

class AlgoContext: NSObject {
    var isPlotAvailable = false
    var graphTitle = ""
    var xRange: Float = 0.0
    var plotMinY: Float = 0.0
    var plotMaxY: Float = 0.0
    var interval: Int = 0
    var minInterval: Int = 0
    var maxInterval: Int = 0
    // for BCQ
    var bcqThreshold: Int = 0
    var bcqValid: Int = 0
    var bcqWindow: Int = 0
    
    func setSetting(_ setting: ALGO_SETTING) {
    }
    
    func getPlotCount() -> Int {
    }
    
    func setPlot(_ pt: CPTPlot, idx: Int) {
    }
    
    func getPlot(_ idx: Int) -> CPTPlot {
    }
    
    func setIndex(_ idx: Int) {
    }
    
    func getIndex(_ idx: Int) -> [AnyHashable] {
    }
    
    func setPlotName(_ name: String, idx: Int) {
    }
    
    func getPlotName(_ idx: Int) -> String {
    }
    
    func getPlotColor(_ idx: Int) -> CPTColor {
    }
}


#endif /* swiftAlgoContext_h */
