/* Copyright (c) 2015 by Contributors
 *
 * This file was initially generated using the following R command:
 * tools::package_native_routine_registration_skeleton('.', con = 'src/init.c', character_only = F)
 * and edited to conform to xgboost C linter requirements. For details, see
 * https://cran.r-project.org/doc/manuals/r-release/R-exts.html#Registering-native-routines
 */
#include <Rinternals.h>
#include <stdlib.h>
#include <R_ext/Rdynload.h>
#include <R_ext/Visibility.h>

/* FIXME:
Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern void XGBInitializeAltrepClass_R(DllInfo *info);
extern SEXP XGDuplicate_R(SEXP);
extern SEXP XGPointerEqComparison_R(SEXP, SEXP);
extern SEXP XGBoosterTrainOneIter_R(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP XGBoosterCreate_R(SEXP);
extern SEXP XGBoosterCopyInfoFromDMatrix_R(SEXP, SEXP);
extern SEXP XGBoosterSetStrFeatureInfo_R(SEXP, SEXP, SEXP);
extern SEXP XGBoosterGetStrFeatureInfo_R(SEXP, SEXP);
extern SEXP XGBoosterBoostedRounds_R(SEXP);
extern SEXP XGBoosterGetNumFeature_R(SEXP);
extern SEXP XGBoosterDumpModel_R(SEXP, SEXP, SEXP, SEXP);
extern SEXP XGBoosterEvalOneIter_R(SEXP, SEXP, SEXP, SEXP);
extern SEXP XGBoosterGetAttrNames_R(SEXP);
extern SEXP XGBoosterGetAttr_R(SEXP, SEXP);
extern SEXP XGBoosterLoadModelFromRaw_R(SEXP, SEXP);
extern SEXP XGBoosterSaveModelToRaw_R(SEXP handle, SEXP config);
extern SEXP XGBoosterLoadModel_R(SEXP, SEXP);
extern SEXP XGBoosterSaveJsonConfig_R(SEXP handle);
extern SEXP XGBoosterLoadJsonConfig_R(SEXP handle, SEXP value);
extern SEXP XGBoosterSerializeToBuffer_R(SEXP handle);
extern SEXP XGBoosterUnserializeFromBuffer_R(SEXP handle, SEXP raw);
extern SEXP XGBoosterPredictFromDMatrix_R(SEXP, SEXP, SEXP);
extern SEXP XGBoosterSaveModel_R(SEXP, SEXP);
extern SEXP XGBoosterSetAttr_R(SEXP, SEXP, SEXP);
extern SEXP XGBoosterSetParam_R(SEXP, SEXP, SEXP);
extern SEXP XGBoosterUpdateOneIter_R(SEXP, SEXP, SEXP);
extern SEXP XGCheckNullPtr_R(SEXP);
extern SEXP XGDMatrixCreateFromCSC_R(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP XGDMatrixCreateFromCSR_R(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP XGDMatrixCreateFromFile_R(SEXP, SEXP);
extern SEXP XGDMatrixCreateFromMat_R(SEXP, SEXP, SEXP);
extern SEXP XGDMatrixGetFloatInfo_R(SEXP, SEXP);
extern SEXP XGDMatrixGetUIntInfo_R(SEXP, SEXP);
extern SEXP XGDMatrixCreateFromDF_R(SEXP, SEXP, SEXP);
extern SEXP XGDMatrixGetStrFeatureInfo_R(SEXP, SEXP);
extern SEXP XGDMatrixNumCol_R(SEXP);
extern SEXP XGDMatrixNumRow_R(SEXP);
extern SEXP XGDMatrixGetQuantileCut_R(SEXP);
extern SEXP XGDMatrixNumNonMissing_R(SEXP);
extern SEXP XGDMatrixGetDataAsCSR_R(SEXP);
extern SEXP XGDMatrixSaveBinary_R(SEXP, SEXP, SEXP);
extern SEXP XGDMatrixSetInfo_R(SEXP, SEXP, SEXP);
extern SEXP XGDMatrixSetStrFeatureInfo_R(SEXP, SEXP, SEXP);
extern SEXP XGDMatrixSliceDMatrix_R(SEXP, SEXP);
extern SEXP XGBSetGlobalConfig_R(SEXP);
extern SEXP XGBGetGlobalConfig_R(void);
extern SEXP XGBoosterFeatureScore_R(SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
  {"XGDuplicate_R",               (DL_FUNC) &XGDuplicate_R,               1},
  {"XGPointerEqComparison_R",     (DL_FUNC) &XGPointerEqComparison_R,     2},
  {"XGBoosterTrainOneIter_R",     (DL_FUNC) &XGBoosterTrainOneIter_R,     5},
  {"XGBoosterCreate_R",           (DL_FUNC) &XGBoosterCreate_R,           1},
  {"XGBoosterCopyInfoFromDMatrix_R", (DL_FUNC) &XGBoosterCopyInfoFromDMatrix_R, 2},
  {"XGBoosterSetStrFeatureInfo_R",(DL_FUNC) &XGBoosterSetStrFeatureInfo_R,3},  // NOLINT
  {"XGBoosterGetStrFeatureInfo_R",(DL_FUNC) &XGBoosterGetStrFeatureInfo_R,2},  // NOLINT
  {"XGBoosterBoostedRounds_R",    (DL_FUNC) &XGBoosterBoostedRounds_R,    1},
  {"XGBoosterGetNumFeature_R",    (DL_FUNC) &XGBoosterGetNumFeature_R,    1},
  {"XGBoosterDumpModel_R",        (DL_FUNC) &XGBoosterDumpModel_R,        4},
  {"XGBoosterEvalOneIter_R",      (DL_FUNC) &XGBoosterEvalOneIter_R,      4},
  {"XGBoosterGetAttrNames_R",     (DL_FUNC) &XGBoosterGetAttrNames_R,     1},
  {"XGBoosterGetAttr_R",          (DL_FUNC) &XGBoosterGetAttr_R,          2},
  {"XGBoosterLoadModelFromRaw_R", (DL_FUNC) &XGBoosterLoadModelFromRaw_R, 2},
  {"XGBoosterSaveModelToRaw_R",   (DL_FUNC) &XGBoosterSaveModelToRaw_R,   2},
  {"XGBoosterLoadModel_R",        (DL_FUNC) &XGBoosterLoadModel_R,        2},
  {"XGBoosterSaveJsonConfig_R",   (DL_FUNC) &XGBoosterSaveJsonConfig_R,   1},
  {"XGBoosterLoadJsonConfig_R",   (DL_FUNC) &XGBoosterLoadJsonConfig_R,   2},
  {"XGBoosterSerializeToBuffer_R",     (DL_FUNC) &XGBoosterSerializeToBuffer_R,     1},
  {"XGBoosterUnserializeFromBuffer_R", (DL_FUNC) &XGBoosterUnserializeFromBuffer_R, 2},
  {"XGBoosterPredictFromDMatrix_R", (DL_FUNC) &XGBoosterPredictFromDMatrix_R, 3},
  {"XGBoosterSaveModel_R",        (DL_FUNC) &XGBoosterSaveModel_R,        2},
  {"XGBoosterSetAttr_R",          (DL_FUNC) &XGBoosterSetAttr_R,          3},
  {"XGBoosterSetParam_R",         (DL_FUNC) &XGBoosterSetParam_R,         3},
  {"XGBoosterUpdateOneIter_R",    (DL_FUNC) &XGBoosterUpdateOneIter_R,    3},
  {"XGCheckNullPtr_R",            (DL_FUNC) &XGCheckNullPtr_R,            1},
  {"XGDMatrixCreateFromCSC_R",    (DL_FUNC) &XGDMatrixCreateFromCSC_R,    6},
  {"XGDMatrixCreateFromCSR_R",    (DL_FUNC) &XGDMatrixCreateFromCSR_R,    6},
  {"XGDMatrixCreateFromFile_R",   (DL_FUNC) &XGDMatrixCreateFromFile_R,   2},
  {"XGDMatrixCreateFromMat_R",    (DL_FUNC) &XGDMatrixCreateFromMat_R,    3},
  {"XGDMatrixGetFloatInfo_R",     (DL_FUNC) &XGDMatrixGetFloatInfo_R,     2},
  {"XGDMatrixGetUIntInfo_R",      (DL_FUNC) &XGDMatrixGetUIntInfo_R,      2},
  {"XGDMatrixCreateFromDF_R",     (DL_FUNC) &XGDMatrixCreateFromDF_R,     3},
  {"XGDMatrixGetStrFeatureInfo_R", (DL_FUNC) &XGDMatrixGetStrFeatureInfo_R, 2},
  {"XGDMatrixNumCol_R",           (DL_FUNC) &XGDMatrixNumCol_R,           1},
  {"XGDMatrixNumRow_R",           (DL_FUNC) &XGDMatrixNumRow_R,           1},
  {"XGDMatrixGetQuantileCut_R",   (DL_FUNC) &XGDMatrixGetQuantileCut_R,   1},
  {"XGDMatrixNumNonMissing_R",    (DL_FUNC) &XGDMatrixNumNonMissing_R,    1},
  {"XGDMatrixGetDataAsCSR_R",     (DL_FUNC) &XGDMatrixGetDataAsCSR_R,     1},
  {"XGDMatrixSaveBinary_R",       (DL_FUNC) &XGDMatrixSaveBinary_R,       3},
  {"XGDMatrixSetInfo_R",          (DL_FUNC) &XGDMatrixSetInfo_R,          3},
  {"XGDMatrixSetStrFeatureInfo_R", (DL_FUNC) &XGDMatrixSetStrFeatureInfo_R, 3},
  {"XGDMatrixSliceDMatrix_R",     (DL_FUNC) &XGDMatrixSliceDMatrix_R,     2},
  {"XGBSetGlobalConfig_R",        (DL_FUNC) &XGBSetGlobalConfig_R,        1},
  {"XGBGetGlobalConfig_R",        (DL_FUNC) &XGBGetGlobalConfig_R,        0},
  {"XGBoosterFeatureScore_R",     (DL_FUNC) &XGBoosterFeatureScore_R,     2},
  {NULL, NULL, 0}
};

#if defined(_WIN32)
__declspec(dllexport)
#endif  // defined(_WIN32)
void attribute_visible R_init_xgboost(DllInfo *dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  XGBInitializeAltrepClass_R(dll);
}
