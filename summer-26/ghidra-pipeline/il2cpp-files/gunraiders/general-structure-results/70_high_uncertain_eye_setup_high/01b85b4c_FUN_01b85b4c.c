/*
FUNCTION_NAME: FUN_01b85b4c
ENTRY_POINT: 01b85b4c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_01b85b4c(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((DAT_04532768 & 1) == 0) {
    FUN_01c5d288(OVRPlugin_Media_TypeInfo);
    DAT_04532768 = 1;
  }
  puVar1 = OVRPlugin_Media_TypeInfo;
  if (*param_1 == 0) {
    *param_2 = 0;
  }
  else {
    uVar2 = thunk_FUN_01c59ccc(*param_1,*(undefined8 *)OVRPlugin_Media_TypeInfo);
    *param_2 = uVar2;
    thunk_FUN_01c59ccc(*param_1,*(undefined8 *)puVar1);
    if ((*(byte *)(*(long *)*param_2 + 0x136) >> 4 & 1) != 0) {
      FUN_01c5d574((long *)*param_2,OVRPlugin_LogLevel_TypeInfo,*param_1);
    }
  }
  if (param_1[1] == 0) {
    param_2[1] = 0;
  }
  else {
    uVar2 = thunk_FUN_01c59ccc(param_1[1],*(undefined8 *)puVar1);
    param_2[1] = uVar2;
    thunk_FUN_01c59ccc(param_1[1],*(undefined8 *)puVar1);
    if ((*(byte *)(*(long *)param_2[1] + 0x136) >> 4 & 1) != 0) {
      FUN_01c5d574((long *)param_2[1],OVRPlugin_LogLevel_TypeInfo,param_1[1]);
      return;
    }
  }
  return;
}


