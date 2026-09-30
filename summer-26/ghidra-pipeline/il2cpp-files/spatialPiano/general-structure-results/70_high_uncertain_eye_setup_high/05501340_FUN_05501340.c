/*
FUNCTION_NAME: FUN_05501340
ENTRY_POINT: 05501340
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05501340(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = param_1;
  if ((DAT_06bbf553 & 1) == 0) {
    lVar2 = FUN_02f08768(OVRPlugin_MeshType_TypeInfo);
    DAT_06bbf553 = 1;
  }
  uVar3 = FUN_055013c8(lVar2,param_2);
  puVar1 = OVRPlugin_MeshType_TypeInfo;
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)OVRPlugin_MeshType_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (lVar2 != 0) {
    FUN_054f6d80(lVar2,**(undefined8 **)(*(long *)puVar1 + 0xb8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


