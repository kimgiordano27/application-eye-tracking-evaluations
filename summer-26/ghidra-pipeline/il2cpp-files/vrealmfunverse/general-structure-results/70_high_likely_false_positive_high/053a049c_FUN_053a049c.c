/*
FUNCTION_NAME: FUN_053a049c
ENTRY_POINT: 053a049c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;eye_or_gaze_keyword_boost_only
*/


undefined8 FUN_053a049c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_066d0864 & 1) == 0) {
    FUN_02b3c81c(
                Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_InputForUI_KeyEvent_ButtonsState_TypeInfo);
    FUN_02b3c81c(PTR_DAT_063224c0);
    DAT_066d0864 = 1;
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    if (*(int *)(*(long *)
                  Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (lVar3 != 0) {
      uVar1 = FUN_053983dc(lVar3,param_2);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      lVar3 = *(long *)(param_1 + 0x20);
      if (*(int *)(*(long *)UnityEngine_InputForUI_KeyEvent_ButtonsState_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (lVar3 != 0) {
        uVar2 = FUN_05398c9c(lVar3,param_3);
        return uVar2;
      }
    }
  }
  else {
    uVar1 = thunk_FUN_04c08854(param_2,*(undefined8 *)PTR_DAT_063224c0,0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
      if (*(int *)(*(long *)
                    Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (lVar3 != 0) {
        uVar2 = FUN_053983dc(lVar3,param_3);
        return uVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


