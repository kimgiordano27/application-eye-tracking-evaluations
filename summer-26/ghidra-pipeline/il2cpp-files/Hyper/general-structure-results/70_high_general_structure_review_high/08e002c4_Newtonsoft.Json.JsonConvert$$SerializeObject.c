/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 08e002c4
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(code *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x21;
  long unaff_x22;
  int unaff_w24;
  
  (*param_1)();
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  if (unaff_w24 == 0) {
    if (unaff_x21 == 0) goto LAB_08e00348;
  }
  else {
    lVar1 = thunk_FUN_04983e64();
    if (lVar1 == 0) {
      thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
      uVar2 = thunk_FUN_04983f60();
      uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac69ff8);
      uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac6a000);
      FUN_08cbd67c(uVar2,uVar3,uVar4,0);
      uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac6a008);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar2,uVar3);
    }
    if (unaff_x21 == 0) {
LAB_08e00348:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_06e60d80();
  }
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    FUN_08e00408();
  }
  return;
}


