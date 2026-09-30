/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraMinMaxDistance
ENTRY_POINT: 01db74c4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;weak_vector_component_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraMinMaxDistance(long param_1)

{
  byte bVar1;
  uint in_w9;
  long in_x10;
  long unaff_x19;
  long lVar2;
  
  bVar1 = *(byte *)(**(long **)(in_x10 + 0x678) + 0x130);
  if (((bVar1 <= in_w9) &&
      (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) == **(long **)(in_x10 + 0x678)))
     && (*(long *)(unaff_x19 + 0x18) != 0)) {
    lVar2 = *(long *)(unaff_x19 + 0x10);
    FUN_01db751c(*(long *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x19 + 0x20));
    if (lVar2 != 0) {
      FUN_01db7214(lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


