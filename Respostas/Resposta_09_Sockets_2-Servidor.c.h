<?php
// requisi��o da classe PHPlot
require_once 'phplot.php';
  
// Array com dados de Ano x �ndice de fecundidade Brasileira 1940-2000
// Valores por d�cada
$data = array(
             array('1940' , 6.2 ), 
             array('1950' , 6.2 ),
             array('1960' , 6.3 ),
             array('1970' , 5.8 ),
             array('1980' , 4.4 ),
             array('1991' , 2.9 ),
             array('2000' , 2.3 )
             );     
# Cria um novo objeto do tipo PHPlot com 500px de largura x 350px de altura                 
$plot = new PHPlot(500 , 350);     
  
// Organiza Gr�fico -----------------------------
$plot->SetTitle('Taxa de fecundidade no Brasil 1940-2000');
# Precis�o de uma casa decimal
$plot->SetPrecisionY(1);
# tipo de Gr�fico em barras (poderia ser linepoints por exemplo)
$plot->SetPlotType("bars");
# Tipo de dados que preencher�o o Gr�fico text(label dos anos) e data (valores de porcentagem)
$plot->SetDataType("text-data");
# Adiciona ao gr�fico os valores do array
$plot->SetDataValues($data);
// -----------------------------------------------
  
// Organiza eixo X ------------------------------
# Seta os tra�os (grid) do eixo X para invis�vel
$plot->SetXTickPos('none');
# Texto abaixo do eixo X
$plot->SetXLabel("Fonte: Censo Demogr�fico 2000, Fecundidade e Mortalidade Infantil, Resultados\n Preliminares da Amostra IBGE, 2002");
# Tamanho da fonte que varia de 1-5
$plot->SetXLabelFontSize(2);
$plot->SetAxisFontSize(2);
// -----------------------------------------------
  
// Organiza eixo Y -------------------------------
# Coloca nos pontos os valores de Y
$plot->SetYDataLabelPos('plotin');
// -----------------------------------------------
  
// Desenha o Gr�fico -----------------------------
$plot->DrawGraph();
// -----------------------------------------------
?>