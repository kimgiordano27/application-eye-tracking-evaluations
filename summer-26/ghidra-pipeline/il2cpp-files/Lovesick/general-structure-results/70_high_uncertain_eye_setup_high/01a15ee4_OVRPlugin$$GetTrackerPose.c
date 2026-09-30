/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 01a15ee4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackerPose
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_02698d50(0);
  uVar3 = param_2;
  uVar4 = param_3;
  uVar2 = FUN_01a15b74();
  FUN_02699088(uVar1,param_2,param_3,param_4,uVar2,uVar3,uVar4,0);
  if (unaff_x19 != 0) {
    FUN_026a048c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


