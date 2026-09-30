/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$set_Value
ENTRY_POINT: 04651db4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager_Observable<__Il2CppFullySharedGenericType>__set_Value(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_w8;
  
  if (in_w8 == 0) {
    uVar1 = 0;
  }
  else {
    if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
      FUN_032934b8();
    }
    uVar1 = FUN_05935e10(param_1 + 4,0);
    iVar2 = FUN_05935e10(param_1 + 8,0);
    iVar3 = FUN_05935e10(param_1 + 0xc,0);
    iVar4 = FUN_05935e10(param_1 + 0x10,0);
    uVar1 = uVar1 ^ iVar2 << 2 ^ iVar3 >> 2 ^ iVar4 >> 1;
  }
  return uVar1;
}


