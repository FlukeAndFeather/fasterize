#ifndef UTILS
#define UTILS

#define ARMA_64BIT_WORD  //required to support arma vectors > 2GB
#include <RcppArmadillo.h>
// [[Rcpp::plugins(cpp11)]
// [[Rcpp::depends(RcppArmadillo)]]

extern Rcpp::CharacterVector as_character(const Rcpp::RObject vec);
extern Rcpp::S4 brick(const Rcpp::S4 &raster);

#endif
