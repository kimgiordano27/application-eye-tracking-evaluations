/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MissingMemberHandling
ENTRY_POINT: 058b96b4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializerSettings__get_MissingMemberHandling(void)

{
  int iVar1;
  int iVar2;
  int unaff_w19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  undefined4 unaff_w24;
  int unaff_w25;
  
  thunk_FUN_032cd7c0();
  iVar1 = (unaff_w21 - unaff_w19) + 1;
  iVar2 = FUN_058b9298(unaff_x23 + (long)iVar1 * 2,unaff_w19,unaff_x22 + unaff_w25,unaff_w24,
                       unaff_w20 & 1,0);
  iVar1 = iVar1 + iVar2;
  if (iVar2 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


