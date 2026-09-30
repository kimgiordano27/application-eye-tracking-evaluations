/*
FUNCTION_NAME: FUN_05e5f058
ENTRY_POINT: 05e5f058
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_05e5f058(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__810_2__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_19__;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_17__;
  if ((DAT_066dc639 & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_17__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_2__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_19__);
    DAT_066dc639 = 1;
  }
  uVar4 = UnityEngine_Bindings_NativeConditionalAttribute__set_Enabled
                    (*(undefined8 *)puVar2,1,0,0,0);
  uVar5 = *(undefined8 *)puVar3;
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
  uVar4 = UnityEngine_Bindings_NativeConditionalAttribute__set_Enabled(uVar5,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar4;
  return;
}


