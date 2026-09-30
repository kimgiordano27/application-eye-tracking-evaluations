/*
FUNCTION_NAME: FUN_05132228
ENTRY_POINT: 05132228
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


undefined8 FUN_05132228(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  
  puVar1 = PTR_DAT_06316108;
  if ((DAT_066cf582 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06316108);
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(System_Xml_HtmlUtf8RawTextWriterIndent_TypeInfo);
    FUN_02b3c81c(HardcoreModeManager_TypeInfo);
    FUN_02b3c81c(UnityEngine_Hash128_TypeInfo);
    FUN_02b3c81c(System_Net_HttpRequestCreator_TypeInfo);
    FUN_02b3c81c(System_Net_HttpStatusCode_TypeInfo);
    DAT_066cf582 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *(long *)puVar1;
  }
  pcVar6 = *(char **)(lVar2 + 0xb8);
  if (*pcVar6 == '\0') {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      pcVar6 = *(char **)(*(long *)puVar1 + 0xb8);
    }
    uVar4 = *(undefined8 *)(pcVar6 + 8);
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c44f60(uVar4,0);
  }
  else {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar3 = FUN_039dc67c(param_1,*(undefined8 *)System_Xml_HtmlUtf8RawTextWriterIndent_TypeInfo);
    if ((uVar3 & 1) == 0) {
      puVar7 = (undefined8 *)System_Net_HttpRequestCreator_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = (undefined8 *)System_Net_HttpRequestCreator_TypeInfo;
      }
    }
    else {
      uVar3 = FUN_04c09ac4(*(undefined8 *)(param_1 + 0x28),0);
      if ((uVar3 & 1) == 0) {
        uVar4 = thunk_FUN_0511ce6c(*(undefined8 *)(param_1 + 0x28),0);
        uVar5 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_Hash128_TypeInfo);
        FUN_03f31bac(uVar5,uVar4,*(undefined8 *)HardcoreModeManager_TypeInfo);
        return uVar5;
      }
      puVar7 = (undefined8 *)System_Net_HttpStatusCode_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = (undefined8 *)System_Net_HttpStatusCode_TypeInfo;
      }
    }
    FUN_05c41e34(*puVar7,0);
  }
  return 0;
}


