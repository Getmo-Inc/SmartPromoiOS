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
        let smartPromo = SmartPromo("{campaignID}")
        smartPromo?.setupAccessKey("{accessKey}", andSecretKey: "{secretKey}")
        
        smartPromo?.setColor(.systemOrange)
        
        let consumer = FSPConsumer()
        consumer.cpf = "{cpf}"
        smartPromo?.setConsumer(consumer)
        
        smartPromo?.go(self)
    }
}
