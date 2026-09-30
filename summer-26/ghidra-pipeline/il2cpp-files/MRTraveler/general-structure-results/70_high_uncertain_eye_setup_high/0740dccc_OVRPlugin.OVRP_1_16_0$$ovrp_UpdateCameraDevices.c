/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_UpdateCameraDevices
ENTRY_POINT: 0740dccc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_UpdateCameraDevices(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x508));
  *(undefined1 *)(unaff_x20 + 0xa56) = 1;
  lVar1 = *unaff_x19;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar1 = *unaff_x19;
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    FUN_06b027d0(**(long **)(lVar1 + 0xb8),*(undefined8 *)PTR_DAT_08eb6508);
    lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xb8) + 8);
    if (lVar1 != 0) {
      FUN_06acd928(lVar1,*(undefined8 *)PTR_DAT_08eb6500);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


