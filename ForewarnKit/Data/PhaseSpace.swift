//
//  PhaseSpace.swift
//  ForewarnKit
//
//  Created by IOS Directed Study on 1/11/18.
//  Copyright © 2018 IOS Directed Study. All rights reserved.
//

import Foundation

final class PhaseSpace {
    
    public static func createSimpleGraph(symbols: [NSNumber], parameters: Parameters) -> SimpleGraph {
        
        var nodes: [NSNumber] = []
        var edges: [NSNumber] = []
        
        let NPS = symbols.count - ((parameters.numberOfDimensions - 1) * parameters.lag)
        let NPC = NPS - parameters.mu
        
        for i in 0...NPS {
            nodes.append(symbols[i])
        }
        
        for _ in 0...NPC {
            edges.append(NSNumber(value:0))
        }
        
        for i in 0...nodes.count {
            for j in 0...parameters.numberOfDimensions - 1 {
                nodes[i] = NSNumber(value: nodes[i].intValue + parameters.symbolPowers[j] * symbols[i + ((j + 1) * parameters.lag)].intValue)
            }
        }
        
        for i in 0...NPC {
            edges[i] = NSNumber(value: nodes[i].intValue + (parameters.ssdd * nodes[i + parameters.mu].intValue))
        }
        
        return SimpleGraph(withNodes: nodes, andEdges: edges)
    }
}
