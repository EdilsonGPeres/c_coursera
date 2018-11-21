
void rotate(char matrix[10][10]){

  char auxLine, auxColumn;

  for (int i=0; i<10; i++){
    for (int j=0; j<10; j++){
      auxLine = matrix[i][j];
      auxColumn = matrix[j][i];
      matrix[j][i] = auxLine;
      matrix[i][j] = auxColumn;
  }
}

}
