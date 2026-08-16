# SmartPromo iOS
O SmartPromo é uma SDK para envio de notas em campanhas promocionais.

## Instalação
### Swift Package Manager
SmartPromo é compatível com `iOS 14+` e pode ser adicionado no seu projeto `Swift` utilizando o [Swift Package Manager](https://developer.apple.com/documentation/xcode/adding-package-dependencies-to-your-app):

1. No Xcode, vá em **File → Add Package Dependencies...**
2. Insira a URL do repositório: `https://github.com/Getmo-Inc/SmartPromoiOS.git`
3. Selecione a versão desejada (ex: `3.0.5`)
4. Clique em **Add Package**

### Cocoapods (Descontinuado)
> **Nota:** O CocoaPods não é mais suportado. A última versão disponível via CocoaPods é a `2.6.4` e não receberá mais atualizações. Recomendamos migrar para o Swift Package Manager.

## Utilização
### Básico
Antes de mais nada, confira se o seu projeto tem declarada a permissão de câmera (`NSCameraUsageDescription`) no arquivo `Info.plist`.

Para começar a utilizar o SmartPromo, instancie a SDK informando suas `chaves de acesso` e se deseja usar o ambiente de homologação:

    import SmartPromo
    ...

    let smartPromo = SmartPromo(
        accessKey: "{accessKey}",
        secretKey: "{secretKey}",
        isHomolog: false
    )

#### Iniciando a SDK no modo campanha única:
    smartPromo.go("{campaignID}", viewController: {viewController})


#### Iniciando a SDK no modo de múltiplas campanhas:
    smartPromo.goMulti(
        withHeadnote: "{Headnote}",
        title: "{Title}",
        message: "{Message}",
        viewController: {viewController}
    )


#### Iniciando a SDK no modo Scanner de notas:
    smartPromo.goScan(
        "{campaignID}",
        consumerId: "{consumerID}",
        viewController: {viewController}
    )


### Configurações Extras
É necessário realizar todas as configurações antes de iniciar a SDK.

#### Homologação
O ambiente de homologação é definido no momento da inicialização através do parâmetro `isHomolog` do construtor.

#### Passando um consumidor
O SmartPromo gerencia o cadastro do consumidor por você, mas caso queira otimizar a experiência de uso, você pode informar para o SmartPromo o consumidor que está utilizando o aplicativo, através da função `setConsumer(FSPConsumer)`:

    smartPromo.setConsumer({FSPConsumer})

#### Metadata
O SmartPromo também oferece a capacidade de inserir informações em um campo genérico que pode ser utilizado para diversos fins. Para fazer isso, utilizamos a seguinte função:

    smartPromo.setMetadata("Qualquer coisa como String")


Bom era isso! Esperamos que o tutorial seja útil e se tiver qualquer dúvida ou dica envie um email a nossa equipe developer@getmo.com.br, teremos o maior prazer em te auxiliar.
