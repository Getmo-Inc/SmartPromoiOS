//
//  ViewController.swift
//  Example
//
//  Created by Rodrigo Busata on 05/10/21.
//

import UIKit
import SmartPromo

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
    }

    @IBAction func actionOpen(_ sender: Any) {
        let smartPromo = SmartPromo()
        smartPromo.delegate = self
        
        smartPromo.setupAccessKey("{accessKey}", andSecretKey: "{secretKey}")
        
        let consumer = FSPConsumer()
        consumer.cpf = "{cpf}"
        smartPromo.setConsumer(consumer)
        smartPromo.setIsHomolog(true)
        
        smartPromo.go("{campaignID}", above: self)
    }
}

extension ViewController: SmartPromoDelegate {
    
    func smartPromoDidReceiveEvent(_ eventKey: String, values: [String : Any]?) {
        print("[SmartPromo] Event received: \(eventKey)");
            
        if let values {
            print("[SmartPromo] Event values: \(values)");
        } else {
            print("[SmartPromo] No values attached to event");
        }
    }
}
