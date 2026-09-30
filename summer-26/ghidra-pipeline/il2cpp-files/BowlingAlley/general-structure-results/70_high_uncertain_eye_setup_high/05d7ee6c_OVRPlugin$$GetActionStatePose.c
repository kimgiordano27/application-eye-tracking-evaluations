/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 05d7ee6c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetActionStatePose(void)

{
  int iVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  
  do {
    FUN_05d85318();
    unaff_w21 = unaff_w21 + 1;
  } while (unaff_w21 < *(int *)(unaff_x19 + 200));
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 0xd0);
  thunk_FUN_0333a630();
  if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  iVar1 = FUN_05d72994(*(long *)(unaff_x19 + 0xd0),0);
  return 0 < iVar1;
}


