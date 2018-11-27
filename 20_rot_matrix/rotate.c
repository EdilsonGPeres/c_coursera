
void rotate(char matrix[10][10]){

  char myMatrix[10][10];

  for (int i=0; i<10; i++){
    for (int j=0; j<10; j++){
      myMatrix[i][j] = matrix[i][j];
    }
  }

  for (int m=0; m<10; m++){
    if (m%2 == 0){
      for (int n=0; n<10; n++){
	if (n == 9) matrix[0][m] = myMatrix[9-m][n];
	else{
	  matrix[0][m] = myMatrix[9-m][n];
	  matrix++;
	}
      }
    }
    else{
      for (int k=0; k<10; k++){
	if (k == 9) matrix[0][m] = myMatrix[9-m][9-k];
	else{
	  matrix[0][m] = myMatrix[9-m][9-k];
	  matrix--;
	}
      }
    }
 }
  /*
  matrix[0][0] = 'E';
  matrix++;
  matrix[0][0] = 'D';
  matrix++;
  matrix[0][0] = 'D';
  matrix++;
  matrix[0][0] = 'I';
  matrix++;
  matrix[0][0] = 'L';
  matrix++;
  matrix[0][0] = 'S';
  matrix++;
  matrix[0][0] = 'O';
  matrix++;
  matrix[0][0] = 'N';
  matrix++;
  matrix[0][0] = 'P';
  matrix++;
  matrix[0][0] = 'E';
  matrix[0][1] = 'R';
  matrix--;
  matrix[0][1] = 'E';
  matrix--;
  matrix[0][1] = 'S';*/
  
  //matrix = myMatrix;
}
