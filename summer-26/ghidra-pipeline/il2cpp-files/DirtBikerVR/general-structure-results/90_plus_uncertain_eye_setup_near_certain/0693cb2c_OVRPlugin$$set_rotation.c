/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 0693cb2c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_rotation(void)

{
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xf75) = 1;
  if (*(long *)(unaff_x19 + 0xb0) != 0) {
    FUN_07c37ba0(*(undefined4 *)(unaff_x19 + 0x120),*(long *)(unaff_x19 + 0xb0),
                 *(undefined8 *)PTR_DAT_084b6130,0);
    if (*(long *)(unaff_x19 + 0xb0) != 0) {
      FUN_07c37ba0(DAT_015c57a0,*(long *)(unaff_x19 + 0xb0),*(undefined8 *)PTR_DAT_084b6138,0);
      if (*(long *)(unaff_x19 + 0xb0) != 0) {
        FUN_07c37ba0(0x3f800000,*(long *)(unaff_x19 + 0xb0),*(undefined8 *)PTR_DAT_084b6140,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


