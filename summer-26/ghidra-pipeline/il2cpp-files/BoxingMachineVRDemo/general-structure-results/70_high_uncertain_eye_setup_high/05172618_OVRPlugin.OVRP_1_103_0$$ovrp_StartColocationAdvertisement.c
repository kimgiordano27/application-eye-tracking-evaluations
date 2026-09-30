/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_StartColocationAdvertisement
ENTRY_POINT: 05172618
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_103_0__ovrp_StartColocationAdvertisement(void)

{
  long lVar1;
  long *unaff_x19;
  
  thunk_FUN_02dbd7b4();
  if (**(long **)(*unaff_x19 + 0xb8) != 0) {
    FUN_0493f0e0(**(long **)(*unaff_x19 + 0xb8),*(undefined8 *)PTR_DAT_06782a20);
    lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xb8) + 8);
    if (lVar1 != 0) {
      FUN_0493be20(lVar1,*(undefined8 *)PTR_DAT_06782a18);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


