/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueSubmitLayer
ENTRY_POINT: 05d48610
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer(long param_1,uint param_2)

{
  long lVar1;
  
  if ((DAT_07398b72 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb8ba8);
    DAT_07398b72 = 1;
  }
  if (((*(long *)(param_1 + 0x20) != 0) &&
      (lVar1 = FUN_05109540(*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_06fb8ba8), lVar1 != 0))
     && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
    if (param_2 < *(uint *)(lVar1 + 0x18)) {
      return *(undefined4 *)(lVar1 + (long)(int)param_2 * 4 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


