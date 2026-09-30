/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_FloatFormatHandling
ENTRY_POINT: 076103a4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer__get_FloatFormatHandling(ulong param_1)

{
  int iVar1;
  int iVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int in_w8;
  int in_w9;
  int in_w10;
  int unaff_w19;
  
  while (((bool)in_ZR || in_NG != in_OV && (iVar1 = in_w9 + 2, in_w10 != 0))) {
    iVar2 = 0;
    if (in_w9 != 0) {
      iVar2 = unaff_w19 / in_w9;
    }
    in_w10 = unaff_w19 - iVar2 * in_w9;
    param_1 = (ulong)(in_w10 != 0);
    in_OV = SBORROW4(iVar1,in_w8);
    in_NG = iVar1 - in_w8 < 0;
    in_ZR = iVar1 == in_w8;
    in_w9 = iVar1;
  }
  return param_1;
}


