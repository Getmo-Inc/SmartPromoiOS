# SmartPromo iOS
O SmartPromo é uma SDK para envio de notas em campanhas promocionais.

## Instalação
### Cocoapods
SmartPromo é compatível com `iOS 11+` e pode ser adicionado no seu projeto `Objective-C` ou `Swift` utilizando o  [CocoaPods](https://cocoapods.org), para isto basta adicionar a linha a seguir no seu arquivo `Podfile`:

    pod 'SmartPromo', '2.4.2'

## Utilização
### Basico
Antes de mais nada, confira se o seu projeto tem declarada a permissão de camera (`NSCameraUsageDescription`) no arquivo `info.plist` a chave `NSCameraUsageDescription`.


Para começar a utilizar o SmartPromo, você precisa configurar as suas `chaves de acesso`:

    import SmartPromo
    ...

    let smartPromo = SmartPromo()
    smartPromo.setupAccessKey("{accessKey}", andSecretKey: "{secretKey}")

#### Iniciando a SDK no modo campanha única:
    smartPromo.go("{campaignID}", above: {viewController})


#### Iniciando a SDK no modo de múltiplas campanhas:
    smartPromo.goMulti(
        withHeadnote: "{Headnote}",
        title: "{Title}",
        message: "{Message}"
    )


#### Iniciando a SDK no modo Scanner de notas:
    smartPromo.scan("{campaignID}", consumerID: "{consumerID}", above: {viewController})
    

### Configurações Extas
É necessário realizar todas as configurações antes de iniciar a SDK.

#### Homologação
Caso queira, você pode utilizar o ambiente de homologação para realizar seus testes. Para isso basta utilizar a função:

    smartPromo.setIsHomolog(true)

#### Cor da campanha
Você pode definir qual cor utilizar na interface da campanha. Para isto basta utilizar a função `setColor(UIColor)`:

    smartPromo.setColor({UIColor})
    
**Nota**: Se uma cor não for definida, será aplicada a cor da `window` principal.
  
#### Passando um consumidor
O SmartPromo gerencia o cadastro do consumidor por você, mas caso queira otimizar a experiência de uso, você pode informar para o SmartPromo o consumidor que está utilizando o aplicativo, através da função `setConsumer(FSConsumer)`: 

    smartPromo.setConsumer({FSConsumer})

#### Metadata
O SmartPromo também oferece a capacidade de inserir informações em um campo genérico que pode ser utilizado para diversos fins. Para fazer isso, utilizamos a seguinte função:
    
    smartPromo.setMetadata("Qualquer coisa como String")


    
Bom era isso! Esperamos que o tutorial seja útil e se tiver qualquer dúvida ou dica envie um email a nossa equipe developer@getmo.com.br, teremos o maior prazer em te auxiliar.
