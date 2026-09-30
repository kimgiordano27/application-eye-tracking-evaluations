/*
FUNCTION_NAME: OVRPlugin$$SetTrackingCalibratedOrigin
ENTRY_POINT: 090a1dfc
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__SetTrackingCalibratedOrigin
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  long unaff_x19;
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0x10) = param_3;
  thunk_FUN_049ee3d8();
  if (*(long *)(unaff_x22 + 8) != 0) {
    FUN_090a1cb4();
    iVar1 = (uint)(param_4 == 3) << 1;
    if (param_4 == 2) {
      iVar1 = 1;
    }
    *(int *)(unaff_x19 + 0x24) = iVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


