/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingCalibratedOrigin
ENTRY_POINT: 0281289c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingCalibratedOrigin(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  
  FUN_02818628();
  lVar1 = FUN_0281125c();
  if (lVar1 != 0) {
    FUN_028189a4(lVar1,0);
    plVar2 = *(long **)(unaff_x19 + 0x68);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x028128e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x208))
                (plVar2,*(undefined2 *)(unaff_x19 + 0x80),*(undefined8 *)(*plVar2 + 0x210));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


