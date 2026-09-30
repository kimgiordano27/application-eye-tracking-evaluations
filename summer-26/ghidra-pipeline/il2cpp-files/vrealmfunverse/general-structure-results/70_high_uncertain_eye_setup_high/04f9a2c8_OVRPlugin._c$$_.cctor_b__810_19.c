/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_19
ENTRY_POINT: 04f9a2c8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_19(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = System_Func<Collider,_Transform>_TypeInfo;
  if ((DAT_066c9e1f & 1) == 0) {
    FUN_02b3c81c(System_Func<Collider,_Transform>_TypeInfo);
    DAT_066c9e1f = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_04f9a330(uVar2,param_2);
  return;
}


