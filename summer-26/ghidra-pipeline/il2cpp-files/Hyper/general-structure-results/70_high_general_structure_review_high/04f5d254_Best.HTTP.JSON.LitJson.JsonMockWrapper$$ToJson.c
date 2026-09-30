/*
FUNCTION_NAME: Best.HTTP.JSON.LitJson.JsonMockWrapper$$ToJson
ENTRY_POINT: 04f5d254
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Best_HTTP_JSON_LitJson_JsonMockWrapper__ToJson(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x23;
  
  lVar2 = FUN_04e64e0c(param_1,1,0);
  if (lVar2 == 0) {
LAB_04f5d304:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar3 = FUN_04e6553c();
  if ((uVar3 & 1) == 0) {
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar2 = *unaff_x23;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
    uVar4 = FUN_04e66d60();
    if (lVar2 == 0) goto LAB_04f5d304;
    uVar3 = FUN_04e6553c(lVar2,uVar4,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  else {
    iVar1 = Best_HTTP_JSON_LitJson_JsonReader__get_AllowSingleQuotedStrings();
    if (iVar1 == 1) {
      return;
    }
  }
  thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
  uVar4 = thunk_FUN_04983f60();
  uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac29e28);
  uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac163a0);
  FUN_08cbd67c(uVar4,uVar5,uVar6,0);
  uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac29e38);
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar4,uVar5);
}


