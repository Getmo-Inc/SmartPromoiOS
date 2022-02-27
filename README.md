# SmartPromo
O SmartPromo é uma SDK para envio de notas em campanhas promocionais.
Esta biblioteca é compativel com o `UIKit`. Caso quera utilizar em um projeto `SwiftUI`, você deve utilizar a nossa outra biblioteca [SmartPromoSwiftUI](https://github.com/Getmo-Inc/SmartPromoSwiftUI).

## Instalação
### Cocoapods
SmartPromo é compatível com `iOS 11+` e pode ser adicionado no seu projeto `Objective-C` ou `Swift` utilizando o  [CocoaPods](https://cocoapods.org), para isto basta adicionar a linha a seguir no seu arquivo `Podfile`:

    pod 'SmartPromo', '1.7.1'

## Utilização
### Basico
Antes de mais nada, confira se o seu projeto tem declarada a permissão de camera (`NSCameraUsageDescription`) no arquivo `info.plist` a chave `NSCameraUsageDescription`.


Para começar a utilizar o SmartPromo, você precisa inicializar com o `id` da campanha e configurar as suas `chaves de acesso`:

    import SmartPromo
    ...

    let smartPromo = SmartPromo("[campaignID]")
    smartPromo?.setupAccessKey("[accessKey]", andSecretKey: "[secretKey]")
    
Depois é só disparar a função `go` passando uma viewController que tudo começa:

    smartPromo?.go([viewController])
    
### Cor da campanha
Você pode definir qual cor utilizar na interface da campanha. Para isto basta utilizar a função `setColor(UIColor)`:

    smartPromo?.setColor([UIColor])
    
**Nota**: Se uma cor não for definida, será aplicada a cor da `window` principal.
  
### Passando um consumidor
O SmartPromo gerencia o cadastro do consumidor por você, mas caso queira otimizar a experiência de uso, você pode informar para o SmartPromo o consumidor que está utilizando o aplicativo, através da função `setConsumer(FSConsumer)`: 

    smartPromo?.setConsumer([FSConsumer])

  
  
Bom era isso! Esperamos que o tutorial seja útil e se tiver qualquer dúvida ou dica envie um email a nossa equipe developer@getmo.com.br, teremos o maior prazer em te auxiliar.
