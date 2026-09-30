/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 01d7be90
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackerPose(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = thunk_FUN_010303a8(PTR_DAT_02353b28);
  thunk_FUN_010303a8(PTR_DAT_0234bcd0);
  uVar2 = thunk_FUN_010400dc();
  uVar3 = thunk_FUN_010303a8(PTR_DAT_02358360);
  FUN_01c5e198(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_010303a8(PTR_DAT_02358f08);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar2,uVar1);
}


