//
//  SimpleGraph.swift
//  ForewarnKit
//
//  Created by IOS Directed Study on 1/11/18.
//  Copyright © 2018 IOS Directed Study. All rights reserved.
//

import Foundation

final class SimpleGraph {
    
    var graphNodes: [NSNumber]
    var graphEdges: [NSNumber]
    var uniqueEdges: Set<NSNumber> = []
    var uniqueNodes: Set<NSNumber> = []

    init(withNodes nodes: [NSNumber], andEdges edges: [NSNumber]) {
        graphNodes = nodes
        graphEdges = edges
    }
    
    func calculateUniqueNodes() -> Set<NSNumber> {
        
        for i in 0...graphNodes.count {
            uniqueNodes.insert(graphNodes[i])
        }
        
        return uniqueNodes
    }
    
    func calculateUniqueEdges() -> Set<NSNumber> {
        
        for i in 0...graphEdges.count {
            uniqueEdges.insert(graphEdges[i])
        }
        
        return uniqueEdges
    }
    
    func verify(nodeData: [NSNumber]) {
        // TODO: verify algorithms work the same
    }
}



