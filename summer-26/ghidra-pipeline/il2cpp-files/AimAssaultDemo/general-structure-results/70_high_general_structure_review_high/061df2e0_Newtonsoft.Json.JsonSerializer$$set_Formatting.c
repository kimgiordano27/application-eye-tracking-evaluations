/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_Formatting
ENTRY_POINT: 061df2e0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonSerializer__set_Formatting(void)

{
  int iVar1;
  char in_NG;
  char in_OV;
  bool bVar2;
  int in_w8;
  int iVar3;
  int unaff_w19;
  
  if (in_NG == in_OV) {
    iVar3 = 3;
    do {
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = unaff_w19 / iVar3;
      }
      iVar1 = iVar1 * iVar3;
    } while ((unaff_w19 != iVar1) && (iVar3 = iVar3 + 2, iVar3 <= in_w8));
    bVar2 = unaff_w19 != iVar1;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


