/*
FUNCTION_NAME: FUN_050ad554
ENTRY_POINT: 050ad554
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_050ad554(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = TMPro_TMP_SubMeshUI___TypeInfo;
  if ((DAT_066cd6ca & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_AppPerfFrameStats___TypeInfo);
    FUN_02b3c81c(OVRPlugin_BodyJointLocation___TypeInfo);
    FUN_02b3c81c(TMPro_TMP_SubMeshUI___TypeInfo);
    DAT_066cd6ca = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    FUN_04410144(**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_1 + 0x48),
                 *(undefined8 *)(param_1 + 0x50),
                 *(undefined8 *)OVRPlugin_AppPerfFrameStats___TypeInfo);
    lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    if (lVar2 != 0) {
      FUN_037a79f4(lVar2,param_1,*(undefined8 *)OVRPlugin_BodyJointLocation___TypeInfo);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


