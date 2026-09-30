/*
FUNCTION_NAME: FUN_053a1c84
ENTRY_POINT: 053a1c84
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


void FUN_053a1c84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((DAT_066d0860 & 1) == 0) {
    FUN_02b3c81c(
                Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_InputForUI_KeyEvent_ButtonsState_TypeInfo);
                    /* try { // try from 053a1cbc to 054a1ccb has its CatchHandler @ 053a1e74 */
    DAT_066d0860 = 1;
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (*(int *)(*(long *)UnityEngine_InputForUI_KeyEvent_ButtonsState_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (lVar2 != 0) {
      FUN_05399364(lVar2,param_2);
      return;
    }
  }
  else if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
    if (*(int *)(*(long *)
                  Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05398494(uVar1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


