//
//  Symbolizer.swift
//  ForewarnKit
//
//  Created by IOS Directed Study on 1/11/18.
//  Copyright © 2018 IOS Directed Study. All rights reserved.
//

import Foundation

final class Symbolizer {
    var xMin: Double = 0
    var xMax: Double = 0
    var scale: Double = 0
    
    func symbolize(filteredData: inout [NSNumber], paramaters: Parameters) {
        
        if xMin == 0 && xMax == 0 && scale == 0
        {
            xMin = getMin(filteredData: filteredData)
            xMax = getMax(filteredData: filteredData)
            scale = Double(paramaters.numberOfSymbols) / (xMax - xMin)
        }
        
        let NM1 = paramaters.numberOfSymbols - 1
        
        filteredData.removeAll()
        
        for i in 0...filteredData.count - 58 {
            
            let number = NSNumber(value: max(0, min(NM1, Int((scale * filteredData[i].doubleValue - xMin)))))
            filteredData.append(number)
        }
    }
    
    func getMin(filteredData: [NSNumber]) -> Double
    {
        var min: Double = 1000000
        
        for i in 0...filteredData.count {
            if filteredData[i].doubleValue < min {
                min = filteredData[i].doubleValue
            }
        }
        return min
    }
    
    func getMax(filteredData: [NSNumber]) -> Double
    {
        var max: Double = -1000000
        
        for i in 0...filteredData.count {
            if filteredData[i].doubleValue < max {
                max = filteredData[i].doubleValue
            }
        }
        return max
    }
}
