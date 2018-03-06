//
//  LineGraphView.h
//  MindwaveApptranslateToSwift
//
//  Created by IOS Directed Study on 3/2/18.
//  Copyright © 2018 IOS Directed Study. All rights reserved.
//

#ifndef LineGraphView_h
#define LineGraphView_h
import Accelerate
import AVFoundation
import UIKit

//#import "TGLibEKG.h"
//#import "TGLibEKGdelegate.h"
let AVERAGE_COUNT = 50
let DECIMATE = 4
let BANDPASS_ENABLED = true
//#define BANDPASS_ENABLED NO
let CARDIO_SCALER = 0.3
let EEG_SCALER = 1.0
func GRID_ENABLED() -> Any {
    return false
}
let LINE_WIDTH = 1.0
class LineGraphView: UIView {
    weak var backgroundColor: UIColor?
    weak var lineColor: UIColor?
    weak var cursorColor: UIColor?
    var isCursorEnabled = false
    var isBandOnRightWrist = false
    weak var tagert: Any?
    var addTo: Selector?
    var scaler: Double = 0.0
    var xAxisMax: Double = 0.0
    
    var data = [AnyHashable]()
    var xAxisMin: Double = 0.0
    var yAxisMin: Double = 0.0
    var yAxisMax: Double = 0.0
    var dataRate: Int = 0
    var dataLock: NSLock?
    var startIndex: Int = 0
    var index: Int = 0
    var reDrawTimer: Timer?
    var redraw: Thread?
    var gridEnabled = false
    var touchEnabled = false
    var invertSignal = false
    //TGHrv * hrv;
    //int rrint;
    private var audio: AVAudioPlayer?
    private var pinch: UIPinchGestureRecognizer?
    private var taptap: UITapGestureRecognizer?
    private var newData = false
    private var decimateCount: Int = 0
    /* DC offset removal */
    private var averageCount: Int = 0
    private var average: Double = 0.0
    private var offsetRemovalEnabled = false
    // for bandpass filter
    private var ECGbuffer = [Float]()
    private var filteredPoint = [Float]()
    private var ECGBufferCounter: Int = 0
    private var ECGBufferLength: Int = 0
    private var hpcoeffLength: Int = 0
    private var smallGrid: UIBezierPath?
    private var grid: UIBezierPath?
    private var path: UIBezierPath?
    private var cursor: UIBezierPath?
    
    func point2Pixels(withXValue xValue: Double, yValue: Double) -> CGPoint {
    }
    
    func addPoint() {
    }
    
    func addValue(_ value: Double) -> Double {
    }
    
    func twoFingerPinch(_ recognizer: UIPinchGestureRecognizer) {
    }
    
    func doubleTap() {
    }
    
    func cleardata() {
    }
}

#endif /* LineGraphView_h */
