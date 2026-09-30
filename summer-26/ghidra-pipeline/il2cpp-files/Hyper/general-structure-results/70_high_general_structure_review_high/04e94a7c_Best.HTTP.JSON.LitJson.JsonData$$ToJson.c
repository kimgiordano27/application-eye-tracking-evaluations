/*
FUNCTION_NAME: Best.HTTP.JSON.LitJson.JsonData$$ToJson
ENTRY_POINT: 04e94a7c
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Best_HTTP_JSON_LitJson_JsonData__ToJson(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar4 [16];
  
  auVar4 = FUN_075cc77c(0,0,*unaff_x24);
  if (*(long *)(*unaff_x23 + 0x38) == 0) {
    FUN_04980b90();
  }
  if (unaff_x20 == 0) {
    if (unaff_w19 != 0) {
      FUN_08d9c7d4(0);
    }
    lVar1 = 0;
    iVar2 = 0;
  }
  else {
    uVar3 = *(uint *)(unaff_x20 + 0x18);
    if (uVar3 < unaff_w19) {
      FUN_08d9c7d4(0);
      uVar3 = *(uint *)(unaff_x20 + 0x18);
    }
    iVar2 = uVar3 - unaff_w19;
    lVar1 = unaff_x20 + (long)(int)unaff_w19 * 4 + 0x20;
  }
  FUN_04e94b04(auVar4._0_8_,auVar4._8_8_,lVar1,iVar2);
  return;
}


