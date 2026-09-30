/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CoerceEmptyStringToNull
ENTRY_POINT: 074b6fb4
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CoerceEmptyStringToNull(void)

{
  short *psVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int unaff_w19;
  short *unaff_x20;
  short unaff_w21;
  
  if (unaff_w19 < 1) {
    bVar2 = false;
  }
  else if (*unaff_x20 == unaff_w21) {
    bVar2 = true;
  }
  else {
    lVar4 = 1;
    do {
      iVar3 = (int)lVar4;
      if (unaff_w19 == iVar3) break;
      psVar1 = unaff_x20 + lVar4;
      lVar4 = lVar4 + 1;
    } while (*psVar1 != unaff_w21);
    bVar2 = iVar3 < unaff_w19;
  }
  return bVar2;
}


