/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxGetTextureData
ENTRY_POINT: 05d40a94
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_65_0__ovrp_KtxGetTextureData(void)

{
  long lVar1;
  
  lVar1 = FUN_05109540();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x98) != 0)) {
    return *(undefined8 *)(*(long *)(lVar1 + 0x98) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


