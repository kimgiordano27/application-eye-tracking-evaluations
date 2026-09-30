/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 0708ce88
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__SerializeObject(int param_1)

{
  short sVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  if (unaff_x20 == 0) {
    if (param_1 < 0) {
      return unaff_x19;
    }
LAB_0708cf38:
    lVar2 = FUN_06f764fc();
    return lVar2;
  }
  if (*(int *)(unaff_x20 + 0x10) == 0) {
    if (-1 < param_1) goto LAB_0708cf38;
  }
  else {
    if (*(int *)(unaff_x19 + 0x10) == 0) {
      unaff_x20 = **(long **)(*(long *)PTR_DAT_08e69d78 + 0xb8);
    }
    else if ((0 < *(int *)(unaff_x20 + 0x10)) && (sVar1 = FUN_06f6fafc(), sVar1 != 0x2e)) {
      unaff_x20 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e71968);
    }
    if (-1 < param_1) {
      if (param_1 == 0) {
        return unaff_x20;
      }
      FUN_06f764fc();
    }
  }
  lVar2 = FUN_06f683f8();
  return lVar2;
}


