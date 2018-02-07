// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// finnerK
double finnerK(NumericVector lvec, double n);
RcppExport SEXP _MTFM_finnerK(SEXP lvecSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lvec(lvecSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(finnerK(lvec, n));
    return rcpp_result_gen;
END_RCPP
}
// pp
double pp(double l, double n, double v);
RcppExport SEXP _MTFM_pp(SEXP lSEXP, SEXP nSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type l(lSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(pp(l, n, v));
    return rcpp_result_gen;
END_RCPP
}
// kappa2
double kappa2(double pk, double n, double maxn, NumericVector LP);
RcppExport SEXP _MTFM_kappa2(SEXP pkSEXP, SEXP nSEXP, SEXP maxnSEXP, SEXP LPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type pk(pkSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type maxn(maxnSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LP(LPSEXP);
    rcpp_result_gen = Rcpp::wrap(kappa2(pk, n, maxn, LP));
    return rcpp_result_gen;
END_RCPP
}
// kappa3
double kappa3(double pk, double n, double maxn, NumericVector LP);
RcppExport SEXP _MTFM_kappa3(SEXP pkSEXP, SEXP nSEXP, SEXP maxnSEXP, SEXP LPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type pk(pkSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type maxn(maxnSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LP(LPSEXP);
    rcpp_result_gen = Rcpp::wrap(kappa3(pk, n, maxn, LP));
    return rcpp_result_gen;
END_RCPP
}
// kappa4
double kappa4(double pk, double n, double maxn, NumericVector LP);
RcppExport SEXP _MTFM_kappa4(SEXP pkSEXP, SEXP nSEXP, SEXP maxnSEXP, SEXP LPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type pk(pkSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type maxn(maxnSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LP(LPSEXP);
    rcpp_result_gen = Rcpp::wrap(kappa4(pk, n, maxn, LP));
    return rcpp_result_gen;
END_RCPP
}
// stroverlap
int stroverlap(const IntegerVector& x, const IntegerVector& y);
RcppExport SEXP _MTFM_stroverlap(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(stroverlap(x, y));
    return rcpp_result_gen;
END_RCPP
}
// calcQpair
List calcQpair(const List S1, const List S2, const NumericVector& pp1, const NumericVector& pp2);
RcppExport SEXP _MTFM_calcQpair(SEXP S1SEXP, SEXP S2SEXP, SEXP pp1SEXP, SEXP pp2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type S1(S1SEXP);
    Rcpp::traits::input_parameter< const List >::type S2(S2SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp1(pp1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp2(pp2SEXP);
    rcpp_result_gen = Rcpp::wrap(calcQpair(S1, S2, pp1, pp2));
    return rcpp_result_gen;
END_RCPP
}
// newcalcQ2
List newcalcQ2(const List S1, const List S2, const NumericVector& pp1, const NumericVector& pp2);
RcppExport SEXP _MTFM_newcalcQ2(SEXP S1SEXP, SEXP S2SEXP, SEXP pp1SEXP, SEXP pp2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type S1(S1SEXP);
    Rcpp::traits::input_parameter< const List >::type S2(S2SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp1(pp1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp2(pp2SEXP);
    rcpp_result_gen = Rcpp::wrap(newcalcQ2(S1, S2, pp1, pp2));
    return rcpp_result_gen;
END_RCPP
}
// newcalcQ3
List newcalcQ3(const List S1, const List S2, const List S3, const NumericVector& pp1, const NumericVector& pp2, const NumericVector& pp3);
RcppExport SEXP _MTFM_newcalcQ3(SEXP S1SEXP, SEXP S2SEXP, SEXP S3SEXP, SEXP pp1SEXP, SEXP pp2SEXP, SEXP pp3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type S1(S1SEXP);
    Rcpp::traits::input_parameter< const List >::type S2(S2SEXP);
    Rcpp::traits::input_parameter< const List >::type S3(S3SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp1(pp1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp2(pp2SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp3(pp3SEXP);
    rcpp_result_gen = Rcpp::wrap(newcalcQ3(S1, S2, S3, pp1, pp2, pp3));
    return rcpp_result_gen;
END_RCPP
}
// newcalcQ4
List newcalcQ4(const List S1, const List S2, const List S3, const List S4, const NumericVector& pp1, const NumericVector& pp2, const NumericVector& pp3, const NumericVector& pp4);
RcppExport SEXP _MTFM_newcalcQ4(SEXP S1SEXP, SEXP S2SEXP, SEXP S3SEXP, SEXP S4SEXP, SEXP pp1SEXP, SEXP pp2SEXP, SEXP pp3SEXP, SEXP pp4SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type S1(S1SEXP);
    Rcpp::traits::input_parameter< const List >::type S2(S2SEXP);
    Rcpp::traits::input_parameter< const List >::type S3(S3SEXP);
    Rcpp::traits::input_parameter< const List >::type S4(S4SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp1(pp1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp2(pp2SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp3(pp3SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp4(pp4SEXP);
    rcpp_result_gen = Rcpp::wrap(newcalcQ4(S1, S2, S3, S4, pp1, pp2, pp3, pp4));
    return rcpp_result_gen;
END_RCPP
}
// newcalcQ5
List newcalcQ5(const List S1, const List S2, const List S3, const List S4, const List S5, const NumericVector& pp1, const NumericVector& pp2, const NumericVector& pp3, const NumericVector& pp4, const NumericVector& pp5);
RcppExport SEXP _MTFM_newcalcQ5(SEXP S1SEXP, SEXP S2SEXP, SEXP S3SEXP, SEXP S4SEXP, SEXP S5SEXP, SEXP pp1SEXP, SEXP pp2SEXP, SEXP pp3SEXP, SEXP pp4SEXP, SEXP pp5SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type S1(S1SEXP);
    Rcpp::traits::input_parameter< const List >::type S2(S2SEXP);
    Rcpp::traits::input_parameter< const List >::type S3(S3SEXP);
    Rcpp::traits::input_parameter< const List >::type S4(S4SEXP);
    Rcpp::traits::input_parameter< const List >::type S5(S5SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp1(pp1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp2(pp2SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp3(pp3SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp4(pp4SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp5(pp5SEXP);
    rcpp_result_gen = Rcpp::wrap(newcalcQ5(S1, S2, S3, S4, S5, pp1, pp2, pp3, pp4, pp5));
    return rcpp_result_gen;
END_RCPP
}
// newcalcQ6
List newcalcQ6(const List S1, const List S2, const List S3, const List S4, const List S5, const List S6, const NumericVector& pp1, const NumericVector& pp2, const NumericVector& pp3, const NumericVector& pp4, const NumericVector& pp5, const NumericVector& pp6);
RcppExport SEXP _MTFM_newcalcQ6(SEXP S1SEXP, SEXP S2SEXP, SEXP S3SEXP, SEXP S4SEXP, SEXP S5SEXP, SEXP S6SEXP, SEXP pp1SEXP, SEXP pp2SEXP, SEXP pp3SEXP, SEXP pp4SEXP, SEXP pp5SEXP, SEXP pp6SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type S1(S1SEXP);
    Rcpp::traits::input_parameter< const List >::type S2(S2SEXP);
    Rcpp::traits::input_parameter< const List >::type S3(S3SEXP);
    Rcpp::traits::input_parameter< const List >::type S4(S4SEXP);
    Rcpp::traits::input_parameter< const List >::type S5(S5SEXP);
    Rcpp::traits::input_parameter< const List >::type S6(S6SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp1(pp1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp2(pp2SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp3(pp3SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp4(pp4SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp5(pp5SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp6(pp6SEXP);
    rcpp_result_gen = Rcpp::wrap(newcalcQ6(S1, S2, S3, S4, S5, S6, pp1, pp2, pp3, pp4, pp5, pp6));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MTFM_finnerK", (DL_FUNC) &_MTFM_finnerK, 2},
    {"_MTFM_pp", (DL_FUNC) &_MTFM_pp, 3},
    {"_MTFM_kappa2", (DL_FUNC) &_MTFM_kappa2, 4},
    {"_MTFM_kappa3", (DL_FUNC) &_MTFM_kappa3, 4},
    {"_MTFM_kappa4", (DL_FUNC) &_MTFM_kappa4, 4},
    {"_MTFM_stroverlap", (DL_FUNC) &_MTFM_stroverlap, 2},
    {"_MTFM_calcQpair", (DL_FUNC) &_MTFM_calcQpair, 4},
    {"_MTFM_newcalcQ2", (DL_FUNC) &_MTFM_newcalcQ2, 4},
    {"_MTFM_newcalcQ3", (DL_FUNC) &_MTFM_newcalcQ3, 6},
    {"_MTFM_newcalcQ4", (DL_FUNC) &_MTFM_newcalcQ4, 8},
    {"_MTFM_newcalcQ5", (DL_FUNC) &_MTFM_newcalcQ5, 10},
    {"_MTFM_newcalcQ6", (DL_FUNC) &_MTFM_newcalcQ6, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_MTFM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
